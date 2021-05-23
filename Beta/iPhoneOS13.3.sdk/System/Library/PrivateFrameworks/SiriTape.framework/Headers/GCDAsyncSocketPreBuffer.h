/*
 Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
 */

#import <Foundation/NSObject.h>

@interface GCDAsyncSocketPreBuffer : NSObject

{
    char *preBuffer;
    unsigned long long preBufferSize;
    char *readPointer;
    char *writePointer;
}

- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)reset;
- (unsigned long long)availableSpace;
- (unsigned long long)availableBytes;
- (char *)readBuffer;
- (char *)writeBuffer;
- (void)ensureCapacityForWrite:(unsigned long long)arg1;
- (void)getReadBuffer:(char **)arg1 availableBytes:(unsigned long long *)arg2;
- (void)didRead:(unsigned long long)arg1;
- (void)getWriteBuffer:(char **)arg1 availableSpace:(unsigned long long *)arg2;
- (void)didWrite:(unsigned long long)arg1;

@end
