project(
	'steamvr_extract', 'cpp',
	default_options : 'cpp_std=c++11',
	version : '0.3.0',
	meson_version : '>= 0.44'
)

includes = include_directories('./')

json_dep = dependency('jsoncpp')
cc = meson.get_compiler('cpp')
dl_dep = cc.find_library('dl', required : false)
boost_dep = dependency('boost', modules : ['system', 'filesystem'])

sources = [
    'DisplayExtractor.cpp',
    'DisplayDescriptor.cpp',
    'ChaperoneData.cpp',
    'ComputeOutputFiles.cpp',
    'FindDriver.cpp',
    'ServerDriverHost.cpp',
    'Settings.cpp',
    'DriverLog.cpp',
    'Properties.cpp',
    'DriverManager.cpp',
    'Resources.cpp',
    'DriverContext.cpp',
    'DriverLoader.cpp',
    'RGBPoints.cpp'
]

executable('steamvr_extract', sources, include_directories : includes, dependencies : [json_dep, dl_dep, boost_dep], install : true)
