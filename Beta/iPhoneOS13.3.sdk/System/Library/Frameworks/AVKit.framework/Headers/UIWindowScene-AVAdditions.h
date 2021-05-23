/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIWindowScene.h>

@interface UIWindowScene (AVAdditions)

+ (_Bool)avkit_supportsInteractiveCounterRotationDismissals;

- (void)avkit_disableTouchCancellation:(_Bool)arg1 forRotationActions:(CDUnknownBlockType)arg2;
- (id)avkit_asWindowScene;
- (long long)avkit_screenType;
- (_Bool)avkit_screenHasWindowsExcludingWindow:(id)arg1;
- (void)_avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3;

@end
