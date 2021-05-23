/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction, NUAnimationFactory;

@interface NUSlideViewAnimator : NSObject

{
    _Bool _animating;
    double _duration;
    CAMediaTimingFunction *_mediaTimingFunction;
    double _translateBoundsPadding;
    NUAnimationFactory *_animationFactory;
    struct CGRect _bounds;
}

@property (nonatomic, getter=isAnimating) _Bool animating;
@property (retain, nonatomic) NUAnimationFactory *animationFactory;
@property (nonatomic) double duration;
@property (retain, nonatomic) CAMediaTimingFunction *mediaTimingFunction;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) double translateBoundsPadding;

- (id)initWithBounds:(struct CGRect)arg1;
- (struct CGAffineTransform)toViewTransformForDirection:(unsigned long long)arg1;
- (struct CGAffineTransform)fromViewTransformForDirection:(unsigned long long)arg1;
- (unsigned long long)animationOptionsForAnimationFactory:(id)arg1;
- (void)translateFromView:(id)arg1 toView:(id)arg2 direction:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;

@end
