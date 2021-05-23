/*
 Image: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
 */

#import <Foundation/NSObject.h>

@interface OSAStreamDeflater : NSObject

{
    struct z_stream_s _strm;
    char *_in;
    char *_out;
    _Bool _capViolation;
}

@property _Bool capViolation;

- (id)init;
- (void)dealloc;
- (id)copyDeflatedDataFromStream:(struct __sFILE *)arg1 withCap:(unsigned int)arg2;

@end
