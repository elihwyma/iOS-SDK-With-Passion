/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/ENStoreClient.h>

@class EDAMUserStoreClient, NSString;

@interface ENUserStoreClient : ENStoreClient

{
    EDAMUserStoreClient *_client;
    NSString *_authenticationToken;
}

@property (retain, nonatomic) EDAMUserStoreClient *client;
@property (retain, nonatomic) NSString *authenticationToken;

+ (id)userStoreClientWithUrl:(id)arg1 authenticationToken:(id)arg2;

- (id)initWithUserStoreUrl:(id)arg1 authenticationToken:(id)arg2;
- (id)authenticateToBusiness;
- (void)checkVersionWithClientName:(id)arg1 edamVersionMajor:(short)arg2 edamVersionMinor:(short)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchBootstrapInfoWithLocale:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchPublicUserInfoWithUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPremiumInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchNoteStoreURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)authenticateToBusinessWithCompletion:(CDUnknownBlockType)arg1;
- (void)revokeLongSessionWithAuthenticationToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkVersionWithClientName:(id)arg1 edamVersionMajor:(short)arg2 edamVersionMinor:(short)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getBootstrapInfoWithLocale:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getUserWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getPublicUserInfoWithUsername:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getPremiumInfoWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getNoteStoreUrlWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)authenticateToBusinessWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)revokeLongSessionWithAuthenticationToken:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end
