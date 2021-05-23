/*
 Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

#import <NSObject.h>

@class NSXPCConnection;

@interface LKLoginController : NSObject

{
    NSXPCConnection *_connection;
    CDUnknownBlockType _completionHandler;
}

@property (retain) NSXPCConnection *connection;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

+ (id)sharedController;

- (id)init;
- (id)proxy;
- (void)checkInWithCurrentEnvironment:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)chooseUserWithIdentifier:(id)arg1 inClassWithID:(id)arg2 password:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)loginAppleID:(id)arg1 password:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)saveClassConfiguration:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)isReadyToLoginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)isReadyToLogoutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateGlobalDefaultsValue:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)logoutWithLogoutType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)recentUsers;

@end
