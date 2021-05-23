/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIApplication.h>

@interface UIApplication (AVAdditions)

- (id)avkit_possiblePrimaryWindowScene;
- (id)avkit_possibleWindowForControllingOverallAppearance;
- (id)avkit_windowSceneWithSessionIdentifier:(id)arg1;

@end
