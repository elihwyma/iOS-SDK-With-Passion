/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <NSObject.h>

@class NSString;

@interface TPInCallUILauncher : NSObject

{
    CDUnknownBlockType _launchSOSCompletion;
}

@property (copy, nonatomic) CDUnknownBlockType launchSOSCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)TPRemoteAlertActivationReasonForTPInCallUILaunchReason:(long long)arg1;
+ (id)sharedInCallUILauncher;

- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)launchInCallUIForReason:(long long)arg1 withRequestURL:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
