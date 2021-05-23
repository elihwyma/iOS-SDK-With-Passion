/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WLMigrator : NSObject

{
    NSString *_connectionKey;
}

@property (nonatomic, readonly) NSString *connectionKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_deviceType;
+ (id)_systemVersion;
+ (void)setStashDataLocally:(_Bool)arg1;
+ (_Bool)stashDataLocally;
+ (_Bool)_shouldContinueMigrationFromAnotherDevice;
+ (unsigned long long)_bytesFreeOnDevice;
+ (_Bool)_shouldTerminateMigrationBeforeImport;
+ (id)_dataTypesAndSizesXMLDataFromMap:(id)arg1;
+ (void)_parseDataTypesXMLData:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_aggdStringForContentTypeToStatsMap:(id)arg1 aggregateStatistics:(id)arg2 metadata:(id)arg3 allowAllFields:(_Bool)arg4;
+ (id)_unsupportedContentTypeAggdString;
+ (id)_aggdStringForStatistics:(id)arg1 allowAllFields:(_Bool)arg2 confirmSelected:(_Bool)arg3;
+ (id)_unselectedContentTypeAggdString;
+ (unsigned long long)_bucketedUnsignedInteger:(unsigned long long)arg1;
+ (void)_presentPromptForMigrableApps:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (id)databaseParentPathForMigrationDataCoordinator:(id)arg1 sqlController:(id)arg2;
- (id)downloadsParentPathForMigrationDataCoordinator:(id)arg1;
- (_Bool)migrationDataCoordinator:(id)arg1 shouldTerminateFetchWithError:(id)arg2;
- (void)_startMigrationWithSourceDevice:(id)arg1 usingRetryPolicies:(_Bool)arg2 delegate:(id)arg3 remoteDeviceDataSource:(id)arg4 dataCoordinatorDelegate:(id)arg5 didFinishMigrationContextSetupBlock:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_finishMigrationWithError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_prepareMetadata:(id)arg1 usingRetryPolicies:(_Bool)arg2 allowContinuationFromAnotherDevice:(_Bool)arg3;
- (void)_deleteDownloadsPath:(id)arg1;
- (id)_fetchAccountsAndSummariesWithContext:(id)arg1;
- (id)_selectDataTypesWithContext:(id)arg1;
- (void)_setProgressTo:(double)arg1 context:(id)arg2;
- (void)_updateSourceWithProgress:(double)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_downloadDataWithContext:(id)arg1;
- (void)_reportTimeEstimatesWithContext:(id)arg1;
- (id)_importDataWithContext:(id)arg1;
- (void)_logMigratorAndAggregateStatisticsWithContext:(id)arg1;
- (_Bool)_shouldTerminateMigrationOnError;
- (void)_selectFromDataTypeToSizeMap:(id)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_shouldForceDownloadError;
- (void)_didFinishDownloadingSegmentOfSize:(unsigned long long)arg1 expectedSize:(unsigned long long)arg2 migratorEstimatesItemSizes:(_Bool)arg3 endDate:(id)arg4 context:(id)arg5;
- (double)_progressIncrementForImportedSummary:(id)arg1 summaries:(id)arg2 accounts:(id)arg3 migrators:(id)arg4;
- (void)_incrementProgressBy:(double)arg1 context:(id)arg2;
- (void)_cleanUpAfterFinalizeMigratableAppsWithSQLController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConnectionKey:(id)arg1;
- (void)connectionDidEnd;
- (void)startMigrationWithSourceDevice:(id)arg1 usingRetryPolicies:(_Bool)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)finalizeMigratableAppsWithCompletion:(CDUnknownBlockType)arg1;

@end
