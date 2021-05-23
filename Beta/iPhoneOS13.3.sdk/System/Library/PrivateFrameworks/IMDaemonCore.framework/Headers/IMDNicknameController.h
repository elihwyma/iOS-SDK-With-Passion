/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class IDSKVStore, IMNickname, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet;

@interface IMDNicknameController : NSObject

{
    _Bool _needToLoadMapsInfoFromDisk;
    _Bool _nicknameIsUploadingToCK;
    IMNickname *_personalNickname;
    IDSKVStore *_kvStore;
    double _lastMeContactStoreSync;
    IDSKVStore *_handledNicknamesKVStore;
    IDSKVStore *_pendingNicknameUpdatesKVStore;
    IDSKVStore *_handleSharingKVStore;
    NSMutableDictionary *_handledNicknames;
    NSMutableDictionary *_pendingNicknameUpdates;
    NSMutableSet *_handleWhitelist;
    NSMutableSet *_handleBlacklist;
    NSMutableArray *_chatsToSendNicknameInfoTo;
}

@property (retain, nonatomic) IDSKVStore *kvStore;
@property (nonatomic) double lastMeContactStoreSync;
@property (retain, nonatomic) IDSKVStore *handledNicknamesKVStore;
@property (retain, nonatomic) IDSKVStore *pendingNicknameUpdatesKVStore;
@property (retain, nonatomic) IDSKVStore *handleSharingKVStore;
@property (retain, nonatomic) NSMutableDictionary *handledNicknames;
@property (retain, nonatomic) NSMutableDictionary *pendingNicknameUpdates;
@property (retain, nonatomic) NSMutableSet *handleWhitelist;
@property (retain, nonatomic) NSMutableSet *handleBlacklist;
@property (retain, nonatomic) IMNickname *personalNickname;
@property (nonatomic) _Bool needToLoadMapsInfoFromDisk;
@property (retain, nonatomic) NSMutableArray *chatsToSendNicknameInfoTo;
@property (nonatomic) _Bool nicknameIsUploadingToCK;
@property (nonatomic, readonly) NSSet *whitelistedHandlesForSharing;
@property (nonatomic, readonly) NSSet *blacklistedHandlesForSharing;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)defaults;
- (void)systemDidLeaveFirstDataProtectionLock;
- (id)nicknameForHandle:(id)arg1;
- (_Bool)_nicknameFeatureEnabled;
- (void)newDeviceDidSignIntoiMessage;
- (void)deviceSignedOutOfiMessage;
- (void)_ckAccountChanged:(id)arg1;
- (void)_loadAllInfoFromDiskIfAble;
- (void)evaluateAccountStateForFeatureEligibility;
- (void)aliasesDidChange:(_Bool)arg1;
- (void)_tryToReuploadPersonalNicknameWithRetryCount:(unsigned long long)arg1 reuploadVersion:(unsigned long long)arg2;
- (void)setPersonalNickname:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)_reuploadLocalProfileVersionNumber;
- (void)_newDeviceDidSignIntoiMessageWithRetryCount:(unsigned long long)arg1;
- (_Bool)_sendMessageDictionary:(id)arg1 toDevice:(id)arg2;
- (void)_retryPeerRequestWithRetry:(unsigned long long)arg1;
- (void)_deletePublicNicknameLocationAndKey;
- (id)substringRecordIDForNickname:(id)arg1;
- (void)_storePendingNicknameForUpload:(id)arg1;
- (void)_deletePendingNicknameForUpload;
- (void)sendPersonalNicknameToChat:(id)arg1;
- (_Bool)_isNicknamesSharingEnabled;
- (id)transferServicesController;
- (void)_beginNicknameUpload:(id)arg1;
- (id)nickNameRecordID;
- (void)_resetHandleSharingList;
- (void)_storePublicNickname:(id)arg1 nicknameLocation:(id)arg2 encryptionKey:(id)arg3;
- (void)_endNicknameUpload;
- (void)sendPersonalNicknameRecordIDAndVersionToAllPeers;
- (id)_getPendingNicknameForUpload;
- (void)_updateWhitelistBlacklistHandlesVersion;
- (void)_syncHandleWhitelistBlacklistToOtherDevices;
- (id)nickNameDecryptionKey;
- (void)currentPersonalNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)nicknameForRecordID:(id)arg1 handle:(id)arg2;
- (void)saveNicknameForRecordID:(id)arg1 handleID:(id)arg2 userNickname:(id)arg3;
- (void)_markNicknameAsUpdated:(id)arg1 incrementPendingNicknameVersion:(_Bool)arg2;
- (void)_markNicknameAsUpdatedForHandleID:(id)arg1;
- (void)_updateHandleList:(id)arg1 withHandles:(id)arg2 forKey:(id)arg3 broadcastUpdates:(_Bool)arg4;
- (_Bool)_requestingToSendLocalNicknameInfo:(id)arg1;
- (void)sendPersonalNicknameRecordIDAndVersionRequestedByDevice:(id)arg1;
- (void)_updateSharingPreferencesIfNeededFromMadridMessage:(id)arg1;
- (void)_updateCloudKitRecordIDAndDecryptionKeyIfNeededFromMadridMessage:(id)arg1;
- (void)_updateHandledNicknamesIfNeeded:(id)arg1;
- (void)_updateHandleBlacklistWhitelistIfNeeded:(id)arg1;
- (void)_updateMessageDictionaryWithPendingNicknameUpdates:(id)arg1;
- (id)storedPersonalNickname;
- (void)deleteAllPersonalNicknames:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)messageDictionaryWithPersonalRecordIDAndVersion;
- (void)broadcastHandlesSharingNicknamesDidChange;
- (_Bool)replacedNicknameForHandleIDInHandledMapIfNeeded:(id)arg1 nickname:(id)arg2;
- (void)addNicknameToPendingUpdates:(id)arg1;
- (void)markNicknameAsUpdated:(id)arg1;
- (void)_updatePendingNicknameVersion;
- (void)sendPendingNicknameUpdatesDidChange;
- (void)_writeNicknameToKVStore:(id)arg1 nickname:(id)arg2;
- (void)_broadcastPendingMapChanged;
- (void)_updateNicknameInHandledMap:(id)arg1;
- (void)_deleteNicknameFromPendingMap:(id)arg1;
- (void)_deleteHandleIDFromPendingMap:(id)arg1;
- (void)_deleteHandleIDFromHandledMap:(id)arg1;
- (_Bool)_isUnderScrutiny;
- (_Bool)_deviceUnderFirstUnlock;
- (void)loadPersonalNicknameIfNeeded;
- (void)reuploadProfileIfNeeded;
- (void)loadHandledNicknamesAndPendingUpdates;
- (void)loadSharingHandlesPrefs;
- (void)_evaluateIfAccountHasMultiplePhoneNumbers;
- (void)_uploadPendingNicknameIfNecessary;
- (void)currentPersonalNicknamewithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_setUnderScrutiny:(_Bool)arg1;
- (_Bool)_populateNicknameDictionary:(id)arg1 forKVStore:(id)arg2 limitToLoad:(unsigned long long)arg3;
- (id)allNicknames;
- (id)nicknameForRecordID:(id)arg1;
- (void)verifyTruncatedRecordIDMatchesPersonalNickname:(id)arg1 forChat:(id)arg2;
- (void)NicknameWithRecordID:(id)arg1 URI:(id)arg2 decryptionKey:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)handleNicknameUpdatesFromPeerDevice:(id)arg1 fromPeerDevice:(id)arg2;
- (void)sendNicknamePreferencesDidChange;
- (void)queueChatToSendNicknamePostUploadIfNeeded:(id)arg1;
- (void)whitelistHandlesForSharing:(id)arg1 onChatGUIDs:(id)arg2;
- (void)blacklistHandlesForSharing:(id)arg1;
- (void)clearPendingNicknameForHandleID:(id)arg1;
- (void)ignorePendingNicknameForHandleID:(id)arg1;
- (void)cleanUpNicknameForID:(id)arg1;
- (id)pendingPersonalNickname;
- (void)_deleteAvatarForNickname:(id)arg1;
- (id)nicknameForHandleURI:(id)arg1;

@end
