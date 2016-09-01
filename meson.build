project('yo-kernel', 'c',
        version: '0.0.1',
        default_options: ['c_std=gnu99'])

add_global_arguments([
    '-fno-builtin',
    '-Wall',
    '-Wstrict-prototypes',
    '-Wshadow',
    '-Wundef',
    '-D__ARCH__=' + get_option('arch'),
    '-D__CHIP__=' + get_option('chip'),
    '-DINC_ARCH(x)=<arch/' + get_option('arch') + '/x>',
    '-DINC_CHIP(x)=<arch/' + get_option('arch') + '/' + get_option('chip') + '/x>'
], language: 'c')

linker_script_path = meson.current_source_dir() + '/include/arch/' + get_option('arch') + '/' + get_option('chip') + '/yo.ld'
add_global_link_arguments([
    '-T' + linker_script_path,
    '-nostdlib'
], language: 'c')

include_obj = include_directories('include', 'config')

srcs = []
subdir('config')
subdir('arch')
subdir('kernel')

executable('yo.elf', srcs, include_directories: include_obj)
