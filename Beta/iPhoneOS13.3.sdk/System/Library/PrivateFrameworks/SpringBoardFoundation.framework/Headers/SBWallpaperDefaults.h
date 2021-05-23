/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDate, NSDictionary;

@interface SBWallpaperDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) NSDictionary *homeScreenWallpapers;
@property (nonatomic) NSDictionary *lockScreenWallpapers;
@property (nonatomic) _Bool enableWallpaperDimming;
@property (retain, nonatomic) NSDate *dateIrisWallpaperLastPlayed;
@property (nonatomic) unsigned long long irisWallpaperPlayCount;
@property (nonatomic, readonly) _Bool legacyUsesUniqueHomeScreenWallpaper;

- (void)_bindAndRegisterDefaults;
- (void)clearLegacyDefaults;

@end
