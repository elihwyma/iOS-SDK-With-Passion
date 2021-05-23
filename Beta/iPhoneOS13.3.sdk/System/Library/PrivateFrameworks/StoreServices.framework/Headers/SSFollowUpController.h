/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class FLFollowUpController;

@interface SSFollowUpController : NSObject

{
    FLFollowUpController *_followUpController;
}

@property (retain, nonatomic) FLFollowUpController *followUpController;

+ (id)sharedController;

- (id)init;
- (id)dismissFollowUpWithIdentifier:(id)arg1 account:(id)arg2;
- (id)pendingFollowUpWithIdentifier:(id)arg1;
- (id)_dismissFollowUpWithIdentifier:(id)arg1;
- (id)_postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)postFollowUpWithIdentifier:(id)arg1 account:(id)arg2 userInfo:(id)arg3;
- (id)_createFollowUpItemForRenewCredentialsWithUserInfo:(id)arg1;
- (id)_createFollowUpItemForIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)dismissFollowUpWithIdentifier:(id)arg1;
- (id)postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2;

@end
