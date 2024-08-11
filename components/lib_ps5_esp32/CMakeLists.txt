idf_component_register(SRCS "ps5.c" "ps5_l2cap.c" "ps5_parser.c" "ps5_spp.c"
                  INCLUDE_DIRS "include" "."
                  REQUIRES bt nvs_flash driver)