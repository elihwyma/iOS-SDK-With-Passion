/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXSceneComponentAnimationHandler.h>

@class SXComponentView, UIView;

@interface SXParallaxFadeSceneAnimationHandler : SXSceneComponentAnimationHandler

{
    UIView *_overlayView;
    SXComponentView *_headerComponentView;
    double _scrollDistance;
    double _alphaDistance;
    unsigned long long _attachmentType;
}

@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) SXComponentView *headerComponentView;
@property (nonatomic) double scrollDistance;
@property (nonatomic) double alphaDistance;
@property (nonatomic) unsigned long long attachmentType;

- (void)startAnimation;
- (void)finishAnimation;
- (void)prepareAnimation;
- (void)updateAnimationWithFactor:(double)arg1;
- (id)componentViewToAnimate;
- (_Bool)shouldFinishAtEndOfScrollView;
- (double)factorForVisibileBounds:(struct CGRect)arg1 andAbsoluteComponentRect:(struct CGRect)arg2;

@end
