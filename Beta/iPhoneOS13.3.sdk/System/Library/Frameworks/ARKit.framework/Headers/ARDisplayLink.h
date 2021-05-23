/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARRunLoop, CADisplayLink;

@interface ARDisplayLink : NSObject

{
    CADisplayLink *_displayLink;
    CDUnknownBlockType _callback;
    struct os_unfair_lock_s _lock;
    double _actualVsyncOffset;
    long long _preferredFramesPerSecond;
    double _vsyncOffset;
    ARRunLoop *_runloop;
}

@property long long preferredFramesPerSecond;
@property double vsyncOffset;
@property (nonatomic, readonly) ARRunLoop *runloop;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithPreferredFramesPerSecond:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_recomputeActualVsyncOffsetWithVsyncOffset:(double)arg1 preferredFramesPerSecond:(long long)arg2;
- (void)displayLinkCallback;

@end
