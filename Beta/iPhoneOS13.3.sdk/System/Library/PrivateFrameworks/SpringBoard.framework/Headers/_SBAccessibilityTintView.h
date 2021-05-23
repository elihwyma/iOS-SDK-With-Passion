/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSString, SBWallpaperController;

@protocol _SBFakeBlurObserver;

@interface _SBAccessibilityTintView : UIView

{
    long long _variant;
    _Bool _fullscreen;
    unsigned long long _transformOptions;
    id <_SBFakeBlurObserver> _observer;
    SBWallpaperController *_wallpaperController;
}

@property (weak, nonatomic) id <_SBFakeBlurObserver> observer;
@property (nonatomic, getter=isFullscreen) _Bool fullscreen;
@property (weak, nonatomic, readonly) SBWallpaperController *wallpaperController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double zoomScale;
@property (nonatomic) unsigned long long transformOptions;

- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)_updateBackgroundColor;
- (void)requestStyle:(long long)arg1;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (id)initWithVariant:(long long)arg1 wallpaperController:(id)arg2;
- (long long)effectiveStyle;
- (void)offsetWallpaperBy:(struct CGPoint)arg1;

@end
