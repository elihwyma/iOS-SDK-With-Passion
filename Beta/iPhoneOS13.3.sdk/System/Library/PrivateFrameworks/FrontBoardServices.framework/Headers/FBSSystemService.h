/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class FBSOpenApplicationService, FBSSystemAppProxy;

@interface FBSSystemService : NSObject

{
    FBSSystemAppProxy *_systemAppProxy;
    FBSOpenApplicationService *_defaultOpenApplicationService;
}

+ (id)sharedService;
+ (id)clientCallbackQueue;

- (id)init;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (void)openApplication:(id)arg1 options:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (_Bool)isPasscodeLockedOrBlocked;
- (void)sendActions:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (_Bool)canOpenApplication:(id)arg1 reason:(long long *)arg2;
- (void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned int)arg3 withResult:(CDUnknownBlockType)arg4;
- (unsigned int)createClientPort;
- (void)cleanupClientPort:(unsigned int)arg1;
- (int)pidForApplication:(id)arg1;
- (id)systemApplicationBundleIdentifier;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)shutdownWithOptions:(id)arg1;
- (void)setKeyboardFocusApplicationPID:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setKeyboardFocusApplicationPID:(int)arg1 deferringToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4;
- (void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned int)arg4 withResult:(CDUnknownBlockType)arg5;
- (id)processHandleForApplication:(id)arg1;
- (id)badgeValueForBundleID:(id)arg1;
- (void)setBadgeValue:(id)arg1 forBundleID:(id)arg2;
- (void)dataResetWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reboot;
- (void)shutdown;
- (void)setKeyboardFocusApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(CDUnknownBlockType)arg3;

@end
