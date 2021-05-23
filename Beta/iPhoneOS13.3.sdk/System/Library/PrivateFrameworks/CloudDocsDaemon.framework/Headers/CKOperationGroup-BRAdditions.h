/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudKit/CKOperationGroup.h>

@interface CKOperationGroup (BRAdditions)

+ (id)br_sharingMisc;
+ (id)br_downloadThumbnails;
+ (id)br_downloadUserInitiated;
+ (id)br_downloadOpportunistic;
+ (id)br_downloadOptimizeStorageOff;
+ (id)br_downloadUpdatedDocuments;
+ (id)br_downloadConflictingVersions;
+ (id)br_syncDownInitial;
+ (id)br_syncDownPeriodic;
+ (id)br_syncDownAppLibraryMetadata;
+ (id)br_syncUpAppLibraryMetadata;
+ (id)br_syncUpAndDownShareDB;
+ (id)br_syncUpZoneHealth;
+ (id)br_syncDownZoneHealth;
+ (id)br_syncDown;
+ (id)br_syncUp;
+ (id)br_zoneConsolidation;
+ (id)br_syncDownPushTriggered;
+ (id)br_osUpgradeMigration;
+ (id)br_purge;
+ (id)br_upload;
+ (id)br_quotaUpdateUploader;
+ (id)br_aggressiveChaining;
+ (id)br_zoneHealthSimulation;
+ (id)br_publishingRequest;
+ (id)br_quotaUpdateXPC;
+ (id)br_fetchIdentityXPC;
+ (id)br_zoneConsolidationManual;
+ (id)br_syncDownAppLaunch;
+ (id)br_downloadThumbnailsUserInitiated;
+ (id)br_fetchNonLocalVersions;

@end
