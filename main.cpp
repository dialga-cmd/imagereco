#include <iostream>
#include <opencv2/opencv.hpp>
#include <curl/curl.h>
#include <nlohmann/json.hpp>
#include <onnxruntime_c_api.h>

int main() {
    std::cout << "OpenCV version: " << CV_VERSION << std::endl;
    std::cout << "ONNX Runtime setup successful!" << std::endl;
    return 0;
}
