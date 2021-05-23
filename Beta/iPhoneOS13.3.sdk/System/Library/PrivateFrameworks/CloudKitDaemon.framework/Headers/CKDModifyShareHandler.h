/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDModifyRecordHandler.h>

@class CKRecordID, CKShare;

__attribute__((visibility("hidden")))
@interface CKDModifyShareHandler : CKDModifyRecordHandler

{
    _Bool _haveAddedOwnerToShare;
    _Bool _isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
}

@property (nonatomic) _Bool haveAddedOwnerToShare;
@property (nonatomic) _Bool isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
@property (nonatomic, readonly) CKShare *share;
@property (nonatomic, readonly) CKRecordID *shareID;

+ (id)modifyHandlerWithShare:(id)arg1 operation:(id)arg2;
+ (id)modifyHandlerForDeleteWithShareID:(id)arg1 operation:(id)arg2;

- (unsigned long long)serviceType;
- (void)_fetchSharePCSData;
- (void)_prepareDependentPCSUpdateIfNeededForShareWithSharePCS:(id)arg1 error:(id)arg2;
- (id)_createNewSharePCSDataWithError:(id *)arg1;
- (void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_rollShareAndZonePCSIfNeededForSharePCS:(id)arg1 zonePCSData:(id)arg2;
- (id)_handleSharePCSData:(id)arg1 zonePCSData:(id)arg2;
- (void)_addPublicKeyToSelfParticipant;
- (void)_setupParticipantsProtectionInfos;
- (_Bool)_updateSharePublicPCSWithError:(id *)arg1;
- (_Bool)_serializePCSDataForShareWithError:(id *)arg1;
- (void)_alignParticipantPermissions;
- (void)prepareForSave;
- (_Bool)_cleanPublicPCSforShareWithError:(id *)arg1;
- (id)_ensurePrivateParticipant:(id)arg1 isInInvitedSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (_Bool)isCloudDocsContainer;
- (_Bool)_removePrivateParticipantsFromInvitedPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (id)_removePublicKey:(id)arg1 fromInvitedPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)_removePrivateParticipant:(id)arg1 fromInvitedSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)_publicKeyForParticipant:(id)arg1 error:(id *)arg2;
- (struct _PCSPublicIdentityData *)createPublicIdentityFromPublicKeyForParticipant:(id)arg1 error:(id *)arg2;
- (_Bool)_addedPrivateParticipantNeedsAManateeInvitation:(id)arg1;
- (void)clearProtectionDataForRecord;
- (void)setServerRecord:(id)arg1;
- (void)savePCSDataToCache;
- (_Bool)isShare;
- (id)sideEffectRecordIDs;
- (void)noteSideEffectRecordPendingModify:(id)arg1;
- (void)noteSideEffectRecordAbsent:(id)arg1;
- (void)noteSideEffectRecordPendingDelete:(id)arg1;
- (void)fetchSharePCSData;
- (void)updateParticipantsForFetchedShare:(id)arg1 error:(id)arg2;

@end
