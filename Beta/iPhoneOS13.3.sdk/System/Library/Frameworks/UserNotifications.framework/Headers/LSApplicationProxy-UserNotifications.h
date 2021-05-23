/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <CoreServices/LSApplicationProxy.h>

@interface LSApplicationProxy (UserNotifications)

- (id)un_applicationBundleURL;
- (id)un_applicationBundleIdentifier;

@end
