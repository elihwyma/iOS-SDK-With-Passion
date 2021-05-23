/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class VCVideoFrameBufferPool;

__attribute__((visibility("hidden")))
@interface VCEffects : NSObject

{
    int _effectsMode;
    VCVideoFrameBufferPool *_bufferPool;
    _Bool _effectsApplied;
    _Bool _faceMeshTrackingEnabled;
}

@property (nonatomic) int effectsMode;
@property (nonatomic) _Bool effectsApplied;
@property (nonatomic) _Bool faceMeshTrackingEnabled;

- (id)init;
- (void)dealloc;
- (_Bool)addFrame:(struct __CVBuffer *)arg1 time:(long long)arg2;
- (_Bool)releaseFrameWithTime:(long long)arg1;

@end
