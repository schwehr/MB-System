set(tests
    mb7k2jstar_test
    mbabsorption_test
    mbareaclean_test
    mbauvloglist_test
    mbbackangle_test
    mbclean_test
    mbconfig_test
    mbcopy_test
    mbctdlist_test
    mbdatalist_test
    mbdefaults_test
    mbdumpesf_test
    mbextractsegy_test
    mbfilter_test
    mbformat_test
    mbgetesf_test
    mbgpstide_test
    mbgrid_test
    mbhistogram_test
    mbinfo_test
    mblevitus_test
    mblist_test
    mbmakeplatform_test
    mbminirovnav_test
    mbmosaic_test
    mbnavlist_test
    mbpreprocess_test
    mbprocess_test
    mbrolltimelag_test
    mbroutetime_test
    mbsegygrid_test
    mbsegyinfo_test
    mbsegylist_test
    mbsegypsd_test
    mbset_test
    mbsslayout_test
    mbsvplist_test
    mbsvpselect_test
    mbtime_test
    mbvoxelclean_test)

foreach(test ${tests})
  add_test(NAME ${test} COMMAND "${CMAKE_CURRENT_SOURCE_DIR}/${test}.py")
endforeach()
