#!/usr/bin/python3

from jinja2 import Environment, FileSystemLoader


# Assume script is ran from project root dir
src_dir = "src/"
inc_dir = "include/"

env = Environment(loader = FileSystemLoader("gen"))

DATATYPES = [{'FULL': 'uint8_t', 'SHORT': 'u8'},
             {'FULL': 'uint16_t', 'SHORT': 'u16'},
             {'FULL': 'uint32_t', 'SHORT': 'u32'},
             {'FULL': 'uint64_t', 'SHORT': 'u64'},
             {'FULL': 'int8_t', 'SHORT': 'i8'},
             {'FULL': 'int16_t', 'SHORT': 'i16'},
             {'FULL': 'int32_t', 'SHORT': 'i32'},
             {'FULL': 'int64_t', 'SHORT': 'i64'},
             {'FULL': 'float', 'SHORT': 'f32'},
             {'FULL': 'double', 'SHORT': 'f64'}]


def gen_mat(source, dimensions):

    (src_filename, dst_filename) = source
    src_header_filename = "matx-functions.hpp.j2"
    dst_header_filename = f"mat{dimensions}d-functions.hpp"
    
    template_mat2d = env.get_template(src_filename)
    template_mat2d_header = env.get_template(src_header_filename)
    

    all_cpp_content = template_mat2d.render(
        datatypes = DATATYPES
    )

    all_hpp_content = template_mat2d_header.render(
        datatypes = DATATYPES,
        dimensions = dimensions
    )
    
    with open(f"{src_dir}/{dst_filename}", "w+") as file:
        file.write(all_cpp_content)

    with open(f"{inc_dir}{dst_header_filename}", "w+") as file:
        file.write(all_hpp_content)
    
    pass


gen_mat(("mat1d.cpp.j2", "mat1d.cpp"), dimensions=1)
gen_mat(("mat2d.cpp.j2", "mat2d.cpp"), dimensions=2)
gen_mat(("mat3d.cpp.j2", "mat3d.cpp"), dimensions=3)
