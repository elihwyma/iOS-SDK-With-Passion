/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIAlertController.h>

@interface UIAlertController (TelephonyUI)

+ (id)enableWiFiCallingAlertControllerWithPreferredStyle:(long long)arg1;
+ (id)enableWiFiCallingAlertController;
+ (id)networkUnavailableAlertControllerWithCallProvider:(id)arg1 dialType:(long long)arg2 senderIdentityUUID:(id)arg3;
+ (id)telephonyAccountUnavailableAlertControllerWithSenderIdentities:(id)arg1 preferredStyle:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
