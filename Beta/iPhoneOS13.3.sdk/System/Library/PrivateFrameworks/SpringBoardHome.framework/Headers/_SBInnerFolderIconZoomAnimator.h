/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBIconZoomAnimator.h>

@class SBFloatyFolderView, SBHFolderZoomSettings, SBIconView;

@interface _SBInnerFolderIconZoomAnimator : SBIconZoomAnimator

{
    SBFloatyFolderView *_folderView;
    SBIconView *_folderIconView;
    struct CGAffineTransform _folderIconViewScaleTransform;
}

@property (retain, nonatomic) SBHFolderZoomSettings *settings;

- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_cleanupAnimation;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (id)initWithFolderController:(id)arg1 iconView:(id)arg2 iconZoomScaleDimension:(struct CGPoint)arg3;
- (void)_applyIconCrossfadeForZoomFraction:(double)arg1;
- (void)_applyIconTransformForZoomFraction:(double)arg1;
- (void)_calculateZoomedOffset:(struct CGPoint *)arg1 scale:(struct CGPoint *)arg2 forIcon:(id)arg3 withView:(id)arg4;

@end
