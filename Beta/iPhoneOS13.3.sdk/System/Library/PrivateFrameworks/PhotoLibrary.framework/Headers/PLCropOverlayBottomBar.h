/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIView.h>

@class PLCropOverlayPreviewBottomBar, PLCropOverlayWallpaperBottomBar;

@interface PLCropOverlayBottomBar : UIView

{
    _Bool _playingVideo;
    _Bool _inPopover;
    long long _style;
    UIView *_cameraBottomBar;
    PLCropOverlayPreviewBottomBar *_previewBottomBar;
    PLCropOverlayWallpaperBottomBar *_wallpaperBottomBar;
}

@property (nonatomic) long long style;
@property (retain, nonatomic) UIView *cameraBottomBar;
@property (retain, nonatomic) PLCropOverlayPreviewBottomBar *previewBottomBar;
@property (retain, nonatomic) PLCropOverlayWallpaperBottomBar *wallpaperBottomBar;
@property (nonatomic, getter=isPlayingVideo) _Bool playingVideo;
@property (nonatomic, getter=isInPopover) _Bool inPopover;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateStyle;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)_commonPLCropOverlayBottomBarInitialization;
- (void)togglePlaybackState;
- (void)_updateBottomBars;
- (void)_updatePreviewBottomBarForPlaybackState;
- (_Bool)_isEditingStyle:(long long)arg1;

@end
