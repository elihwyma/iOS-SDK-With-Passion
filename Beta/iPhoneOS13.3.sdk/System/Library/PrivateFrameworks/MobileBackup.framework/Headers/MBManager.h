/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@protocol MBManagerDelegate;

@interface MBManager : NSObject

{
    id _delegate;
}

@property (nonatomic) NSObject<MBManagerDelegate> *delegate;

- (id)init;
- (id)_init;
- (void)cancel;
- (id)initWithDelegate:(id)arg1;
- (void)rebootDevice;
- (_Bool)discountCameraRollQuota;
- (_Bool)countCameraRollQuota;
- (id)domainInfoForName:(id)arg1;
- (id)restoreState;
- (id)getBuddyDataStashForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setupBackupWithPasscode:(id)arg1 error:(id *)arg2;
- (_Bool)startDeviceTransferWithTaskType:(long long)arg1 sessionInfo:(id)arg2 error:(id *)arg3;
- (_Bool)cancelDeviceTransferWithTaskType:(long long)arg1 error:(id *)arg2;
- (id)initWithDelegate:(id)arg1 eventQueue:(id)arg2;
- (id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(_Bool)arg3 range:(struct _NSRange)arg4 error:(id *)arg5;
- (void)setSupportsiTunes:(_Bool)arg1;
- (_Bool)isBackupEnabled;
- (void)setBackupEnabled:(_Bool)arg1;
- (void)syncBackupEnabled;
- (_Bool)isLocalBackupPasswordSetWithError:(id *)arg1;
- (_Bool)unsetLocalBackupPasswordWithError:(id *)arg1;
- (id)backupState;
- (id)backupDeviceUUID;
- (id)backupDeviceUDID;
- (id)backupList;
- (id)getBackupListWithError:(id *)arg1;
- (id)getBackupListWithFiltering:(_Bool)arg1 error:(id *)arg2;
- (_Bool)inheritSnapshot:(id)arg1 fromDevice:(id)arg2 error:(id *)arg3;
- (_Bool)recordRestoreFailure:(id)arg1 error:(id *)arg2;
- (id)restoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 range:(struct _NSRange)arg3;
- (unsigned long long)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2;
- (void)startBackup;
- (_Bool)startBackupWithError:(id *)arg1;
- (id)filesForSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id *)arg3;
- (_Bool)mergeSnapshots:(id)arg1 backupUUID:(id)arg2 error:(id *)arg3;
- (id)journalLastModifiedForBackupUUID:(id)arg1 error:(id *)arg2;
- (id)journalForBackupUUID:(id)arg1 error:(id *)arg2;
- (void)fetchiCloudRestoreIsCompleteWithCompletion:(CDUnknownBlockType)arg1;
- (id)backgroundRestoreInfo;
- (_Bool)restoreFileExistsWithPath:(id)arg1;
- (_Bool)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long *)arg2;
- (id)restoreFilesForDomain:(id)arg1 error:(id *)arg2;
- (id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(_Bool)arg3 error:(id *)arg4;
- (void)prioritizeRestoreFileWithPath:(id)arg1;
- (id)dateOfLastBackup;
- (id)dateOfNextScheduledBackup;
- (_Bool)restoreSupportsBatching;
- (void)setRestoreQualityOfService:(long long)arg1;
- (void)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2;
- (_Bool)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)restoreFileWithPath:(id)arg1 error:(id *)arg2;
- (_Bool)restoreFileWithPath:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (void)restoreFileWithPath:(id)arg1;
- (_Bool)restoreFilesWithPaths:(id)arg1 error:(id *)arg2;
- (_Bool)restoreFilesWithPaths:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (_Bool)restoreBookWithPath:(id)arg1 error:(id *)arg2;
- (_Bool)restoreBookWithPath:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (_Bool)restoreApplicationWithBundleID:(id)arg1 failed:(_Bool)arg2 error:(id *)arg3;
- (_Bool)restoreApplicationWithBundleID:(id)arg1 failed:(_Bool)arg2 context:(id)arg3 error:(id *)arg4;
- (_Bool)restoreApplicationWithBundleID:(id)arg1 failed:(_Bool)arg2 withQOS:(long long)arg3 context:(id)arg4 error:(id *)arg5;
- (_Bool)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id *)arg2;
- (_Bool)saveKeybagsForBackupUDID:(id)arg1 withError:(id *)arg2;
- (void)finishRestore;
- (void)insufficientFreeSpaceToRestore;
- (void)cancelRestore;
- (_Bool)deleteBackupUDID:(id)arg1 error:(id *)arg2;
- (_Bool)startScanWithError:(id *)arg1;
- (_Bool)startScanForBundleIDs:(id)arg1 error:(id *)arg2;
- (unsigned long long)nextBackupSize;
- (id)nextBackupSizeInfo;
- (id)domainInfoList;
- (id)disabledDomainInfos;
- (_Bool)removeDomainName:(id)arg1 error:(id *)arg2;
- (id)reservedBackupSizeListWithError:(id *)arg1;
- (_Bool)isBackupEnabledForDomainName:(id)arg1;
- (void)setBackupEnabled:(_Bool)arg1 forDomainName:(id)arg2;
- (_Bool)extractItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 toPath:(id)arg5 error:(id *)arg6;
- (_Bool)addFileToBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 fromPath:(id)arg5 error:(id *)arg6;
- (_Bool)deleteItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 error:(id *)arg5;
- (id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id *)arg3;
- (id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 activeAppleID:(id *)arg3 error:(id *)arg4;
- (id)getAppleIDsMapForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 activeAppleID:(id *)arg3 error:(id *)arg4;
- (id)restoreInfo;
- (void)setRestoreSessionWithBackupUDID:(id)arg1 snapshotUUID:(id)arg2;
- (void)clearRestoreSession;
- (void)setAllowiTunesBackup:(_Bool)arg1;
- (_Bool)allowiTunesBackup;
- (_Bool)airTrafficShouldCreateAppPlaceholdersWithError:(id *)arg1;
- (_Bool)countCameraRollQuotaForBackupUDID:(id)arg1 error:(id *)arg2;
- (_Bool)discountCameraRollQuotaForBackupUDID:(id)arg1 error:(id *)arg2;
- (_Bool)prepareForBackgroundRestoreWithError:(id *)arg1;
- (_Bool)archiveLogsTo:(id)arg1 error:(id *)arg2;
- (_Bool)pinSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id *)arg3;
- (_Bool)unpinSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id *)arg3;
- (_Bool)resumeDeviceTransferWithTaskType:(long long)arg1 error:(id *)arg2;
- (void)startPreflightWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startKeychainTransferWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startKeychainDataTransferWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startKeychainDataImportWithKeychainInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startDataTransferWithPreflightInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
