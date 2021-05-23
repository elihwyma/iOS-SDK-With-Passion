/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, SCNRecursiveLock;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SCNDisplayLink : NSObject

{
    CADisplayLink *_caDisplayLink;
    _Bool _supportTargetTimestamp;
    CDUnknownBlockType _block;
    CDUnknownBlockType _adaptativeFrameDuration;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _paused;
    _Bool _invalidated;
    double _lastFrameTime;
    float _preferredFrameRate;
    SCNRecursiveLock *_runningLock;
    _Atomic int _queuedFrameCount;
}

@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) float preferredFrameRate;
@property (copy, nonatomic) CDUnknownBlockType adaptativeFrameRate;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_cleanup;
- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_isInvalidated;
- (void)setNeedsDisplay;
- (_Bool)setPaused:(_Bool)arg1 nextFrameTimeHint:(double)arg2 lastUpdate:(double)arg3;
- (void)_caDisplayLinkCallback;
- (void)_callbackWithTime:(double)arg1;
- (int)queuedFrameCount;

@end
