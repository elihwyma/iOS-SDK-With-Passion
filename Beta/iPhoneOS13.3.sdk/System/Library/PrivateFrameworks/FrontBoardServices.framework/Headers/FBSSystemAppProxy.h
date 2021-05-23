/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@class BSProcessHandle, BSServiceConnectionEndpoint;

@interface FBSSystemAppProxy : FBSServiceFacilityClient

{
    BSServiceConnectionEndpoint *_endpoint;
    unsigned long long _checkoutCount;
    BSProcessHandle *_processHandle;
}

+ (id)checkoutProxyWithEndpoint:(id)arg1;

- (_Bool)isPasscodeLockedOrBlocked;
- (void)sendActions:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (void)checkin;
- (void)fireCompletion:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)_sendMessageType:(long long)arg1 withMessage:(CDUnknownBlockType)arg2 withReplyHandler:(CDUnknownBlockType)arg3 waitForReply:(_Bool)arg4;
- (id)clientCallbackQueue;
- (id)systemApplicationBundleIdentifier;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)processHandleForBundleID:(id)arg1;
- (void)shutdownWithOptions:(id)arg1;
- (void)setKeyboardFocusApplication:(int)arg1 deferringToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fireCompletion:(CDUnknownBlockType)arg1 openAppErrorCode:(long long)arg2;
- (void)_handleConnect:(id)arg1;

@end
