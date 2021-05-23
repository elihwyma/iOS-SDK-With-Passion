/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <ITMLKit/IKJSObject.h>

@class NSString, WLKNotificationCenter;

__attribute__((visibility("hidden")))
@interface VUIJSNotificationCenter : IKJSObject

{
    WLKNotificationCenter *_center;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)showSignupAlertPushNotificationWithAppContext:(id)arg1;
+ (void)showAppInstallCompletePushNotificationWithAppContext:(id)arg1 appName:(id)arg2 contentName:(id)arg3 punchoutURL:(id)arg4;

- (void)setBadgeString:(id)arg1;
- (id)initWithAppContext:(id)arg1;
- (void)setBadgeNumber:(id)arg1;
- (void)handleAction:(id)arg1;
- (void)post:(id)arg1:(id)arg2:(id)arg3:(id)arg4;

@end
