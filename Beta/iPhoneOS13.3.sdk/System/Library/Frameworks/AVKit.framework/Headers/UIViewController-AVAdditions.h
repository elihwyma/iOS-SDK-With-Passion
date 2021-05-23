/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIViewController.h>

@interface UIViewController (AVAdditions)

- (_Bool)avkit_isEffectivelyFullScreen;
- (void)avkit_setNeedsUpdatePreferencesIfNeeded;

@end
