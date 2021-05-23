/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableDictionary;

@protocol CAMAdditiveAnimatorDelegate;

@interface CAMAdditiveAnimator : NSObject

{
    id <CAMAdditiveAnimatorDelegate> _delegate;
    NSMutableDictionary *__values;
    NSMutableDictionary *__animations;
    CADisplayLink *__displayLink;
}

@property (nonatomic, readonly) NSMutableDictionary *_values;
@property (nonatomic, readonly) NSMutableDictionary *_animations;
@property (retain, nonatomic) CADisplayLink *_displayLink;
@property (weak, nonatomic) id <CAMAdditiveAnimatorDelegate> delegate;
@property (nonatomic, readonly, getter=isAnimating) _Bool animating;

- (id)init;
- (void)dealloc;
- (void)setValue:(double)arg1 forKey:(id)arg2;
- (double)valueForKey:(id)arg1;
- (void)_updateDisplayLink;
- (void)_handleDisplayLinkFired:(id)arg1;
- (void)setValue:(double)arg1 forKey:(id)arg2 duration:(double)arg3 timingCurve:(id)arg4;
- (_Bool)isAnimatingForKey:(id)arg1;

@end
