/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSBundle.h>

@interface NSBundle (_QLUtilities)

+ (_Bool)mainBundleSupportsBackgroundAudio;
+ (_Bool)mainBundleRequiresStatusBarHidden;

- (id)ql_applicationName;

@end
