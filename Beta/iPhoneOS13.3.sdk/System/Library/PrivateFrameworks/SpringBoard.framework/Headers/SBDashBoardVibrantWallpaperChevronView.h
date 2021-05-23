/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBUIChevronView.h>

@class NSString, SBWallpaperEffectView, _UILegibilitySettings;

@protocol CSWallpaperColorProvider;

@interface SBDashBoardVibrantWallpaperChevronView : SBUIChevronView

{
    double _legibilityStrength;
    _UILegibilitySettings *_legibilitySettings;
    SBWallpaperEffectView *_effectView;
    id <CSWallpaperColorProvider> _wallpaperColorProvider;
}

@property (weak, nonatomic) id <CSWallpaperColorProvider> wallpaperColorProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;

- (id)init;
- (id)initWithColor:(id)arg1;
- (void)_updateVibrancy;

@end
