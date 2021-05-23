/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSDate, NSDictionary, NSError, NSIndexSet, NSMutableDictionary, NSNumber, NSObject, NSOperation, NSProgress, NSString, PXUpdater;

@protocol OS_dispatch_queue, PXEditSourceLoader;

@interface PXAssetVariationRenderProvider : PXObservable

{
    PXUpdater *_updater;
    NSMutableDictionary *_resultsByVariationType;
    NSMutableDictionary *_progressesByVariationType;
    NSProgress *_recipeGenerationProgress;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _hasBegunRendering;
    NSProgress *_observedEditSourceLoaderProgress;
    unsigned char _signpostID;
    _Bool _renderAllResources;
    NSDictionary *_analysisResult;
    id <PXEditSourceLoader> _editSourceLoader;
    NSIndexSet *_desiredVariationTypes;
    long long _status;
    NSString *_statusDescription;
    NSError *_error;
    NSProgress *_initialLoadingProgress;
    NSNumber *_totalRenderingDuration;
    NSOperation *__analysisOperation;
    NSMutableDictionary *__renderingOperationsByVariationType;
    NSDate *__beginRenderingDate;
    NSNumber *__editSourceDuration;
    NSNumber *__recipeGenerationDuration;
    NSMutableDictionary *__renderingDurationByVariationType;
    struct CGSize _targetSize;
}

@property (retain, nonatomic, setter=_setAnalysisOperation:) NSOperation *_analysisOperation;
@property (nonatomic, readonly) NSMutableDictionary *_renderingOperationsByVariationType;
@property (retain, nonatomic, setter=_setBeginRenderingDate:) NSDate *_beginRenderingDate;
@property (retain, nonatomic) NSNumber *totalRenderingDuration;
@property (retain, nonatomic, setter=_setEditSourceDuration:) NSNumber *_editSourceDuration;
@property (retain, nonatomic, setter=_setRecipeGenerationDuration:) NSNumber *_recipeGenerationDuration;
@property (nonatomic, readonly) NSMutableDictionary *_renderingDurationByVariationType;
@property (nonatomic, setter=_setStatus:) long long status;
@property (copy, nonatomic, setter=_setStatusDescription:) NSString *statusDescription;
@property (retain, nonatomic, setter=_setError:) NSError *error;
@property (nonatomic, readonly) _Bool _hasAllResults;
@property (copy, nonatomic) NSDictionary *analysisResult;
@property (nonatomic, readonly) id <PXEditSourceLoader> editSourceLoader;
@property (nonatomic) struct CGSize targetSize;
@property (copy, nonatomic, readonly) NSIndexSet *desiredVariationTypes;
@property (nonatomic) _Bool renderAllResources;
@property (nonatomic, readonly) NSProgress *initialLoadingProgress;

+ (id)sharedOperationQueue;
+ (id)supportedVariationTypes;
+ (id)_renderingLog;
+ (void)_performSimulatedWorkWithProgress:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateStatus;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (id)initWithEditSourceLoader:(id)arg1 targetSize:(struct CGSize)arg2 desiredVariationTypes:(id)arg3;
- (id)renderResultForVariationType:(long long)arg1;
- (void)beginRendering;
- (void)cancelRendering;
- (void)unloadResults;
- (id)progressForVariationType:(long long)arg1;
- (void)_invalidateStatus;
- (void)_invalidateCachedAnalysisResult;
- (id)_recipeCacheKey;
- (void)_updateCachedAnalysisResult;
- (void)_handleCachedAnalysisResult:(id)arg1;
- (void)_invalidateAnalysisResult;
- (void)_updateAnalysisResult;
- (void)_handleAnalysisOperationCompleted:(id)arg1;
- (void)_invalidateRenders;
- (void)_updateRenders;
- (void)_handleRenderingOperationStarted:(id)arg1;
- (void)_handleRenderingOperationCompleted:(id)arg1;
- (void)_setResult:(id)arg1 forVariationType:(long long)arg2;
- (void)_removeAllResults;
- (void)_setProgress:(id)arg1 forVariationType:(long long)arg2;

@end
