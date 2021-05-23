/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface SBKZipDeflateMemoryOutputStream : NSObject

{
    NSMutableData *deflatedData;
    struct z_stream_s zstream;
    char *_outputBuffer;
    int _bufferingSize;
}

+ (id)dataByDeflatingData:(id)arg1;

- (void)dealloc;
- (id)close;
- (id)initWithBufferingSize:(int)arg1 compressionType:(unsigned long long)arg2;
- (_Bool)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;

@end
