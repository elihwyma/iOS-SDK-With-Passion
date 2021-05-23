/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class CAPropertyAnimation, NSString, NSTimer, OFPropertyAnimationLayer;

@interface OFPropertyAnimation : NSObject

{
    NSString *_animationKey;
    OFPropertyAnimationLayer *_layer;
    CAPropertyAnimation *_propertyAnimation;
    NSTimer *_timer;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)animateWithDuration:(double)arg1 rootLayer:(id)arg2 animation:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)interpolateValueForKey:(id)arg1 animation:(CDUnknownBlockType)arg2 progress:(double)arg3;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)_cleanup;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)handleTimer:(id)arg1;
- (struct CGPoint)animatedPoint;
- (void)setDestinationAnimatedPoint:(struct CGPoint)arg1;
- (double)animatedFloat;
- (void)setDestinationAnimatedFloat:(double)arg1;

@end
