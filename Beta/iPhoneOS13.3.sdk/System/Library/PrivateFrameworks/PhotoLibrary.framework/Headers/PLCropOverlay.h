/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIView.h>

@class NSString, PLContactPhotoOverlay, PLCropOverlayBottomBar, PLCropOverlayCropView, PLCropOverlayWallpaperBottomBar, PLProgressHUD, UIButton, UIImageView, UILabel, UIToolbar;

@protocol PLCropOverlayDelegate;

@interface PLCropOverlay : UIView

{
    PLCropOverlayCropView *_cropView;
    UIImageView *_shadowView;
    UIView *_overlayContainerView;
    struct CGRect _cropRect;
    UIToolbar *_customToolbar;
    UILabel *_titleLabel;
    UIImageView *_topShineView;
    PLProgressHUD *_hud;
    float _statusBarHeight;
    int _mode;
    unsigned int _previewMode:1;
    unsigned int _cropRectIsVisible:1;
    unsigned int _offsetStatusBar:1;
    unsigned int _tookPhoto:1;
    unsigned int _showsCropRegion:1;
    unsigned int _controlsAreVisible:1;
    UIImageView *_bottomShineView;
    UIButton *_okButton;
    UIView *_wildcatPickerTopView;
    UIView *_wildcatPickerBottomView;
    _Bool _motionToggleIsOn;
    _Bool _isEditingHomeScreen;
    _Bool _isEditingLockScreen;
    _Bool _displayedInPopover;
    PLContactPhotoOverlay *_contactPhotoOverlay;
    NSString *_defaultOKButtonTitle;
    NSString *_defaultCancelButtonTitle;
    id <PLCropOverlayDelegate> _delegate;
    PLCropOverlayBottomBar *__bottomBar;
    UIButton *__cameraCancelButton;
}

@property (nonatomic, readonly) PLCropOverlayBottomBar *_bottomBar;
@property (nonatomic, readonly) UIButton *_cameraCancelButton;
@property (nonatomic, readonly) PLContactPhotoOverlay *contactPhotoOverlay;
@property (retain, nonatomic) UIView *cameraBottomBar;
@property (nonatomic, readonly) PLCropOverlayWallpaperBottomBar *wallpaperBottomBar;
@property (nonatomic) _Bool motionToggleIsOn;
@property (nonatomic) _Bool isEditingHomeScreen;
@property (nonatomic) _Bool isEditingLockScreen;
@property (nonatomic) _Bool motionToggleHidden;
@property (nonatomic, getter=isDisplayedInPopover) _Bool displayedInPopover;
@property (copy, nonatomic) NSString *defaultOKButtonTitle;
@property (copy, nonatomic) NSString *defaultCancelButtonTitle;
@property (weak, nonatomic) id <PLCropOverlayDelegate> delegate;
@property (nonatomic) _Bool previewMode;

- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (int)mode;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dismiss;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)titleRect;
- (void)_setMode:(int)arg1;
- (void)_updateTitle;
- (struct CGRect)cropRect;
- (void)setCancelButtonTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 mode:(int)arg2;
- (id)bottomBar;
- (id)initWithFrame:(struct CGRect)arg1 mode:(int)arg2 offsettingStatusBar:(_Bool)arg3;
- (_Bool)controlsAreVisible;
- (void)setControlsAreVisible:(_Bool)arg1;
- (id)overlayContainerView;
- (void)setOverlayContainerView:(id)arg1;
- (void)_createCropView;
- (void)insertIrisView:(id)arg1;
- (struct CGRect)bottomBarFrame;
- (void)setCropRectVisible:(_Bool)arg1 duration:(float)arg2;
- (void)didCapturePhoto;
- (void)didCaptureVideo;
- (void)didPlayVideo;
- (void)didPauseVideo;
- (void)statusBarHeightDidChange:(id)arg1;
- (void)_fadeOutCompleted:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)_tappedBottomBarCancelButton:(id)arg1;
- (void)_tappedBottomBarDoneButton:(id)arg1;
- (void)_tappedBottomBarSetHomeButton;
- (void)_tappedBottomBarSetLockButton;
- (void)_tappedBottomBarSetBothButton;
- (void)_tappedBottomBarMotionToggle;
- (void)_updateMotionToggle;
- (void)_updateWallpaperBottomBarSettingButtons;
- (void)_tappedBottomBarPlaybackButton:(id)arg1;
- (void)cropOverlayBottomBarPlayButtonClicked:(id)arg1;
- (void)_playButtonPressed:(id)arg1;
- (void)cropOverlayBottomBarPauseButtonClicked:(id)arg1;
- (void)_pauseButtonPressed:(id)arg1;
- (void)setTitle:(id)arg1 okButtonTitle:(id)arg2;
- (void)setOKButtonTitle:(id)arg1;
- (void)setOKButtonShowsCamera:(_Bool)arg1;
- (void)setShowProgress:(_Bool)arg1 title:(id)arg2;
- (void)removeProgress;
- (void)setProgressDone;
- (void)setShowsCropRegion:(_Bool)arg1;
- (void)setTitleHidden:(_Bool)arg1 animationDuration:(double)arg2;
- (void)_updateEditImageDoneButtonTitle;
- (void)_updateEditImageCancelButtonTitle;
- (void)_updateToolbarItems:(_Bool)arg1;
- (void)_updateCropRectInRect:(struct CGRect)arg1;
- (id)_newOverlayViewWithFrame:(struct CGRect)arg1 lighterEdgeOnTop:(_Bool)arg2;
- (_Bool)isTelephonyUIMode:(int)arg1;
- (_Bool)isWallpaperUIMode:(int)arg1;
- (void)_backgroundSavePhoto:(id)arg1 cropRect:(struct CGRect)arg2 minimalCropDimension:(double)arg3;
- (void)_savePhotoFinished:(id)arg1;
- (void)beginBackgroundSaveWithTile:(id)arg1 progressTitle:(id)arg2 completionCallbackTarget:(id)arg3 options:(int)arg4;

@end
