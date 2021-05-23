/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@interface AAFollowUpController : NSObject

- (id)_followUpItemForIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)_followUpItemForStartUsing:(id)arg1;
- (id)_followUpItemForVerifyTerms:(id)arg1;
- (id)_followUpItemForRenewCredentials:(id)arg1;
- (_Bool)_shouldPostRenewFollowup:(id)arg1;
- (id)_followUpController;
- (void)postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pendingFollowUpWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissFollowUpWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_followUpItemForIdentifier:(id)arg1;
- (id)_followupActionUserInfo:(id)arg1;
- (void)_dismissFollowUpWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pendingFollowUpsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 userInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissFollowUpsForAccount:(id)arg1 identifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
