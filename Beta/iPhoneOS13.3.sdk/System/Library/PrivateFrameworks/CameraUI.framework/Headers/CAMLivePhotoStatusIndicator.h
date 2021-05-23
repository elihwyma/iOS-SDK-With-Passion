/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlStatusIndicator.h>

@class CAMLivePhotoAnimationCache;

@interface CAMLivePhotoStatusIndicator : CAMControlStatusIndicator

{
    long long _livePhotoMode;
    CAMLivePhotoAnimationCache *__animationCache;
}

@property (retain, nonatomic) CAMLivePhotoAnimationCache *_animationCache;
@property (nonatomic) long long livePhotoMode;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canAnimate;
- (_Bool)shouldUseOutline;
- (id)imageNameForCurrentState;
- (_Bool)shouldUseActiveTintForCurrentState;
- (void)preloadAnimationFrames;
- (id)imageAnimationFramesForCurrentState;

@end
