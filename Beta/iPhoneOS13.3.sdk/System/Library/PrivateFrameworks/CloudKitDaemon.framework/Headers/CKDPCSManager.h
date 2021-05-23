/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKContainerID, CKDAccount, CKDPCSIdentityManager, NSData, NSDate, NSMutableSet, NSString;

@protocol CKDContainerScopedUserIDProvider, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDPCSManager : NSObject

{
    _Bool _isSiloed;
    _Bool _forceEnableReadOnlyManatee;
    _Bool _useZoneWidePCS;
    CKDAccount *_account;
    id <CKDContainerScopedUserIDProvider> _containerScopedUserIDProvider;
    CKContainerID *_containerID;
    NSString *_responsibleBundleID;
    unsigned long long _mmcsEncryptionSupport;
    CKDPCSIdentityManager *_identityManager;
    NSDate *_lastMissingManateeIdentityErrorDateForCurrentService;
    NSMutableSet *_missingIdentityPublicKeys;
    NSMutableSet *_servicesWithMissingIdentities;
    NSMutableSet *_undecryptablePCSDataHashes;
    NSData *_boundaryKeyData;
    NSObject<OS_dispatch_source> *_pcsUpdateSource;
    NSObject<OS_dispatch_queue> *_synchronizeQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain) CKDAccount *account;
@property (weak, nonatomic, readonly) id <CKDContainerScopedUserIDProvider> containerScopedUserIDProvider;
@property (nonatomic, readonly) CKContainerID *containerID;
@property (nonatomic, readonly) _Bool isSiloed;
@property (nonatomic, readonly) NSString *responsibleBundleID;
@property (nonatomic, readonly) _Bool forceEnableReadOnlyManatee;
@property (nonatomic, readonly) unsigned long long mmcsEncryptionSupport;
@property (nonatomic, readonly) _Bool useZoneWidePCS;
@property (nonatomic, readonly) CKDPCSIdentityManager *identityManager;
@property (retain, nonatomic) NSDate *lastMissingManateeIdentityErrorDateForCurrentService;
@property (retain, nonatomic) NSMutableSet *missingIdentityPublicKeys;
@property (retain, nonatomic) NSMutableSet *servicesWithMissingIdentities;
@property (retain, nonatomic) NSMutableSet *undecryptablePCSDataHashes;
@property (retain, nonatomic) NSData *boundaryKeyData;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *pcsUpdateSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizeQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) NSString *pcsServiceName;
@property (nonatomic, readonly) _Bool currentServiceIsManatee;
@property (nonatomic, readonly) unsigned long long serviceTypeForSharing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_legacyServiceNameForContainerIDMapping:(id)arg1;
+ (id)noMatchingIdentityErrorForPCSError:(struct __CFError *)arg1 withErrorCode:(long long)arg2 description:(id)arg3;
+ (id)publicKeyIDFromIdentity:(struct _OpaquePCSShareProtection *)arg1;
+ (id)protectionIdentifierFromShareProtection:(struct _OpaquePCSShareProtection *)arg1;
+ (id)allProtectionIdentifiersFromShareProtection:(struct _OpaquePCSShareProtection *)arg1;

- (void)dealloc;
- (void)createIngestedPPPCSDataFromInvitationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)removePublicKeys:(id)arg1 fromPCS:(struct _OpaquePCSShareProtection *)arg2;
- (_Bool)decryptSharedZonePCSData:(id)arg1 withInvitedPCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (void)pcsDataFromFetchedShare:(id)arg1 withPublicSharingKey:(id)arg2 withServiceType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)wrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 inContext:(id)arg3;
- (id)unwrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 inContext:(id)arg3;
- (struct _PCSIdentityData *)createRandomSharingIdentityWithError:(id *)arg1;
- (id)dataFromSharingIdentity:(struct _PCSIdentityData *)arg1 error:(id *)arg2;
- (void)boundaryKeyDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateAccount:(id)arg1 clearPCSCacheHandler:(CDUnknownBlockType)arg2;
- (id)initWithAccount:(id)arg1 containerScopedUserIDProvider:(id)arg2 serviceName:(id)arg3 appContainerTuple:(id)arg4;
- (id)dataFromZonePCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (id)dataFromRecordPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (id)etagFromPCSData:(id)arg1;
- (struct _OpaquePCSShareProtection *)createZonePCSWithError:(id *)arg1;
- (struct _OpaquePCSShareProtection *)createRecordPCSWithZonePCS:(struct _OpaquePCSShareProtection *)arg1 sharePCS:(struct _OpaquePCSShareProtection *)arg2 createLite:(_Bool)arg3 error:(id *)arg4;
- (struct _OpaquePCSShareProtection *)createZonePCSFromData:(id)arg1 usingServiceIdentityWithType:(unsigned long long)arg2 error:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createPCSObjectFromData:(id)arg1 ofType:(unsigned long long)arg2 sharedToPCS:(struct _OpaquePCSShareProtection *)arg3 error:(id *)arg4;
- (void)createZonePCSFromData:(id)arg1 usingServiceIdentityWithType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct _PCSIdentityData *)debugSharingIdentity;
- (void)_onSynchronizeQueue:(CDUnknownBlockType)arg1;
- (id)copyPublicKeyForService:(unsigned long long)arg1 withError:(id *)arg2;
- (id)copyAllPublicKeysForService:(unsigned long long)arg1 withError:(id *)arg2;
- (id)copyDiversifiedPublicKeyForService:(unsigned long long)arg1 withError:(id *)arg2;
- (struct _PCSIdentityData *)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)arg1 publicSharingIdentity:(id)arg2;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 sharingIdentity:(struct _PCSIdentityData *)arg2 error:(id *)arg3;
- (struct _PCSPublicIdentityData *)createPublicSharingIdentityFromPublicKey:(id)arg1 error:(id *)arg2;
- (id)addPublicIdentity:(struct _PCSPublicIdentityData *)arg1 toSharePCS:(struct _OpaquePCSShareProtection *)arg2 permission:(unsigned long long)arg3;
- (id)removeSharingIdentity:(struct _PCSIdentityData *)arg1 fromSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)dataFromSharePCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 ofType:(unsigned long long)arg2 withService:(unsigned long long)arg3 error:(id *)arg4;
- (struct _PCSIdentityData *)createSharingIdentityFromData:(id)arg1 error:(id *)arg2;
- (id)_addIdentity:(struct _PCSIdentitySetData *)arg1 withService:(unsigned long long)arg2 toPCS:(struct _OpaquePCSShareProtection *)arg3;
- (void)_locked_createZonePCSWithSyncKeyRegistryRetry:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)synchronizeUserKeyRegistryForServiceType:(unsigned long long)arg1 shouldThrottle:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createZonePCSWithSyncKeyRegistryRetry:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_pcsObjectKindForCKDPCSBlobType:(unsigned long long)arg1;
- (_Bool)isPreviouslyUndecryptablePCS:(id)arg1;
- (void)_locked_markMissingIdentitiesFromFailedDecryptError:(struct __CFError *)arg1 serviceName:(id)arg2;
- (void)_locked_createPCSFromData:(id)arg1 ofType:(unsigned long long)arg2 usingPCSServiceType:(unsigned long long)arg3 withSyncKeyRegistryRetry:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)markUndecryptablePCS:(id)arg1;
- (void)_triggerAutobugCaptureForLostManateeIdentityError;
- (void)_createPCSFromData:(id)arg1 ofType:(unsigned long long)arg2 usingPCSServiceType:(unsigned long long)arg3 withSyncKeyRegistryRetry:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_locked_preflightIdentitiesForService:(unsigned long long)arg1 withSyncKeyRegistryRetry:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct _OpaquePCSShareProtection *)_copyShareProtectionFromExportedData:(id)arg1 ofType:(unsigned long long)arg2 identities:(struct _PCSIdentitySetData *)arg3 error:(struct __CFError **)arg4;
- (_Bool)zonePCSNeedsKeyRolled:(struct _OpaquePCSShareProtection *)arg1 bypassWhitelistedContainers:(_Bool)arg2;
- (_Bool)_isWhitelistedKeyRollingContainerIdentifier:(id)arg1;
- (id)addIdentityForService:(unsigned long long)arg1 toPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)rollMasterKeyForRecordPCS:(struct _OpaquePCSShareProtection *)arg1 bypassWhitelistedContainers:(_Bool)arg2;
- (_Bool)canRollShareKeys;
- (_Bool)removeSharePCS:(struct _OpaquePCSShareProtection *)arg1 fromRecordPCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (id)rollIdentityForSharePCS:(struct _OpaquePCSShareProtection *)arg1 removeAllExistingPrivateKeys:(_Bool)arg2 error:(id *)arg3;
- (_Bool)addSharePCS:(struct _OpaquePCSShareProtection *)arg1 toRecordPCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (id)updateZoneIdentityForPCS:(struct _OpaquePCSShareProtection *)arg1 usingZonePCS:(struct _OpaquePCSShareProtection *)arg2 bypassWhitelistedContainers:(_Bool)arg3;
- (id)removePrivateKeysForKeyIDs:(id)arg1 fromPCS:(struct _OpaquePCSShareProtection *)arg2;
- (struct _OpaquePCSShareProtection *)createPCSObjectFromData:(id)arg1 ofType:(unsigned long long)arg2 sharedToPCS:(struct _OpaquePCSShareProtection *)arg3 logFailure:(_Bool)arg4 error:(id *)arg5;
- (_Bool)addSharePCS:(struct _OpaquePCSShareProtection *)arg1 toRecordPCS:(struct _OpaquePCSShareProtection *)arg2 permission:(unsigned long long)arg3 error:(id *)arg4;
- (struct _OpaquePCSShareProtection *)createEmptySharePCSOfType:(unsigned long long)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)_addPublicIdentityForService:(unsigned long long)arg1 toSharePCS:(struct _OpaquePCSShareProtection *)arg2 withError:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 sharingIdentity:(struct _PCSIdentityData *)arg2 logFailure:(_Bool)arg3 error:(id *)arg4;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 ofType:(unsigned long long)arg2 withService:(unsigned long long)arg3 logFailure:(_Bool)arg4 error:(id *)arg5;
- (void)_locked_decryptPCSDataOnSharePCS:(id)arg1 withPublicSharingKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 sharePrivateKey:(id)arg2 error:(id *)arg3;
- (void)_locked_decryptCurrentPerParticipantPCSDataOnSharePCS:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pcsDataFromFetchedShare:(id)arg1 withServiceType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_locked_pcsDataFromFetchedShare:(id)arg1 withPublicSharingKey:(id)arg2 withServiceType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (struct _OpaquePCSShareProtection *)createSharePCSOfType:(unsigned long long)arg1 forPCSServiceType:(unsigned long long)arg2 error:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createEmptySignedSharePCSOfType:(unsigned long long)arg1 forPCSServiceType:(unsigned long long)arg2 withError:(id *)arg3;
- (id)addSharingIdentity:(struct _PCSIdentityData *)arg1 toSharePCS:(struct _OpaquePCSShareProtection *)arg2 permission:(unsigned long long)arg3;
- (struct _OpaquePCSShareProtection *)createSharePublicPCSWithIdentity:(struct _PCSIdentityData *)arg1 error:(id *)arg2;
- (id)removePublicIdentity:(struct _PCSPublicIdentityData *)arg1 fromSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (struct _OpaquePCSShareProtection *)createSharePCSFromEncryptedData:(id)arg1 error:(id *)arg2;
- (_Bool)containerSupportsEnhancedContext;
- (id)referenceIdentifierStringFromAssetKey:(id)arg1;
- (id)referenceSignatureFromAssetKey:(id)arg1;
- (id)unwrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 withContextString:(id)arg3;
- (void)triggerAutoSysdiagnoseIfNecessaryForError:(id)arg1 encryptedData:(id)arg2 pcs:(struct _OpaquePCSShareProtection *)arg3;
- (id)wrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 withContextString:(id)arg3;
- (void)_lockedBoundaryKeyDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)sharingFingerprintsContainPublicKeyWithData:(id)arg1 error:(id *)arg2;
- (unsigned long long)publicKeyVersionForServiceType:(unsigned long long)arg1;
- (struct _PCSPublicIdentityData *)copyDiversifiedIdentityForService:(unsigned long long)arg1 withError:(id *)arg2;
- (id)participantPublicKeyForServiceType:(unsigned long long)arg1 error:(id *)arg2;
- (id)createProtectionInfoFromOONPrivateKey:(id)arg1 privateToken:(id)arg2 OONProtectionInfo:(id)arg3 error:(id *)arg4;
- (_Bool)canDecryptInvitedProtectionData:(id)arg1 participantProtectionInfo:(id)arg2 serviceType:(unsigned long long)arg3 error:(id *)arg4;
- (void)createZonePCSWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)availableIdentityForService:(unsigned long long)arg1 error:(id *)arg2;
- (void)preflightIdentitiesForService:(unsigned long long)arg1 withSyncKeyRegistryRetry:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)etagFromZonePCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (id)repairZonePCSData:(id)arg1 error:(id *)arg2;
- (_Bool)zonePCSNeedsKeyRolled:(struct _OpaquePCSShareProtection *)arg1;
- (_Bool)zonePCSNeedsUpdate:(struct _OpaquePCSShareProtection *)arg1;
- (id)updateServiceIdentityOnZonePCS:(struct _OpaquePCSShareProtection *)arg1;
- (id)rollMasterKeyForRecordPCS:(struct _OpaquePCSShareProtection *)arg1;
- (id)updateIdentityAndRollKeyForZonePCS:(struct _OpaquePCSShareProtection *)arg1 usingServiceIdentityWithType:(unsigned long long)arg2;
- (id)keyRollForZoneWideShareWithZonePCS:(id)arg1 sharePCS:(id)arg2;
- (struct _OpaquePCSShareProtection *)createRecordPCSWithEncryptedZonePCS:(struct __CFData *)arg1 sharePCS:(struct _OpaquePCSShareProtection *)arg2 createLite:(_Bool)arg3 error:(id *)arg4;
- (_Bool)updateSigningIdentityOnPCS:(struct _OpaquePCSShareProtection *)arg1 usingSignedPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)etagFromRecordPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (void)setOwnerIdentity:(struct _PCSPublicIdentityData *)arg1 onPCS:(struct _OpaquePCSShareProtection *)arg2;
- (struct _OpaquePCSShareProtection *)createChainPCSWithError:(id *)arg1;
- (id)publicKeyDataFromPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (void)decryptPCSDataOnSharePCS:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pcsDataFromFetchedShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct _PCSPublicIdentityData *)copyPublicAuthorshipIdentityFromPCS:(struct _OpaquePCSShareProtection *)arg1;
- (id)createNewSharePCSDataForShareWithID:(id)arg1 withPublicSharingKey:(id)arg2 addDebugIdentity:(_Bool)arg3 error:(id *)arg4;
- (id)etagFromSharePCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (id)addIdentityBackToPCS:(struct _OpaquePCSShareProtection *)arg1;
- (id)removeEncryptedPCS:(id)arg1 fromSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)removePublicKeyID:(id)arg1 fromPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)sharingIdentityDataFromPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (id)decryptChainPCSForRecordPCS:(id)arg1;
- (id)unwrapAssetKey:(id)arg1 withRecordPCS:(struct _OpaquePCSShareProtection *)arg2 inContext:(id)arg3 withError:(id *)arg4;
- (id)wrapAssetKey:(id)arg1 withRecordPCS:(struct _OpaquePCSShareProtection *)arg2 inContext:(id)arg3 withError:(id *)arg4;
- (id)newAssetKeyWithType:(unsigned long long)arg1 withError:(id *)arg2;

@end
