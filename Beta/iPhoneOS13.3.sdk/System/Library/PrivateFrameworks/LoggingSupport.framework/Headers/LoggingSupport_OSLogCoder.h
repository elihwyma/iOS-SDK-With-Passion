/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface LoggingSupport_OSLogCoder : NSObject

{
    struct {
        unsigned int :4;
        unsigned int :4;
        unsigned char _field1;
        unsigned char _field2[0];
    } *_fmt_cmd;
    struct os_trace_blob_s *_ob;
    struct os_trace_blob_s *_ob_pub;
    struct os_trace_blob_s *_ob_priv;
    unsigned char _privacy_level;
    struct os_trace_blob_s _ob_mask;
    char _maskbuf[128];
    unsigned long long _maxsz;
    unsigned short _written;
    unsigned short _offset;
    _Bool _truncated;
    _Bool _initialized;
    _Bool _mask;
}

- (void)setTruncated;
- (void)setPublic;
- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)_initBlob;

@end
