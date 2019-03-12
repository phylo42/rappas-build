#pragma once

#include <string>
#include <memory>

class buffered_reader
{
public:
    virtual ~buffered_reader();
    virtual std::string read_next_chunk() = 0;
    virtual bool empty() const = 0;
    virtual bool good() const = 0;
};

std::unique_ptr<buffered_reader> make_mapped_buffered_reader(const std::string& file_name);