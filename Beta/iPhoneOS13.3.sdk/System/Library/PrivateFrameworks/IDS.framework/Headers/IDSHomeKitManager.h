/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSString, _IDSGenericCompletionHandler;

@interface IDSHomeKitManager : NSObject

{
    _IDSGenericCompletionHandler *_getServiceUserIDsCompletion;
    _IDSGenericCompletionHandler *_getAdminAccessTokensCompletion;
    _IDSGenericCompletionHandler *_getConsentTokensCompletion;
    _IDSGenericCompletionHandler *_getUserAccessTokensCompletion;
    _IDSGenericCompletionHandler *_refreshUserAccessTokensCompletion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)serviceUserIDs:(id)arg1 error:(id)arg2;
- (void)adminAccessTokens:(id)arg1 error:(id)arg2;
- (void)consentTokens:(id)arg1 error:(id)arg2;
- (void)userAccessTokens:(id)arg1 error:(id)arg2;
- (void)refreshUserAccessTokens:(id)arg1 error:(id)arg2;
- (void)getServiceUserIDsWithCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)getAdminAccessTokensWithWithServiceUserID:(id)arg1 accessoryID:(id)arg2 pairingToken:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (void)getConsentTokensWithServiceUserID:(id)arg1 accessoryIDs:(id)arg2 adminID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (void)getUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 userHandle:(id)arg3 accessoryRequests:(id)arg4 completionBlock:(CDUnknownBlockType)arg5 queue:(id)arg6;
- (void)refreshUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 accessoryRequests:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 queue:(id)arg5;

@end
