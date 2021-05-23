/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/PHAVisionServiceWorker.h>

#import <PhotoAnalysis/Swift-Protocol.h>

@class NSMutableDictionary, NSString, NSURL, PHAVisionServicePersistenceDelegate, PhotoVision;

@interface PHAVisionServiceFaceProcessingWorker : PHAVisionServiceWorker <Swift>

{
    PhotoVision *_photoVision;
    PHAVisionServicePersistenceDelegate *_persistenceDelegate;
    struct {
        double startTimeInterval;
        unsigned long long assetCount;
        unsigned long long faceCount;
        unsigned long long clusteringCount;
    } _analysisStatistics;
    NSMutableDictionary *_state;
    unsigned long long _incrementalPersonProcessingStage;
    _Bool _disabledByUserDefaults;
    unsigned long long _faceAnalysisOptions;
    unsigned long long _faceIDModelRebuildPeriod;
    NSURL *_suggestionLoggingDirectory;
    _Bool _suggestionLoggingSessionOpen;
    _Bool _suggestionsLoggingEnabled;
    _Bool _clustererNeedsSyncing;
    _Bool _personBuilderMergeCandidatesEnabled;
    unsigned long long _lastMinimumFaceGroupSizeForCreatingMergeCandidates;
}

@property (nonatomic) unsigned long long incrementalPersonProcessingStage;
@property (nonatomic) _Bool personBuilderMergeCandidatesEnabled;
@property (nonatomic) unsigned long long lastMinimumFaceGroupSizeForCreatingMergeCandidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEnabled;
- (void)shutdown;
- (void)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)suggestPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)suggestVerifiedPersonLocalIdentifierForFaceWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(_Bool)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)resetFaceClusteringStateWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetPeopleWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetFaceClassificationModelWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)reclusterFacesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)processPersonsWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)faceClusteringInformation:(unsigned long long)arg1 withContext:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)validateClusterCacheWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestSuggestedMePersonIdentifierWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)faceProcessingStatusForUserInterfaceWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)personPromoterStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)rebuildPersonsWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)processAsset:(id)arg1 error:(id *)arg2;
- (void)cooldown;
- (id)keyFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 overTheYearsComputation:(_Bool)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(CDUnknownBlockType)arg4;
- (id)statusAsDictionary;
- (id)bestRepresentativeFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 canceler:(id)arg3;
- (id)_faceToFaceCountMapForFaces:(id)arg1;
- (void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned int)arg2;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (void)willCompleteJob:(id)arg1;
- (unsigned long long)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (unsigned long long)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (_Bool)getLocallyAvailableAssetResource:(id *)arg1 forAnalyzingAsset:(id)arg2 error:(id *)arg3;
- (_Bool)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (_Bool)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (void)warmupWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)handlePVNotification:(id)arg1;
- (void)pingFaceWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_performIntermediateVisionCleanup;
- (void)_performFullVisionCleanup;
- (void)_resetAnalysisStatistics;
- (void)_logAnalysisStatistics;
- (id)_suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 operation:(id)arg4 context:(id)arg5 error:(id *)arg6;
- (id)_photoVisionAllowingCreation:(_Bool)arg1 syncClusterCache:(_Bool)arg2 error:(id *)arg3;
- (void)terminatePhotoVision;
- (void)interruptPhotoVision;
- (id)_pvImageForAssetResource:(id)arg1 asset:(id)arg2 error:(id *)arg3;
- (id)_pvImageForAssetResourceFileURL:(id)arg1 forAsset:(id)arg2 error:(id *)arg3;
- (id)_pvImageForAsset:(id)arg1 error:(id *)arg2;
- (int)_performPersistedFaceAnalysisOfResource:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id *)arg4;
- (int)_performPersistedFaceAnalysisOfPVImage:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id *)arg4;
- (id)_analyzePVImage:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (void)_openSuggestionsLoggingSession;
- (void)_closeSuggestionsLoggingSession;
- (void)_appendToSuggestionsLog:(id)arg1;
- (void)_copyImageAtURLToSuggestionsLoggingSession:(id)arg1;
- (void)_logFaceToSuggestionsLog:(id)arg1;
- (void)_finalizeSuggestionsLog;
- (id)_suggestionsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 operation:(id)arg4 error:(id *)arg5;
- (_Bool)_resetFaceClusteringStateWithContext:(id)arg1 error:(id *)arg2;
- (void)_willPerformFaceClustering;
- (void)_didPerformFaceClustering;
- (void)_performFaceCropProcessingWhileKeepingAliveJob:(id)arg1;
- (_Bool)performFaceClusteringWithCompletion:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)_generateAndAssociateFaceprintedFaceForFaceCrop:(id)arg1 createFaceTorsoprint:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_updateFaceCropFace:(id)arg1 withFaceprintForFaceCrop:(id)arg2 createFaceTorsoprint:(_Bool)arg3 error:(id *)arg4;
- (_Bool)processDirtyFaceCrop:(id)arg1 error:(id *)arg2;
- (_Bool)_setAllFaceGroupsNeedPersonBuilding;
- (_Bool)performPersonBuildingWithCanceler:(id)arg1 extendTimeoutBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)_needToRunFaceCropProcessingJobForScenario:(unsigned long long)arg1;
- (_Bool)_needToRunClusteringJobForScenario:(unsigned long long)arg1;
- (_Bool)_needToRunPersonBuildingJobForScenario:(unsigned long long)arg1;
- (_Bool)_needToRunPersonPromoterForScenario:(unsigned long long)arg1;
- (_Bool)_needToRunFaceIDModelCreationForScenario:(unsigned long long)arg1;
- (_Bool)_needsToRunContactClassificationForScenario:(unsigned long long)arg1;
- (_Bool)hasStandaloneJobsForScenario:(unsigned long long)arg1;
- (id)workerStateFileURL;
- (void)_readState;
- (void)_setStateValue:(id)arg1 forKey:(id)arg2;
- (void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:(unsigned long long)arg1;
- (_Bool)_validateAsset:(id)arg1 error:(id *)arg2;
- (_Bool)_generateAndPersistFaceCropsOfFaces:(id)arg1 inImage:(id)arg2 forAsset:(id)arg3 error:(id *)arg4;
- (id)_facesRequiringFaceCropGenerationForAsset:(id)arg1 error:(id *)arg2;
- (_Bool)_generateAndPersistFaceCropsOfUserConfirmedFacesInImage:(id)arg1 forAsset:(id)arg2 error:(id *)arg3;
- (int)_faceWorkerTasksToPerformOnAsset:(id)arg1 accordingToAnalysisAttributes:(id)arg2;
- (unsigned long long)_analyzeAsset:(id)arg1 withAttributes:(id)arg2 usingPVImageProvidedByBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (void)processDirtyFaceCrops;
- (_Bool)_deleteAllVerifiedPersonsWithError:(id *)arg1;
- (_Bool)_clusterFacesWithPhotoVision:(id)arg1 incrementally:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_buildPersonsIncrementally:(_Bool)arg1 error:(id *)arg2;
- (_Bool)_promotePersonsWithError:(id *)arg1;
- (id)fetchPersonsForFaceIDModel;
- (_Bool)shouldRebuildFaceIDModel;
- (_Bool)faceIDModelLastGenerationDidExceedTimeInterval;
- (void)markLastBackgroundFaceIDModelRebuildJobDate;
- (id)personModelPath;
- (_Bool)persistPersonModel:(id)arg1;
- (_Bool)deletePersonModelWithError:(id *)arg1;
- (void)generateFaceIDModelShouldForce:(_Bool)arg1 progress:(id)arg2 extendTimeoutBlock:(CDUnknownBlockType)arg3;
- (_Bool)shouldReclassifyContacts;
- (_Bool)contactClassificationDidExceedTimeInterval;
- (void)markLastBackgroundContactClassificationJobDate;
- (_Bool)classifyContactsWithProgress:(id)arg1 extendTimeoutBlock:(CDUnknownBlockType)arg2;
- (id)_loadPersonsModelWithPhotoLibrary:(id)arg1;
- (id)_persistentStorageDirectoryURLWithPhotoLibrary:(id)arg1;
- (id)sortedPoolOfContactIdentifiersExcludingContactIdentifiers:(id)arg1;
- (_Bool)shouldProcessContact:(id)arg1;

@end
