/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXComponentAnimation, SXComponentView;

@interface SXComponentAnimationHandler : NSObject

{
    SXComponentView *_component;
    SXComponentAnimation *_animation;
    long long _state;
    double _factor;
}

@property (nonatomic, readonly) SXComponentView *component;
@property (nonatomic, readonly) SXComponentAnimation *animation;
@property (nonatomic) long long state;
@property (nonatomic, readonly) double factor;

- (_Bool)isEqual:(id)arg1;
- (void)startAnimation;
- (void)finishAnimation;
- (id)initWithComponent:(id)arg1 withAnimation:(id)arg2;
- (void)prepareAnimation;
- (void)updateAnimationWithFactor:(double)arg1;
- (_Bool)animationShouldRepeat;
- (id)componentViewToAnimate;
- (double)screenHeightStartOffset;
- (_Bool)shouldFinishAtEndOfScrollView;
- (double)factorForVisibileBounds:(struct CGRect)arg1 andAbsoluteComponentRect:(struct CGRect)arg2;

@end
