/*
https://github.com/solusipse/ureq

The MIT License (MIT)

Copyright (c) 2015 solusipse

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef UREQ_DEFINES_H
#define UREQ_DEFINES_H

/* HTTP SYMBOLS */
#define UREQ_GET 	     "GET"
#define UREQ_POST 	     "POST"
#define UREQ_ALL 	     "ALL"
#define UREQ_PUT 	     "PUT"
#define UREQ_DELETE	     "DELETE"
#define UREQ_HTTP_V      "HTTP/1.1"

#define UREQ_HTTP_REQ_LEN 14

#define UREQ_EOL         "\r\n"
#define UREQ_EOL_LEN     2

#define UREQ_FS_START    0x12000

/*
   This may be redefined on your device
   Check corresponding file in hardware directory
*/
#define UREQ_BUFFER_SIZE 1024

#endif /* UREQ_DEFINES_H */
   