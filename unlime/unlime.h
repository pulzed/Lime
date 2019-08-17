/*
 * Copyright (c) 2019 Danijel Durakovic
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do
 * so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

 /*
  *  Unlime
  *
  *  unlime.h
  *  Class for Lime datafile extraction.
  *
  */

#pragma once

#ifndef LIME_UNLIME_H_
#define LIME_UNLIME_H_

#include <string>
#include <unordered_map>
#include <zlib.h>

class Unlime
{
private:
	struct DictItem
	{
		uint64_t seek_id;
		uint64_t size;
		uint32_t checksum;
	};

	using T_DictCategory = std::unordered_map<std::string, int>;
	using T_DictMap = std::unordered_map<std::string, T_DictCategory>;

	T_DictMap dictMap;

public:
	using T_Bytes = std::vector<Bytef>;

	struct Options
	{
		bool integrityCheck = true;
		bool checkHeadString = true;
		std::string headString;
	} options;

	void readDict()
	{
	}

	T_Bytes get(std::string const& category, std::string const& key)
	{
		return T_Bytes();
	}
};

#endif // LIME_UNLIME_H_