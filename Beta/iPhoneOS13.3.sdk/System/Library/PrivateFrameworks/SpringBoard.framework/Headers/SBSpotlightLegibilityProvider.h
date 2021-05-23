/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBWallpaperController, _UILegibilitySettings;

@protocol SBFLegibilitySettingsProviderDelegate;

@interface SBSpotlightLegibilityProvider : NSObject

{
    long long _variant;
    SBWallpaperController *_wallpaperController;
    _UILegibilitySettings *_currentLegibilitySettings;
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) id <SBFLegibilitySettingsProviderDelegate> delegate;

- (void)dealloc;
- (id)initWithVariant:(long long)arg1;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (id)initWithVariant:(long long)arg1 wallpaperController:(id)arg2;
- (void)_calculateLegibilitySettings;
- (struct CGRect)_rectForSpotlightHeader;
- (void)wallpaperGeometryDidChangeForVariant:(long long)arg1;

@end
