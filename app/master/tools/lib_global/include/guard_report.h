/**
 * Copyright (C) 2015-2018 IQIYI
 * All rights reserved.
 *
 * AUTHOR(S)
 *   Zheng Shuxin
 *   E-mail: zhengshuxin@qiyi.com
 * 
 * VERSION
 *   Wed 24 Jan 2018 12:06:42 PM CST
 */

#pragma once

class guard_report
{
public:
	guard_report(const char* guard_manager, int conn_timeout = 10,
		int rw_timeout = 10);
	~guard_report(void) {}

	bool report(const acl::string& body);

private:
	acl::string guard_manager_;
	int conn_timeout_;
	int rw_timeout_;

	bool tcp_report(const acl::string& body);
	bool udp_report(const acl::string& body);
};
