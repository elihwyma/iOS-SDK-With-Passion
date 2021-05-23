/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCVideoFrameBufferPool : NSObject

{
    int _maxBufferCount;
    NSMutableDictionary *_bufferPool;
}

- (void)dealloc;
- (id)initWithCapacity:(int)arg1;
- (_Bool)addFrame:(struct __CVBuffer *)arg1 time:(long long)arg2;
- (_Bool)releaseFrameWithTime:(long long)arg1;

@end
