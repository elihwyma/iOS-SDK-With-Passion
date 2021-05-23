/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@interface VMUTaskMemoryCache : NSObject

{
    struct mapped_memory_t *_memoryRegions;
    unsigned int _task;
    _Bool _taskIs64Bit;
    _Bool _stopped;
}

+ (id)taskMemoryCacheForTask:(unsigned int)arg1;
+ (_Bool)taskIs64Bit:(unsigned int)arg1;

- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1;
- (void)flushMemoryCache;
- (int)mapAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnedAddress:(unsigned long long *)arg3 returnedSize:(unsigned long long *)arg4;
- (int)stopPeeking;
- (int)peekAtAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnsBuf:(void **)arg3;
- (int)startPeeking;
- (int)readPointerAt:(unsigned long long)arg1 value:(unsigned long long *)arg2;
- (_Bool)copyRange:(struct _VMURange)arg1 to:(void *)arg2;

@end
