/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSOutputStream;

__attribute__((visibility("hidden")))
@interface _NSJSONWriter : NSObject

{
    NSOutputStream *outputStream;
    int kind;
    char *dataBuffer;
    unsigned long long dataBufferLen;
    unsigned long long dataLen;
    _Bool freeDataBuffer;
    char *tempBuffer;
    unsigned long long tempBufferLen;
    long long totalDataWritten;
}

- (id)init;
- (void)dealloc;
- (void)resizeTemporaryBuffer:(unsigned long long)arg1;
- (id)dataWithRootObject:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (long long)writeRootObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)appendString:(id)arg1 range:(struct _NSRange)arg2 error:(id *)arg3;

@end
