/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface GKRingBuffer : NSObject

{
    void *ringBufRef;
    unsigned int endTime;
    unsigned int capacity;
    unsigned int bytesPerFrame;
}

- (id)init;
- (void)dealloc;
- (id)initWithCapacity:(unsigned int)arg1 bytesPerFrame:(unsigned int)arg2;
- (void)increaseCapacity:(unsigned int)arg1;
- (_Bool)store:(char *)arg1 numSamples:(unsigned int)arg2 timestamp:(unsigned int)arg3;
- (int)needsNewNumSamples:(unsigned int)arg1 timestamp:(unsigned int)arg2;
- (int)fetch:(char *)arg1 numSamples:(unsigned int)arg2 timestamp:(unsigned int)arg3;

@end
