/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSString, PLManagedAsset;

@interface PLAssetAnalysisState : PLManagedObject

@property (retain, nonatomic) PLManagedAsset *asset;
@property (nonatomic) short workerType;
@property (nonatomic) int analysisState;
@property (retain, nonatomic) NSString *assetUUID;
@property (retain, nonatomic) NSDate *lastIgnoredDate;
@property (retain, nonatomic) NSDate *ignoreUntilDate;
@property (nonatomic) int workerFlags;
@property (nonatomic) double sortToken;

+ (id)entityName;
+ (id)_batchOperationQueue;
+ (id)_countOfAnalysisStatesByWorkerTypeWithPredicate:(id)arg1 analysisState:(int)arg2 forDeletedAssets:(_Bool)arg3 inContext:(id)arg4 error:(id *)arg5;
+ (unsigned long long)_countOfAssetsAllowedForProcessingInLibrary:(id)arg1 error:(id *)arg2;
+ (_Bool)_bulkUpdateAnalysisStatesTo:(int)arg1 predicate:(id)arg2 library:(id)arg3 error:(id *)arg4;
+ (id)_analysisStateCountsForWorkerType:(short)arg1 states:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
+ (id)insertIntoManagedObjectContext:(id)arg1 forAsset:(id)arg2 workerType:(short)arg3 initialState:(int)arg4 lastIgnoreDate:(id)arg5 ignoreUntilDate:(id)arg6 workerFlags:(int)arg7;
+ (id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 workerType:(short)arg3 initialState:(int)arg4 lastIgnoreDate:(id)arg5 ignoreUntilDate:(id)arg6 workerFlags:(int)arg7;
+ (id)_managedObjectContextForStateChangesWithPersistentStoreCoordinator:(id)arg1;
+ (id)_managedObjectContextForStateChangesWithLibraryURL:(id)arg1;
+ (_Bool)_inqApplyChanges:(id)arg1 assetUUID:(id)arg2 inManagedObjectContext:(id)arg3 allowUnsafeSetProcessed:(_Bool)arg4 error:(id *)arg5;
+ (_Bool)_performTransactionApplyChanges:(id)arg1 assetUUID:(id)arg2 inManagedObjectContext:(id)arg3 allowUnsafeSetProcessed:(_Bool)arg4 error:(id *)arg5;
+ (id)_subArrayOfChanges:(id)arg1 toRetryWithConflicts:(id)arg2;
+ (_Bool)_performTransactionResolveConflicts:(id)arg1 originalChanges:(id)arg2 assetUUID:(id)arg3 inManagedObjectContext:(id)arg4 allowUnsafeSetProcessed:(_Bool)arg5 newChanges:(id *)arg6 error:(id *)arg7;
+ (id)_sanitizeChanges:(id)arg1;
+ (_Bool)applyAnalysisStateChanges:(id)arg1 assetUUID:(id)arg2 libraryURL:(id)arg3 allowUnsafeSetProcessed:(_Bool)arg4 error:(id *)arg5;
+ (id)keyPathDictionaryWithWorkerType:(short)arg1 workerFlags:(int)arg2 analysisState:(int)arg3 lastIgnoredDate:(id)arg4 ignoreUntilDate:(id)arg5;
+ (id)workerTypesPersistingAnalysisState;
+ (_Bool)isUnitTestWorker:(short)arg1;
+ (void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 library:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)requestAnalysisCountsInLibrary:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (double)analysisProgressForHighlightManagedObjectID:(id)arg1 workerType:(short)arg2 library:(id)arg3 error:(id *)arg4;
+ (id)assetUUIDsFromAssetObjectIDs:(id)arg1 library:(id)arg2 whereAllWorkerTypes:(id)arg3 matchState:(id)arg4;
+ (id)analysisCountsForWorkerType:(short)arg1 library:(id)arg2;
+ (void)requestCountOfAnalysisRecordsForDeletedAssetsInLibrary:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)deletedAssetUUIDsForAnalysisByWorkerType:(short)arg1 fetchLimit:(unsigned long long)arg2 inLibrary:(id)arg3 error:(id *)arg4;
+ (_Bool)resetPendingStatesInLibraryAtURL:(id)arg1 error:(id *)arg2;
+ (_Bool)markStatesProcessedForWorkerType:(short)arg1 library:(id)arg2 error:(id *)arg3;
+ (_Bool)cleanupInvalidIgnoreUntilDatesInLibraryAtURL:(id)arg1 error:(id *)arg2;
+ (_Bool)clearIgnoreUntilDatesInLibraryAtURL:(id)arg1 error:(id *)arg2;
+ (_Bool)resetFaceCropAnalysisStateInLibraryAtURL:(id)arg1 error:(id *)arg2;
+ (void)_removeAnalysisRecordsWithPredicate:(id)arg1 library:(id)arg2;
+ (void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg1 forWorkerType:(short)arg2 library:(id)arg3;
+ (void)removeAnalysisRecordsWithNoAssetOrUUIDUseMaintenanceMode:(_Bool)arg1 library:(id)arg2;
+ (int)defaultWorkerFlagsForWorkerType:(short)arg1;
+ (id)workInfoForAnalysisWithWorkerType:(short)arg1 additionalStatesToExclude:(id)arg2 fetchLimit:(unsigned long long)arg3 inLibrary:(id)arg4 error:(id *)arg5;

- (id)debugLogDescription;
- (id)mutableKeyPathDictionary;
- (void)unionWorkerFlags:(int)arg1;

@end
