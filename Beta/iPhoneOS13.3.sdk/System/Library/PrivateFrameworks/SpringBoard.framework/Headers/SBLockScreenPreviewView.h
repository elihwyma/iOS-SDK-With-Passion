/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class CSPageControl, CSQuickActionsView, SBFLockScreenDateView, SBHomeGrabberView, SBUICallToActionLabel, SBUILegibilityView, SBUIProudLockIconView, SBWallpaperController, UILabel, UIStatusBar, _UILegibilityLabel, _UILegibilitySettings;

@interface SBLockScreenPreviewView : UIView

{
    UIView *_wallpaperView;
    SBFLockScreenDateView *_dateView;
    _UILegibilityLabel *_slideToUnlockLegibilityLabel;
    UIStatusBar *_statusBar;
    _UILegibilitySettings *_legibilitySettings;
    SBWallpaperController *_wallpaperController;
    SBUILegibilityView *_cameraView;
    UILabel *_slideToUnlockView;
    CSPageControl *_dashBoardPageControl;
    SBUICallToActionLabel *_callToActionLabel;
    SBUIProudLockIconView *_proudLockIconView;
    CSQuickActionsView *_quickActionsView;
    SBHomeGrabberView *_homeGrabberView;
}

- (void)layoutSubviews;
- (void)_layoutDateView;
- (void)_layoutWallpaperView;
- (void)_layoutQuickActionsView;
- (void)_layoutPageControl;
- (void)_layoutCallToActionLabel;
- (void)_setupWallpaperViewWithImage:(id)arg1;
- (void)_setupDateViewWithOptions:(unsigned long long)arg1;
- (void)_setupStatusBar;
- (void)_setupPageControl;
- (void)_setupCallToActionLabel;
- (void)_setupProudLockIconView;
- (void)_setupQuickActionView;
- (void)_setupHomeGrabberView;
- (void)_layoutStatusBar;
- (void)_layoutProudLockIconView;
- (void)_layoutHomeGrabberView;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperController:(id)arg2 options:(unsigned long long)arg3 wallpaperImage:(id)arg4;

@end
