/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSDictionary, NSManagedObjectContext, NSString, PLCameraAppWatcher, PLLibraryServicesManager, PLMomentGeneration, PLPhotoLibrary, PLPhotoLibraryPathManager, PLRoutineService, PLXPCTransaction;

@interface PLMomentGenerationDataManager : NSObject

{
    PLXPCTransaction *_keepAliveTransaction;
    CDUnknownBlockType _reachabilityBlock;
    CNContactStore *_contactStore;
    PLMomentGeneration *_generator;
    NSDictionary *_generationOptions;
    _Bool _observingReachability;
    _Bool _isLightweightMigrationManager;
    PLPhotoLibraryPathManager *_lightWeightMigrationPathManager;
    PLLibraryServicesManager *_libraryServicesManager;
    PLRoutineService *_routineManager;
    _Bool _shouldPerformLightweightValidation;
    _Bool _previousValidationSucceeded;
    long long _previousValidatedModelVersion;
    PLCameraAppWatcher *_cameraWatcher;
    NSManagedObjectContext *_managedObjectContext;
    PLPhotoLibrary *_momentGenerationLibrary;
}

@property (weak, nonatomic, readonly) CNContactStore *_contactStore;
@property (retain, nonatomic) PLPhotoLibrary *momentGenerationLibrary;
@property (nonatomic, readonly) PLCameraAppWatcher *cameraWatcher;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool shouldPerformLightweightValidation;
@property (nonatomic) long long previousValidatedModelVersion;
@property (nonatomic) _Bool previousValidationSucceeded;
@property (nonatomic, readonly) NSDictionary *generationOptions;

+ (void)initialize;
+ (void)_setManagedObjectContextMomentarilyBlessed:(id)arg1;
+ (void)setManagerMomentarilyBlessed:(id)arg1;
+ (_Bool)isManagedObjectContextMomentarilyBlessed:(id)arg1;

- (void)dealloc;
- (_Bool)hasChanges;
- (id)insertedObjects;
- (_Bool)save:(id *)arg1;
- (void)refreshAllObjects;
- (_Bool)isNetworkReachable;
- (id)updatedObjects;
- (id)deletedObjects;
- (void)refreshObject:(id)arg1 mergeChanges:(_Bool)arg2;
- (id)generator;
- (id)initWithLibraryServicesManager:(id)arg1;
- (id)fetchNeighborHighlightItemsForHighlightItems:(id)arg1;
- (id)fetchChildHighlightItemsForHighlightItem:(id)arg1;
- (id)fetchParentHighlightItemsForHighlightItems:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 synchronously:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performDataTransaction:(CDUnknownBlockType)arg1 synchronously:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performBlock:(CDUnknownBlockType)arg1 synchronously:(_Bool)arg2 priority:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performDataTransaction:(CDUnknownBlockType)arg1 synchronously:(_Bool)arg2 priority:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)hardGenerationBatchSizeLimit;
- (void)invalidateLocationDataForAssetsInMoment:(id)arg1;
- (void)invalidateLocationDataForAssetsWithOIDs:(id)arg1;
- (void)pendingChangesUpdated:(unsigned long long)arg1;
- (id)momentAnalysisTransactionWithName:(const char *)arg1;
- (id)assetWithUniqueID:(id)arg1 error:(id *)arg2;
- (id)assetsWithUniqueIDs:(id)arg1 error:(id *)arg2;
- (id)momentWithUniqueID:(id)arg1 error:(id *)arg2;
- (void)enumerateAssetsWithIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)momentListWithUniqueID:(id)arg1 forLevel:(short)arg2 error:(id *)arg3;
- (id)momentsWithUniqueIDs:(id)arg1 error:(id *)arg2;
- (id)momentsForAssetsWithUniqueIDs:(id)arg1 error:(id *)arg2;
- (id)momentsSinceDate:(id)arg1;
- (id)momentsBetweenDate:(id)arg1 andDate:(id)arg2 sorted:(_Bool)arg3;
- (id)yearMomentListForYear:(long long)arg1;
- (id)monthMomentListForMonth:(long long)arg1 year:(long long)arg2;
- (id)allMomentsWithError:(id *)arg1;
- (id)allInvalidMomentsWithError:(id *)arg1;
- (id)momentsWithLocationTypeUnprocessedWithError:(id *)arg1;
- (id)momentsRequiringLocationProcessingWhenFrequentLocationsChangedWithError:(id *)arg1;
- (id)allMomentIDsWithError:(id *)arg1;
- (id)allInvalidMomentIDsWithError:(id *)arg1;
- (id)allMomentsWithInvalidReverseLocationData;
- (id)allMomentListsForLevel:(short)arg1;
- (id)allMomentLists;
- (id)orphanedAssetIDsWithError:(id *)arg1;
- (id)momentsIntersectingDateInterval:(id)arg1;
- (id)allAssetsToBeIncludedInMomentsWithError:(id *)arg1;
- (id)invalidAssetsIgnoringAssetIdentifiers:(id)arg1 error:(id *)arg2;
- (id)allInvalidAssetsWithError:(id *)arg1;
- (id)allAssetIDsToBeIncludedInMomentsWithError:(id *)arg1;
- (id)highlightsIntersectingDateInterval:(id)arg1 ofKind:(unsigned short)arg2;
- (id)allPhotosHighlightsOfAllKindsWithError:(id *)arg1;
- (id)allPhotosHighlightsOfKind:(unsigned short)arg1 error:(id *)arg2;
- (id)allPhotosHighlightsOfKind:(unsigned short)arg1 withPredicate:(id)arg2 error:(id *)arg3;
- (id)allPhotosHighlightsWithPredicate:(id)arg1 error:(id *)arg2;
- (id)allInvalidPhotosHighlightsOfAllKindsWithError:(id *)arg1;
- (id)allEmptyPhotosHighlightsOfKind:(unsigned short)arg1 error:(id *)arg2;
- (_Bool)deleteAllMomentsWithError:(id *)arg1;
- (_Bool)deleteAllHighlightsWithError:(id *)arg1;
- (_Bool)deleteAllMomentListsWithError:(id *)arg1;
- (Class)momentListDataClassForGranularityLevel:(short)arg1;
- (Class)momentDataClass;
- (Class)momentAssetDataClass;
- (id)insertNewMomentListForGranularityLevel:(short)arg1;
- (id)insertNewMoment;
- (id)insertNewPhotosHighlight;
- (void)resetOnFailure;
- (void)beginObservingNetworkReachabilityChangesWithBlock:(CDUnknownBlockType)arg1;
- (void)stopObservingNetworkReachabilityChanges;
- (id)homeAddressDictionary;
- (_Bool)routineIsAvailable;
- (_Bool)cameraIsActive;
- (id)locationsOfInterest;
- (void)fetchLocationsOfInterestIfNeeded;
- (void)logRoutineInformation;
- (id)locationCoordinatesForAssetIDs:(id)arg1;
- (void)invalidateShiftedLocationForAllAssetsInMoments;
- (id)allAssetIDsNeedingLocationShiftWithError:(id *)arg1;
- (void)runPeriodicMaintenanceTasks:(unsigned long long)arg1 withTransaction:(id)arg2;
- (void)invalidateAllHighlightSubtitles;
- (_Bool)wantsMomentReplayLogging;
- (id)replayLogPath;
- (id)initWithManagedObjectContext:(id)arg1 pathManagerForLightweightMigration:(id)arg2;
- (void)_finalizeInit;
- (void)reloadGenerationOptions;
- (void)_networkReachabilityDidChange:(id)arg1;
- (id)_currentHomeAddressDictionary;
- (void)_updateKeepAlive;
- (void)_removeKeepAlive;
- (id)_highlightsRelationshipKeyPathsForPrefetchingForKind:(unsigned short)arg1;
- (id)_highlightsRelationshipKeyPathsForPrefetching;
- (_Bool)_batchDeleteForEntityName:(id)arg1 error:(id *)arg2;
- (void)verifyAndRepairOrphanedAssets:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
