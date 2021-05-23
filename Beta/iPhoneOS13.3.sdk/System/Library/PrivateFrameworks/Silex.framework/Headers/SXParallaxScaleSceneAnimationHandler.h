/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXSceneComponentAnimationHandler.h>

@class SXContainerComponentView;

@interface SXParallaxScaleSceneAnimationHandler : SXSceneComponentAnimationHandler

{
    SXContainerComponentView *_headerComponent;
    unsigned long long _attachmentType;
}

@property (weak, nonatomic) SXContainerComponentView *headerComponent;
@property (nonatomic) unsigned long long attachmentType;

- (void)prepareAnimation;
- (void)updateAnimationWithFactor:(double)arg1;
- (_Bool)shouldFinishAtEndOfScrollView;
- (double)factorForVisibileBounds:(struct CGRect)arg1 andAbsoluteComponentRect:(struct CGRect)arg2;
- (void)ensureScalabilityOfHeaderComponentFill;
- (struct CGRect)fillContentFrameForScale:(double)arg1 andTranslation:(double)arg2;

@end
