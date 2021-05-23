/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <Foundation/NSObject.h>

@class CADisplayLink;

@protocol PKRenderLoopDelegate;

@interface PKRenderLoop : NSObject

{
    CADisplayLink *_displayLink;
    _Bool _effectivePaused;
    _Bool _background;
    _Bool _invalidated;
    _Bool _drawing;
    _Bool _inApplicationContext;
    _Bool _paused;
    long long _preferredFramesPerSecond;
    id <PKRenderLoopDelegate> _delegate;
}

@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;
@property (nonatomic, readonly, getter=isDrawing) _Bool drawing;
@property (nonatomic) _Bool inApplicationContext;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (weak, nonatomic) id <PKRenderLoopDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_drawAtTime:(double)arg1;
- (void)attachToScreen:(id)arg1;
- (void)_updateEffectivePausedState;
- (void)_drawWithDisplayLink:(id)arg1;
- (void)_willDraw;
- (void)_didDraw;
- (_Bool)_subclassPreferredPauseState;

@end
