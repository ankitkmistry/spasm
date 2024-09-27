#ifndef SOURCE_UTILS_COMMON_HPP_
#define SOURCE_UTILS_COMMON_HPP_

#include <cstddef>
#include <cstdint>
#include <string>
#include <filesystem>
#include <any>
#include <sputils.hpp>

using std::any_cast, std::string, std::vector;

#define null (nullptr)

namespace fs = std::filesystem;

using uint8 = uint8_t;
using uint16 = uint16_t;
using uint32 = uint32_t;
using uint64 = uint64_t;

#endif /* SOURCE_UTILS_COMMON_HPP_ */
