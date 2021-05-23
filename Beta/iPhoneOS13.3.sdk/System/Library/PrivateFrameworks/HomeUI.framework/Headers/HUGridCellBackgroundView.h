/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HFWallpaperSlice, HUGridCellBackgroundDisplayOptions, UIVisualEffectView;

@interface HUGridCellBackgroundView : UIView

{
    _Bool _pressed;
    unsigned long long _backgroundState;
    HUGridCellBackgroundDisplayOptions *_displayOptions;
    HFWallpaperSlice *_blurredWallpaperSlice;
    HFWallpaperSlice *_darkModeBlurredWallpaperSlice;
    double _cornerRadius;
    UIVisualEffectView *_effectView;
    UIView *_ccMaterialView;
    struct CGRect _normalizedWallpaperRect;
}

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *ccMaterialView;
@property (nonatomic) unsigned long long backgroundState;
@property (nonatomic, getter=isPressed) _Bool pressed;
@property (retain, nonatomic) HUGridCellBackgroundDisplayOptions *displayOptions;
@property (nonatomic) struct CGRect normalizedWallpaperRect;
@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (retain, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice;
@property (nonatomic) double cornerRadius;

+ (id)_sharedBlurEffect;

- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateBackgroundColor;
- (id)_normalBackgroundColor;
- (void)_updateCornerRadius;
- (void)_updateDisplay;
- (_Bool)_shouldUsePrecomputedWallpaperContents;
- (void)_updateWallpaperContentsRect;
- (void)_updateWallpaperContentsScale;
- (_Bool)_shouldUseCCMaterialView;
- (void)_createCCMaterialViewIfNecessary;
- (_Bool)_shouldUseVisualEffectStyle;
- (void)_createEffectViewIfNecessary;
- (_Bool)_isUsingControlCenterDisplayStyle;

@end
