/**********************************************************\
|                                                          |
| php_xxtea.h                                              |
|                                                          |
| XXTEA for pecl include file.                             |
|                                                          |
| Encryption Algorithm Authors:                            |
|      David J. Wheeler                                    |
|      Roger M. Needham                                    |
|                                                          |
| Code Author:  Ma Bingyao <mabingyao@gmail.com>           |
| LastModified: Apr 06, 2015                               |
|                                                          |
\**********************************************************/

#ifndef PHP_XXTEA_H
#define PHP_XXTEA_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"

extern zend_module_entry xxtea_module_entry;
#define phpext_xxtea_ptr &xxtea_module_entry

#define PHP_XXTEA_MODULE_NAME   "xxtea"
#define PHP_XXTEA_BUILD_DATE    __DATE__ " " __TIME__
#define PHP_XXTEA_VERSION       "1.0.11"
#define PHP_XXTEA_AUTHOR        "Ma Bingyao"
#define PHP_XXTEA_HOMEPAGE      "https://github.com/xxtea/xxtea-pecl"

ZEND_MINIT_FUNCTION(xxtea);
ZEND_MSHUTDOWN_FUNCTION(xxtea);
ZEND_MINFO_FUNCTION(xxtea);

/* declaration of functions to be exported */
ZEND_FUNCTION(xxtea_encrypt);
ZEND_FUNCTION(xxtea_decrypt);
ZEND_FUNCTION(xxtea_info);

#endif /* ifndef PHP_XXTEA_H */
