/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NPSDomainAccessor, NSDictionary, NSString, TLAccessQueue;

@protocol NSCopying;

@interface TLToneManager : NSObject

{
    TLAccessQueue *_accessQueue;
    NSDictionary *_tonesByIdentifier;
    NSDictionary *_toneIdentifiersBySyncIdentifier;
    NSDictionary *_alertTonesByIdentifier;
    NSDictionary *_toneIdentifierAliasMap;
    id <NSCopying> _contentProtectionStateObserverToken;
    _Bool _cachedWatchPrefersSalientNotifications;
    _Bool _hasValidCachedWatchPrefersSalientNotifications;
    _Bool _shouldSkipNextWatchPrefersSalientNotificationsDidChangeNotification;
    NPSDomainAccessor *_transientNanoPreferencesDomainAccessor;
    _Bool _shouldUseServiceToAccessTonePreferences;
    NSDictionary *_cachedTonePreferences;
    _Bool _shouldIgnoreNextToneDidChangeNotification;
}

@property (nonatomic, readonly) NSString *_rootDirectory;
@property (nonatomic, readonly) NSString *_deviceITunesRingtoneDirectory;
@property (nonatomic, readonly) NSString *_deviceITunesRingtoneInformationPlist;
@property (nonatomic, readonly) NSString *_iTunesRingtoneDirectory;
@property (nonatomic, readonly) NSString *_iTunesRingtoneInformationPlist;
@property (nonatomic, readonly) NSString *_systemRingtoneDirectory;

+ (id)sharedToneManager;
+ (id)_systemWideTonePreferenceKeyForAlertType:(long long)arg1;
+ (id)_defaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
+ (_Bool)_ensureTCCAccessPreflightAndCheckForFileExistenceAtPath:(id)arg1;
+ (id)_currentOverridePolicyPreferenceKeyForAlertType:(long long)arg1;
+ (_Bool)_migrateLegacyToneSettings;

- (id)init;
- (void)dealloc;
- (id)currentToneIdentifierForAlertType:(long long)arg1;
- (_Bool)toneWithIdentifierIsValid:(id)arg1;
- (id)nameForToneIdentifier:(id)arg1;
- (void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2;
- (long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1;
- (_Bool)_wasAffectedByAccidentalToneDeletion;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3;
- (id)defaultToneIdentifierForAlertType:(long long)arg1;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1;
- (_Bool)_loadITunesRingtoneInfoPlistAtPath:(id)arg1;
- (void)_loadAlertToneInfo;
- (void)_loadToneIdentifierAliasMap;
- (void)_performBlockInAccessQueue:(CDUnknownBlockType)arg1;
- (void)_handleProtectionContentUnlockedEvent;
- (id)_tonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2;
- (void)_reloadTonesAfterExternalChange;
- (id)_installedTones;
- (id)_addToneEntries:(id)arg1 toManifestAtPath:(id)arg2 mediaDirectory:(id)arg3 shouldSkipReload:(_Bool)arg4;
- (_Bool)_ensureDirectoryExistsAtPath:(id)arg1;
- (int)_lockManifestAtPath:(id)arg1;
- (void)_reloadTones;
- (_Bool)_removeToneWithIdentifier:(id)arg1 orSyncIdentifier:(id)arg2;
- (_Bool)_removeTonesFromManifestAtPath:(id)arg1 fileNames:(id)arg2 shouldSkipReload:(_Bool)arg3 alreadyLockedManifest:(_Bool)arg4 removedEntries:(id *)arg5;
- (id)_systemEmbeddedSoundDirectory;
- (id)_baseDirectoryForAlertToneSoundFiles;
- (id)_systemSoundDirectory;
- (id)_systemNewSoundDirectory;
- (id)_systemWatchSoundDirectory;
- (id)_systemEmbeddedModernSoundDirectory;
- (id)defaultRingtoneIdentifier;
- (_Bool)_toneWithIdentifierIsSystemAlertTone:(id)arg1;
- (id)_aliasForToneIdentifier:(id)arg1;
- (id)_newServiceConnection;
- (id)currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)_tonePreferencesFromService;
- (id)_currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)_defaultPreferablyNonSilentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)defaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (_Bool)_setToneIdentifierUsingService:(id)arg1 keyedByTopic:(id)arg2 forPreferenceKey:(id)arg3;
- (void)_didSetTonePreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned long long)arg3;
- (unsigned int)currentToneSoundIDForAlertType:(long long)arg1 topic:(id)arg2;
- (id)_soundForToneIdentifier:(id)arg1;
- (id)filePathForToneIdentifier:(id)arg1;
- (_Bool)_toneWithIdentifierIsITunesRingtone:(id)arg1;
- (_Bool)_toneWithIdentifierIsNonDefaultSystemRingtone:(id)arg1;
- (_Bool)_toneWithIdentifierIsDefaultRingtone:(id)arg1;
- (_Bool)_toneWithIdentifierIsAlarmWakeUp:(id)arg1;
- (id)_filePathForToneIdentifier:(id)arg1 isValid:(_Bool *)arg2;
- (id)_fileNameFromToneIdentifier:(id)arg1 withPrefix:(id)arg2;
- (id)_alarmWakeUpRingtoneDirectory;
- (id)_defaultRingtonePath;
- (id)_nameForToneIdentifier:(id)arg1 isValid:(_Bool *)arg2;
- (id)_localizedNameOfToneWithIdentifier:(id)arg1;
- (id)_defaultRingtoneName;
- (_Bool)_toneWithIdentifierIsValid:(id)arg1;
- (id)_addToneToManifestAtPath:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4;
- (id)_toneWithIdentifier:(id)arg1;
- (_Bool)_removeToneWithIdentifier:(id)arg1;
- (long long)_evaluateOrphanEntriesCleanupStatusForcingReevaluationIfPreviouslyDone:(_Bool)arg1 returningFilePathsForFoundOrphans:(id *)arg2 wasAffectedByAccidentalToneDeletion:(_Bool *)arg3;
- (id)_removeOrphanedPlistEntriesInManifestAtPath:(id)arg1 mediaDirectory:(id)arg2;
- (long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2;
- (long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2 didFindPersistedWatchAlertPolicy:(_Bool *)arg3;
- (id)_currentToneWatchAlertPolicyPreferenceKeyForAlertType:(long long)arg1 topic:(id)arg2;
- (void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 topic:(id)arg3;
- (void)_handleWatchPrefersSalientNotificationDidChange;
- (_Bool)_watchPrefersSalientNotifications;
- (long long)_currentOverridePolicyForAlertType:(long long)arg1 didFindAlertOverridePolicy:(_Bool *)arg2;
- (void)_handleTonePreferencesChangedNotificationForPreferencesKinds:(unsigned long long)arg1;
- (unsigned long long)_installedTonesSize;
- (_Bool)_removeToneFromManifestAtPath:(id)arg1 fileName:(id)arg2;
- (_Bool)_removeAllTones;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2;
- (id)currentToneNameForAlertType:(long long)arg1;
- (unsigned int)currentToneSoundIDForAlertType:(long long)arg1;
- (_Bool)hasSpecificDefaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)_previewSoundForToneIdentifier:(id)arg1;
- (id)_toneIdentifierForFileAtPath:(id)arg1 isValid:(_Bool *)arg2;
- (void)importTone:(id)arg1 metadata:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeImportedToneWithIdentifier:(id)arg1;
- (id)_importPurchasedToneWithMetadata:(id)arg1 fileName:(id)arg2;
- (_Bool)_transferPurchasedToITunes:(id)arg1;
- (id)_allSyncedTones;
- (id)_toneForSyncIdentifier:(id)arg1;
- (_Bool)_importSyncedToneWithMetadata:(id)arg1 fileName:(id)arg2;
- (_Bool)_removeToneWithSyncIdentifier:(id)arg1;
- (void)_removeAllSyncedData;
- (long long)_removeOrphanedManifestEntriesReturningFilePathsForFoundOrphans:(id *)arg1;
- (void)_registerDidRequestResetSyncPostAccidentalToneDeletion;
- (void)_setWatchPrefersSalientNotifications:(_Bool)arg1;
- (long long)_currentOverridePolicyForAlertType:(long long)arg1;
- (void)_setCurrentOverridePolicy:(long long)arg1 forAlertType:(long long)arg2;
- (void)_handleDeviceRingtonesChangedNotification;
- (id)currentToneIdentifierForAlertType:(long long)arg1 accountIdentifier:(id)arg2;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3;
- (long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 accountIdentifier:(id)arg2;
- (void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3;

@end
