/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSDictionary;

@protocol PLMomentGenerationDataManagement <Swift>

@property (nonatomic) _Bool shouldPerformLightweightValidation;
@property (nonatomic) long long previousValidatedModelVersion;
@property (nonatomic) _Bool previousValidationSucceeded;
@property (nonatomic, readonly) NSDictionary *generationOptions;

- (unsigned short)hasChanges;
- (unsigned short)insertedObjects;
- (unsigned short)save: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshAllObjects;
- (unsigned short)isNetworkReachable;
- (unsigned short)updatedObjects;
- (unsigned short)deletedObjects;
- (unsigned short)refreshObject:mergeChanges: /* Error: Ran out of types for this method. */;
- (unsigned short)performBlock:synchronously:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performDataTransaction:synchronously:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performBlock:synchronously:priority:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performDataTransaction:synchronously:priority:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)hardGenerationBatchSizeLimit;
- (unsigned short)invalidateLocationDataForAssetsInMoment: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateLocationDataForAssetsWithOIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)pendingChangesUpdated: /* Error: Ran out of types for this method. */;
- (unsigned short)momentAnalysisTransactionWithName: /* Error: Ran out of types for this method. */;
- (unsigned short)assetWithUniqueID:error: /* Error: Ran out of types for this method. */;
- (unsigned short)assetsWithUniqueIDs:error: /* Error: Ran out of types for this method. */;
- (unsigned short)momentWithUniqueID:error: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateAssetsWithIDs:usingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)momentListWithUniqueID:forLevel:error: /* Error: Ran out of types for this method. */;
- (unsigned short)momentsWithUniqueIDs:error: /* Error: Ran out of types for this method. */;
- (unsigned short)momentsForAssetsWithUniqueIDs:error: /* Error: Ran out of types for this method. */;
- (unsigned short)momentsSinceDate: /* Error: Ran out of types for this method. */;
- (unsigned short)momentsBetweenDate:andDate:sorted: /* Error: Ran out of types for this method. */;
- (unsigned short)yearMomentListForYear: /* Error: Ran out of types for this method. */;
- (unsigned short)monthMomentListForMonth:year: /* Error: Ran out of types for this method. */;
- (unsigned short)allMomentsWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)allInvalidMomentsWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)momentsWithLocationTypeUnprocessedWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)momentsRequiringLocationProcessingWhenFrequentLocationsChangedWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)allMomentIDsWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)allInvalidMomentIDsWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)allMomentsWithInvalidReverseLocationData;
- (unsigned short)allMomentListsForLevel: /* Error: Ran out of types for this method. */;
- (unsigned short)allMomentLists;
- (unsigned short)orphanedAssetIDsWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)momentsIntersectingDateInterval: /* Error: Ran out of types for this method. */;
- (unsigned short)allAssetsToBeIncludedInMomentsWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidAssetsIgnoringAssetIdentifiers:error: /* Error: Ran out of types for this method. */;
- (unsigned short)allInvalidAssetsWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)allAssetIDsToBeIncludedInMomentsWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)highlightsIntersectingDateInterval:ofKind: /* Error: Ran out of types for this method. */;
- (unsigned short)allPhotosHighlightsOfAllKindsWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)allPhotosHighlightsOfKind:error: /* Error: Ran out of types for this method. */;
- (unsigned short)allPhotosHighlightsOfKind:withPredicate:error: /* Error: Ran out of types for this method. */;
- (unsigned short)allPhotosHighlightsWithPredicate:error: /* Error: Ran out of types for this method. */;
- (unsigned short)allInvalidPhotosHighlightsOfAllKindsWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)allEmptyPhotosHighlightsOfKind:error: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAllMomentsWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAllHighlightsWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAllMomentListsWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)momentListDataClassForGranularityLevel: /* Error: Ran out of types for this method. */;
- (unsigned short)momentDataClass;
- (unsigned short)momentAssetDataClass;
- (unsigned short)insertNewMomentListForGranularityLevel: /* Error: Ran out of types for this method. */;
- (unsigned short)insertNewMoment;
- (unsigned short)insertNewPhotosHighlight;
- (unsigned short)resetOnFailure;
- (unsigned short)beginObservingNetworkReachabilityChangesWithBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)stopObservingNetworkReachabilityChanges;
- (unsigned short)homeAddressDictionary;
- (unsigned short)routineIsAvailable;
- (unsigned short)cameraIsActive;
- (unsigned short)locationsOfInterest;
- (unsigned short)fetchLocationsOfInterestIfNeeded;
- (unsigned short)logRoutineInformation;
- (unsigned short)locationCoordinatesForAssetIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateShiftedLocationForAllAssetsInMoments;
- (unsigned short)allAssetIDsNeedingLocationShiftWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)runPeriodicMaintenanceTasks:withTransaction: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateAllHighlightSubtitles;
- (unsigned short)wantsMomentReplayLogging;
- (unsigned short)replayLogPath;

@end
