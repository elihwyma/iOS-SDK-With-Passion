/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSError.h>

@interface NSError (BRCSyncOperationThrottle)

+ (void)initialize;
+ (id)brc_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;
+ (id)brc_daemonAccessDisabledError;

- (double)br_suggestedRetryTimeInterval;
- (_Bool)brc_isRetriable;
- (_Bool)brc_isBlacklistError;
- (id)brc_cloudKitErrorForSubscriptionID:(id)arg1;
- (_Bool)brc_containsCloudKitInternalErrorCode:(long long)arg1;
- (id)brc_wrappedError;
- (_Bool)brc_isOutOfSpaceError;
- (_Bool)brc_isUserInitiatedRetriable;
- (_Bool)brc_isResetError;
- (_Bool)brc_isCloudKitErrorImplyingZoneNeedsCreation;
- (_Bool)brc_shouldRetryBubbleLater;
- (_Bool)brc_isCloudKitCancellationError;
- (_Bool)brc_isCloudKitAssetFileModified;
- (_Bool)brc_isCloudKitUnknownItemError;
- (unsigned long long)brc_containerResetErrorForSharedZone:(_Bool)arg1 resetReason:(const char **)arg2;
- (_Bool)brc_isCloudKitOutOfQuota;
- (_Bool)brc_isEverRetriable;
- (id)brc_cloudKitErrorForZone:(id)arg1;
- (_Bool)brc_isCloudKitErrorRequiringAssetReupload;
- (_Bool)brc_isCloudKitErrorUnsupportedOSForItemAndGetMinimumSupported:(id *)arg1;
- (_Bool)brc_isCloudKitErrorChainedToNewParent:(id *)arg1;
- (_Bool)brc_isIndividualItemBlacklistError;
- (_Bool)brc_containsCloudKitErrorCode:(long long)arg1;
- (_Bool)brc_isCloudKitAtomicFailure;
- (_Bool)brc_checkErrorsFromCloudKit:(CDUnknownBlockType)arg1;
- (_Bool)brc_isCloudKitErrorRequiringSkipThrottling;
- (int)brc_syncOperationErrorKind;
- (_Bool)brc_isCloudKitErrorUnsupportedOSForZoneAndGetMinimumSupported:(id *)arg1;
- (_Bool)brc_isCloudKitErrorZoneMigrated;
- (_Bool)brc_isCloudKitErrorNeedsPCSPrep;
- (_Bool)brc_isCloudKitErrorRequiringAssetRescan;
- (_Bool)brc_isCloudKitErrorSafeToSyncUpWithoutSyncDown;
- (id)brc_staleUpdateRecordIDs;
- (_Bool)brc_isBatchRequestFailed;
- (id)brc_cloudKitErrorForRecordID:(id)arg1;
- (_Bool)_brc_isCloudKitErrorCode:(long long)arg1;
- (_Bool)_brc_isCloudKitInternalErrorCode:(long long)arg1;
- (id)_brc_cloudKitInternalWithErrorCode:(long long)arg1;
- (id)br_cloudKitErrorForIdentifier:(id)arg1;
- (_Bool)_brc_isCloudKitPluginErrorCode:(long long)arg1;
- (id)_brc_cloudKitPluginErrorPayload;
- (_Bool)_brc_isCloudKitInternalErrorSafeToSyncUpWithoutSyncDown;
- (_Bool)_brc_isCloudKitZoneNotFoundError;
- (_Bool)_brc_isCloudKitZoneUserDeletedError;
- (id)brc_strippedError;
- (id)brc_description;
- (_Bool)brc_isCloudKitPCSError;
- (_Bool)brc_isCloudKitErrorZoneUndergoingMigration;
- (_Bool)brc_isCloudKitPCSDecryptionFailure;

@end
