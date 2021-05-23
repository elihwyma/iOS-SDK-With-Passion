/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIScene.h>

@interface UIScene (AVSecondScreenAdditions)

+ (id)avkit_secondScreenScenes;

- (id)avkit_asWindowScene;
- (long long)avkit_screenType;
- (_Bool)avkit_screenHasWindowsExcludingWindow:(id)arg1;
- (void)_avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3;
- (_Bool)avkit_isForeground;
- (void)avkit_resetPreferredModeSwitchRequest;
- (void)avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2;

@end
