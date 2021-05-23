/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBWallpaperAggdLogger : NSObject

{
    long long _aggd_lockscreenWallpaperType;
    long long _aggd_lockscreenWallpaperIdentifier;
    long long _aggd_homescreenWallpaperType;
    long long _aggd_homescreenWallpaperIdentifier;
    long long _aggd_irisWallpaperEnabled;
    long long _aggd_sharedWallpaper;
}

- (id)init;
- (id)_valueString;
- (void)incrementIrisPlayCount;
- (void)_clearAggdKeysForLocations:(long long)arg1;
- (void)updateWallpaperAggdKeysForLocations:(long long)arg1 withHasVideo:(_Bool)arg2 hasProcedural:(_Bool)arg3 name:(id)arg4;
- (void)saveWallpaperAggdCurrentValues;
- (unsigned long long)_bucketedPlayCount;
- (void)_resetPlayCountDate;

@end
