/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class ACDClient, ACDClientAuthorizationManager, ACDDatabaseConnection, NSString;

@interface ACDOAuthSigner : NSObject

{
    ACDClient *_client;
    ACDDatabaseConnection *_databaseConnection;
    ACDClientAuthorizationManager *_authorizationManager;
    _Bool _shouldIncludeAppIdInRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void)setClientBundleID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setShouldIncludeAppIdInRequest:(_Bool)arg1;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithClient:(id)arg1 databaseConnection:(id)arg2;
- (id)ckForAccountType:(id)arg1;
- (id)csForAccountType:(id)arg1;
- (_Bool)_permissionGrantedForBundleID:(id)arg1 onAccountType:(id)arg2;
- (id)_signedRequest:(id)arg1 withAccountObject:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;
- (id)signedRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;

@end
