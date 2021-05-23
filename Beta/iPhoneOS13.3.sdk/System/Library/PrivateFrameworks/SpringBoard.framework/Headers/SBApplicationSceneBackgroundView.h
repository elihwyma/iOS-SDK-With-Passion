/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSString, SBWallpaperEffectView;

@interface SBApplicationSceneBackgroundView : UIView

{
    long long _wallpaperStyle;
    SBWallpaperEffectView *_backgroundWallpaperEffectView;
    _Bool _needsClassicModeBackground;
    _Bool _shouldUseBrightMaterial;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long wallpaperStyle;
@property (nonatomic) _Bool needsClassicModeBackground;
@property (nonatomic) _Bool shouldUseBrightMaterial;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_isTranslucent;
- (void)_setupBackground;
- (id)_backgroundWallpaperEffectView;
- (void)_teardownBackgroundWallpaperEffectView;
- (id)_opaqueBackgroundColorOrClearColor;

@end
