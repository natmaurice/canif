# Canif 
## Presentation 

This is a C/C++ library that is designed to allocate images of arbritrary dimensions, while ensuring padding on image borders. 

### Supported data types

|----------|--------|---------|---------|---------|
| type     | 8-bits | 16-bits | 32-bits | 64-bits |
|----------|--------|---------|---------|---------|
| signed   | Y      | Y       | Y       | Y       |
| unsigned | Y      | Y       | Y       | Y       |
| float    |        |         | Y       | Y       |
|----------|--------|---------|---------|---------|


### Interoperability 

- OpenCV: Planned

## Memory Layout

- Row Pitch is always a multiple of cache size, and data is always


## Later?

- TODO: Reduce chances of false sharing by avoiding power-of-two pitches
- TODO: png and tiff read/write support
