/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSPageViewBase.h>

@class CSVibrantWallpaperButton, NSString, SBWallpaperEffectView, _UILegibilitySettings;

@interface CSMainPageView : CSPageViewBase

{
    _UILegibilitySettings *_legibilitySettings;
    _Bool _logoutHugCorner;
    _Bool _fakeWallpaperVisible;
    CSVibrantWallpaperButton *_logoutButtonView;
    SBWallpaperEffectView *_wallpaperEffectView;
}

@property (retain, nonatomic) CSVibrantWallpaperButton *logoutButtonView;
@property (retain, nonatomic) SBWallpaperEffectView *wallpaperEffectView;
@property (nonatomic) _Bool fakeWallpaperVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (void)updateForPresentation:(id)arg1;
- (void)_updateLogoutButtonForLegibilitySettings;
- (void)_layoutLogoutButtonView;
- (void)_layoutWallpaperEffectView;
- (struct UIEdgeInsets)_logoutButtonInsets;
- (void)updateForLegibilitySettings:(id)arg1;
- (id)presentationRegions;

@end
