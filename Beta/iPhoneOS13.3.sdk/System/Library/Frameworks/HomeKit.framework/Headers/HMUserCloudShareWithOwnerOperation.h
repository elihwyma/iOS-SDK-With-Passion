/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSOperation.h>

@class CKContainer, CKShare, HMUser, NSString;

@interface HMUserCloudShareWithOwnerOperation : NSOperation

{
    CDUnknownBlockType _completion;
    HMUser *_currentUser;
    HMUser *_ownerUser;
    CKShare *_share;
    CKContainer *_container;
}

@property (readonly) HMUser *currentUser;
@property (readonly) HMUser *ownerUser;
@property (retain) CKShare *share;
@property (readonly) CKContainer *container;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)main;
- (id)logIdentifier;
- (id)initWithShare:(id)arg1 container:(id)arg2 ownerUser:(id)arg3 currentUser:(id)arg4;
- (void)sendShareToOwner:(id)arg1 from:(id)arg2 savedOwnerAsParticipant:(id)arg3 share:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)saveShareAndObtainSavedOwner:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeOwnerAsParticipant:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchParticipantForLookupInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
