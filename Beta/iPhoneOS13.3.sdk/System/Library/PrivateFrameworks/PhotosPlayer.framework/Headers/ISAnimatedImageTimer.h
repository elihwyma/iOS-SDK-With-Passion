/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISObservable.h>

@class CADisplayLink, _ISAnimatedImageTimerForwardingProxy;

__attribute__((visibility("hidden")))
@interface ISAnimatedImageTimer : ISObservable

{
    CADisplayLink *_displayLink;
    _ISAnimatedImageTimerForwardingProxy *_displayLinkProxy;
    double _timestamp;
}

@property (nonatomic, setter=_setTimestamp:) double timestamp;

+ (id)sharedTimer;

- (id)init;
- (void)dealloc;
- (void)_updateDisplayLink;
- (id)mutableChangeObject;
- (void)hasObserversDidChange;
- (void)_fireTimerWithInterval:(double)arg1;
- (void)_iosInitialization;
- (void)_iosUpdateDisplayLink;
- (void)_iosAnimationTimerFired:(id)arg1;
- (void)_iosDealloc;

@end
