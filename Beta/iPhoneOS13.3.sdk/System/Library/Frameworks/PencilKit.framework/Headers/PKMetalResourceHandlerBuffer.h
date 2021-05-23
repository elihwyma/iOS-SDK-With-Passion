/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class PKMetalBuffer;

@protocol MTLDevice;

@interface PKMetalResourceHandlerBuffer : NSObject

{
    id <MTLDevice> _device;
    PKMetalBuffer *_buffer;
    unsigned long long _currentOffset;
    unsigned long long _bufferSize;
    unsigned long long _options;
    _Bool _purgeable;
}

- (id)newBufferWithLength:(unsigned long long)arg1 bytes:(const void *)arg2 outOffset:(unsigned long long *)arg3;
- (id)initWithSize:(unsigned long long)arg1 options:(unsigned long long)arg2 device:(id)arg3 purgeable:(_Bool)arg4;

@end
