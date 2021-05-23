/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/PHAWorker.h>

@class NSMapTable, NSMutableDictionary, NSNumber, NSObject, NSOperationQueue, NSString;

@protocol OS_dispatch_queue;

@interface PHAVisionServiceWorker : PHAWorker

{
    NSOperationQueue *_assetAnalysisOperationQueue;
    NSObject<OS_dispatch_queue> *_commandDispatchQueue;
    NSMapTable *_jobToAssetsAnalyzingOperationMapTable;
    NSMutableDictionary *_coalescedAnalysisResultsByAssetLocalIdentifier;
    NSMutableDictionary *_coalescedJobResultsByAssetLocalIdentifier;
    NSNumber *_lastRecordedDarkWakeState;
    _Atomic unsigned long long _lastPerformedJobScenario;
    _Bool _analysisJobCancelled;
    unsigned int _visionAlgorithmUmbrellaVersion;
}

@property _Bool analysisJobCancelled;
@property (nonatomic) unsigned int visionAlgorithmUmbrellaVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (CDUnknownBlockType)assetResourceLargestToSmallestComparator;
+ (id)preferredAssetResourcesForAnalyzingAsset:(id)arg1;
+ (id)analysisLog;
+ (id)defaultImageCreationOptions;
+ (void)disableANEForRequest:(id)arg1;
+ (CDUnknownBlockType)assetResourceSmallestToLargestComparator;

- (void)shutdown;
- (void)startup;
- (_Bool)processAsset:(id)arg1 error:(id *)arg2;
- (void)performVisionForcedCleanupWithOptions:(id)arg1;
- (void)performVisionForcedCleanup;
- (void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned int)arg2;
- (void)visionServiceAssetsProcessingOperation:(id)arg1 didExecuteToCompletion:(_Bool)arg2;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (void)_checkForDarkWakeStateTransition;
- (_Bool)isExecutingDuringDarkWake;
- (unsigned long long)lastPerformedJobScenario;
- (Class)assetsAnalyzingOperationClass;
- (void)willPerformJob:(id)arg1;
- (_Bool)canProvideAnalysisJobResultInformation:(id)arg1 withoutRequiringAssetResourceForAsset:(id)arg2;
- (unsigned long long)analyzeAssetWithLocalIdentifier:(id)arg1 dataLoadingOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (unsigned long long)analyzeAssetWithLocalIdentifier:(id)arg1 workerJob:(id)arg2 error:(id *)arg3;
- (void)willCompleteJob:(id)arg1;
- (void)didPerformJob:(id)arg1;
- (unsigned long long)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (unsigned long long)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (struct CGImage *)_createCGImageFromImageSource:(struct CGImageSource *)arg1 imageOptions:(id)arg2 orientation:(unsigned long long *)arg3 error:(id *)arg4;
- (id)assetWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)getLocallyAvailableAssetResource:(id *)arg1 forAnalyzingAsset:(id)arg2 error:(id *)arg3;
- (id)assetResourcesForAsset:(id)arg1 fromDesiredTypes:(const long long *)arg2 count:(unsigned long long)arg3;
- (id)localFileURLForAssetResource:(id)arg1 error:(id *)arg2;
- (id)imageDataForAssetResource:(id)arg1 error:(id *)arg2;
- (struct CGImage *)createCGImageForAssetResource:(id)arg1 imageOptions:(id)arg2 orientation:(unsigned long long *)arg3 error:(id *)arg4;
- (struct CGImage *)createCGImageFromImageFileURL:(id)arg1 imageOptions:(id)arg2 orientation:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (_Bool)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (_Bool)supportsCoalescingResults;
- (void)coalesceJobResult:(unsigned long long)arg1 forAssetLocalIdentifier:(id)arg2;
- (void)coalesceResultsDictionary:(id)arg1 forAssetLocalIdentifier:(id)arg2;
- (void)insidePhotoLibraryTransactionPersistResultsDictionary:(id)arg1 forAsset:(id)arg2;

@end
