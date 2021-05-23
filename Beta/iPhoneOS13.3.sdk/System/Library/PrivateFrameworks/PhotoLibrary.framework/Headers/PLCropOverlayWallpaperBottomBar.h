/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIView.h>

@class PLWallpaperButton, _UIBackdropView, _UILegibilityLabel;

@interface PLCropOverlayWallpaperBottomBar : UIView

{
    _Bool _motionToggleHidden;
    _Bool _shouldOnlyShowLockScreenButton;
    _Bool _shouldOnlyShowHomeScreenButton;
    PLWallpaperButton *_doCancelButton;
    PLWallpaperButton *_doSetButton;
    PLWallpaperButton *_doSetHomeScreenButton;
    PLWallpaperButton *_doSetLockScreenButton;
    PLWallpaperButton *_doSetBothScreenButton;
    PLWallpaperButton *_motionToggle;
    _UILegibilityLabel *_titleLabel;
    UIView *_separatorLine;
    _UIBackdropView *_backdropView;
    double _maxToggleWidth;
}

@property (retain, nonatomic) _UILegibilityLabel *titleLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) _UIBackdropView *backdropView;
@property (nonatomic) double maxToggleWidth;
@property (retain, nonatomic, readonly) PLWallpaperButton *doCancelButton;
@property (retain, nonatomic, readonly) PLWallpaperButton *doSetButton;
@property (retain, nonatomic, readonly) PLWallpaperButton *doSetHomeScreenButton;
@property (retain, nonatomic, readonly) PLWallpaperButton *doSetLockScreenButton;
@property (retain, nonatomic, readonly) PLWallpaperButton *doSetBothScreenButton;
@property (retain, nonatomic, readonly) PLWallpaperButton *motionToggle;
@property (nonatomic) _Bool motionToggleHidden;
@property (nonatomic) _Bool shouldOnlyShowLockScreenButton;
@property (nonatomic) _Bool shouldOnlyShowHomeScreenButton;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateForChangedSettings:(id)arg1;
- (void)_commonPLCropOverlayWallpaperBottomBarInitialization;
- (void)_commonPLCropOverlayWallpaperBottomBarInitializationPhone;
- (void)_commonPLCropOverlayWallpaperBottomBarInitializationPad;
- (void)_layoutSubviewsPhone;
- (void)_layoutSubviewsPad;
- (double)widthForToggleText;
- (struct CGSize)_sizeForString:(id)arg1;

@end
