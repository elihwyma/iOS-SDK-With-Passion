/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

@class CKDPublicIdentityLookupRequest, NSArray;

@interface CKDFetchShareParticipantsOperation : CKDOperation

{
    CDUnknownBlockType _shareParticipantFetchedBlock;
    CKDPublicIdentityLookupRequest *_pendingRequest;
    NSArray *_userIdentityLookupInfos;
}

@property (retain, nonatomic) CKDPublicIdentityLookupRequest *pendingRequest;
@property (retain, nonatomic) NSArray *userIdentityLookupInfos;
@property (copy, nonatomic) CDUnknownBlockType shareParticipantFetchedBlock;

- (void)main;
- (void)finishWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)_handleFetchedInfo:(id)arg1 withIdentity:(id)arg2 error:(id)arg3;
- (void)_fetchIdentities;

@end
