// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#include "s3_uri.h"

#include <algorithm>
#include <vector>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/logging/LogLevel.h>
#include <aws/core/utils/logging/LogSystemInterface.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/s3/S3Client.h>

namespace doris {

const std::string S3URI::_SCHEME_S3 = "s3";
const std::string S3URI::_SCHEME_HTTP = "http";
const std::string S3URI::_SCHEME_HTTPS = "https";
const std::string S3URI::_SCHEME_DELIM = "://";
const std::string S3URI::_PATH_DELIM = "/";
const std::string S3URI::_QUERY_DELIM = "?";
const std::string S3URI::_FRAGMENT_DELIM = "#";

/// eg:
///     s3://bucket1/path/to/file.txt
/// _schema: s3
/// _bucket: bucket1
/// _key:    path/to/file.txt
bool S3URI::parse() {
    return true;
}

std::string S3URI::to_string() const {
    return _location;
}

} // end namespace doris
