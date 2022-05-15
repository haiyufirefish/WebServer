# CMakeList.txt : CMake project for test_cmake, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_library(webserver server/webserver.cpp server/webserver.h  server/epoller.h server/epoller.cpp
            http/httpconn.cpp http/httpconn.h http/httprequest.cpp http/httprequest.h http/httpresponse.cpp http/httpresponse.h
            log/log.h log/log.cpp log/blockqueue.h
            pool/sqlconnpool.h pool/sqlconnpool.cpp
            pool/sqlconnRAII.h pool/threadpool.h
            buffer/buffer.cpp buffer/buffer.h
            timer/heaptimer.cpp timer/heaptimer.h
            )




# TODO: Add tests and install targets if needed.
