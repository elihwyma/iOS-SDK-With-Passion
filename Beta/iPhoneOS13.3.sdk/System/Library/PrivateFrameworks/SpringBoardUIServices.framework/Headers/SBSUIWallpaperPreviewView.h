/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIView.h>

@class NSString, SBFLockScreenDateView, SBFWallpaperView, UIButton, UILabel, UIViewPropertyAnimator, _SBUIWallpaperInstructionView, _UILegibilityLabel;

@protocol SBSUIWallpaperPreviewViewDelegate;

@interface SBSUIWallpaperPreviewView : UIView

{
    UIViewPropertyAnimator *_cropInstructionsAnimator;
    UIViewPropertyAnimator *_effectInstructionsAnimator;
    UIViewPropertyAnimator *_fadeOutInstructionsAnimator;
    _UILegibilityLabel *_irisInstructionsLabel1;
    _UILegibilityLabel *_irisInstructionsLabel2;
    UILabel *_effectStateLabel;
    _SBUIWallpaperInstructionView *_cropInstructionView;
    UIView *_gradientView;
    _Bool _irisPossible;
    _Bool _parallaxPossible;
    id <SBSUIWallpaperPreviewViewDelegate> _delegate;
    SBFLockScreenDateView *_dateView;
    SBFWallpaperView *_wallpaperView;
    UIButton *_irisButton;
    UIButton *_parallaxButton;
    UIButton *_cancelButton;
    UIButton *_setButton;
}

@property (weak, nonatomic) id <SBSUIWallpaperPreviewViewDelegate> delegate;
@property (retain, nonatomic) SBFLockScreenDateView *dateView;
@property (nonatomic, readonly) SBFWallpaperView *wallpaperView;
@property (retain, nonatomic) UIButton *irisButton;
@property (retain, nonatomic) UIButton *parallaxButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *setButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (void)updateForChangedSettings:(id)arg1;
- (void)irisWallpaperViewPlaybackStateDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperView:(id)arg2;
- (void)setWallpaperView:(id)arg1;
- (void)displayInstructionsForEffect:(unsigned long long)arg1 enabled:(_Bool)arg2 animated:(_Bool)arg3;
- (id)_makeButtonWithVisualEffectBlur;
- (void)_userDidTapOnIrisButton:(id)arg1;
- (void)_userDidTapOnParallaxButton:(id)arg1;
- (void)_userDidTapOnCancelButton:(id)arg1;
- (void)_userDidTapOnSetButton:(id)arg1;
- (void)_fadeOutInstructionsWithDelay:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_layoutGradientView;
- (void)_layoutStackedButtons;
- (void)_layoutIrisButton;
- (void)_layoutParallaxButton;
- (void)_layoutCancelButton;
- (void)_layoutSetButton;
- (void)_layoutDateView;
- (void)_layoutWallpaperView;
- (void)_layoutIrisInstructionLabels;
- (_Bool)shouldEnableParallax;
- (double)_segmentedControlInset;

@end
