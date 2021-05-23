/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <SpringBoardUIServices/SBUIVibrantButton.h>

@class UIView;

@protocol CSWallpaperColorProvider, CSWallpaperView, CSWallpaperViewProviding;

@interface CSVibrantWallpaperButton : SBUIVibrantButton

{
    UIView<CSWallpaperView> *_effectView;
    id <CSWallpaperColorProvider> _wallpaperColorProvider;
    id <CSWallpaperViewProviding> _wallpaperViewProvider;
}

@property (weak, nonatomic) id <CSWallpaperColorProvider> wallpaperColorProvider;
@property (weak, nonatomic) id <CSWallpaperViewProviding> wallpaperViewProvider;
@property (nonatomic, readonly) UIView<CSWallpaperView> *effectView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)_updateVibrancy;

@end
