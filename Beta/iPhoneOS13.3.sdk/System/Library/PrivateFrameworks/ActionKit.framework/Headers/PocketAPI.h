/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString, PocketAPILogin;

@interface PocketAPI : NSObject

{
    NSString *consumerKey;
    NSString *URLScheme;
    NSOperationQueue *operationQueue;
    PocketAPILogin *currentLogin;
    NSString *userAgent;
}

@property (retain, nonatomic) NSString *consumerKey;
@property (retain, nonatomic) NSString *URLScheme;
@property (copy, nonatomic, readonly) NSString *username;
@property (nonatomic, readonly, getter=isLoggedIn) _Bool loggedIn;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

+ (id)pkt_hashForConsumerKey:(id)arg1 accessToken:(id)arg2;
+ (id)sharedAPI;
+ (id)pocketAppURLScheme;

- (id)init;
- (void)dealloc;
- (unsigned long long)appID;
- (void)logout;
- (_Bool)handleOpenURL:(id)arg1;
- (void)loginWithDelegate:(id)arg1;
- (void)saveURL:(id)arg1 delegate:(id)arg2;
- (void)saveURL:(id)arg1 withTitle:(id)arg2 delegate:(id)arg3;
- (void)saveURL:(id)arg1 withTitle:(id)arg2 tweetID:(id)arg3 delegate:(id)arg4;
- (void)callAPIMethod:(id)arg1 withHTTPMethod:(int)arg2 arguments:(id)arg3 delegate:(id)arg4;
- (id)saveOperationWithURL:(id)arg1 title:(id)arg2 tweetID:(id)arg3 delegate:(id)arg4;
- (id)saveOperationWithURL:(id)arg1 title:(id)arg2 delegate:(id)arg3;
- (id)saveOperationWithURL:(id)arg1 delegate:(id)arg2;
- (id)methodOperationWithAPIMethod:(id)arg1 forHTTPMethod:(int)arg2 arguments:(id)arg3 delegate:(id)arg4;
- (void)loginWithHandler:(CDUnknownBlockType)arg1;
- (void)saveURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)saveURL:(id)arg1 withTitle:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)saveURL:(id)arg1 withTitle:(id)arg2 tweetID:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)callAPIMethod:(id)arg1 withHTTPMethod:(int)arg2 arguments:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)saveOperationWithURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)saveOperationWithURL:(id)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)saveOperationWithURL:(id)arg1 title:(id)arg2 tweetID:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)methodOperationWithAPIMethod:(id)arg1 forHTTPMethod:(int)arg2 arguments:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)pkt_getToken;
- (void)pkt_loggedInWithUsername:(id)arg1 token:(id)arg2;
- (id)pkt_loadCurrentLoginFromDefaults;
- (void)pkt_saveCurrentLoginToDefaults;
- (void)pkt_migrateAccountToAccessTokenWithUsername:(id)arg1 password:(id)arg2 delegate:(id)arg3;
- (void)pkt_migrateAccountToAccessTokenWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)pkt_actionDictionaryWithName:(id)arg1 parameters:(id)arg2;
- (id)pkt_userAgent;
- (id)pkt_deviceName;
- (id)pkt_deviceOSVersion;
- (void)pkt_setKeychainValue:(id)arg1 forKey:(id)arg2;
- (id)pkt_getKeychainValueForKey:(id)arg1;
- (void)pkt_setKeychainValue:(id)arg1 forKey:(id)arg2 serviceName:(id)arg3;
- (id)pkt_getKeychainValueForKey:(id)arg1 serviceName:(id)arg2;

@end
