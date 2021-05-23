/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Foundation/NSObject.h>

@interface FTRegUtilities : NSObject

+ (id)serviceWithType:(long long)arg1;
+ (id)standaloneAuthorizationControllerWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3;
+ (id)standaloneNewPasswordControllerWithRegController:(id)arg1 appleID:(id)arg2;
+ (void)changePasswordControllerDidCancel:(id)arg1;
+ (void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
+ (void)authorizationController:(id)arg1 authorizedAccount:(_Bool)arg2;

@end
