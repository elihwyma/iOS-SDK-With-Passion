/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <CoreServices/LSBundleProxy.h>

@interface LSBundleProxy (UserNotifications)

- (id)un_applicationBundleURL;
- (id)un_applicationBundleIdentifier;

@end
