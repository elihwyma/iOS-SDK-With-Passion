/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/PHAWorker.h>

@class NSMutableArray, NSObject, NSString, PHAAnalysisWorkerJob, PVContext, PVVisionAnalyzer, VNPersonsModel;

@protocol OS_dispatch_queue;

@interface PHAFaceClassificationServiceWorker : PHAWorker

{
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableArray *_pendingAssetIdentifiers;
    PHAAnalysisWorkerJob *_currentJob;
    PVContext *_context;
    PVVisionAnalyzer *_analyzer;
    VNPersonsModel *_personsModel;
    unsigned long long _numberOfAssetsToProcess;
}

@property (retain) PVContext *context;
@property (retain) PVVisionAnalyzer *analyzer;
@property (retain) VNPersonsModel *personsModel;
@property unsigned long long numberOfAssetsToProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (short)workerType;
+ (long long)applicationDataFolderIdentifier;
+ (_Bool)persistsState;

- (void)_cleanup;
- (void)cooldown;
- (void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned int)arg2;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (_Bool)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (_Bool)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (void)warmupWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)processPendingAssetIdentifiers;
- (void)processAsset:(id)arg1;
- (void)loadPersonsModel;
- (void)analyzeAsset:(id)arg1 withImageProvider:(CDUnknownBlockType)arg2;

@end
