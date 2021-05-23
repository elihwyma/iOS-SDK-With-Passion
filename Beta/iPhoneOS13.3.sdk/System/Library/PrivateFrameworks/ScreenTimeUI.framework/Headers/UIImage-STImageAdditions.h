/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIImage.h>

@interface UIImage (STImageAdditions)

+ (id)blankIcon;
+ (id)blankSpaceImageWithSize:(struct CGSize)arg1;
+ (id)iconWithAppBundleID:(id)arg1;
+ (id)iconWithAppURL:(id)arg1;
+ (id)st_pointImageOfColor:(id)arg1;

- (id)iconFromPrecomposedImage:(_Bool)arg1 platform:(short)arg2;

@end
