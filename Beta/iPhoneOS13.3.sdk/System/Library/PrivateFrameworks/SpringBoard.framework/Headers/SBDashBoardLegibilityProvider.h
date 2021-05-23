/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBWallpaperController;

@protocol CSLegibilityProviderDelegate;

@interface SBDashBoardLegibilityProvider : NSObject

{
    id <CSLegibilityProviderDelegate> _legibilityProviderDelegate;
    SBWallpaperController *_wallpaperController;
}

@property (retain, nonatomic) SBWallpaperController *wallpaperController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CSLegibilityProviderDelegate> legibilityProviderDelegate;

- (id)init;
- (void)_notifyDelegate;
- (id)currentLegibilitySettings;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (id)initWithWallpaperController:(id)arg1;
- (id)_wallpaperLegibilitySettings;

@end
