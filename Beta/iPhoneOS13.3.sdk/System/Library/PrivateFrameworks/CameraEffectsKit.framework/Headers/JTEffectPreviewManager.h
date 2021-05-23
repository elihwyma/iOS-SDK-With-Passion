/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class JTCacheDictionary, JTEffectContinousPreviewOptions, JTEffectPickerPreviewDiskCache, JTEffectsPreviewGenerator, JTFrameRateCalculator, JTImage, JTPixelRotationSession, NSArray, NSString, PVLivePlayer;

@protocol JTEffectPreviewManagerDelegate, OS_dispatch_queue;

@interface JTEffectPreviewManager : NSObject

{
    _Bool _allowCachingStaticPreviewsToDisk;
    _Bool _continouslyPreviewing;
    NSArray *_continousPreviewEffects;
    JTImage *_backgroundImage;
    id <JTEffectPreviewManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    JTCacheDictionary *_previewCache;
    JTFrameRateCalculator *_fpsCalc;
    JTEffectPickerPreviewDiskCache *_previewDiskCache;
    NSObject<OS_dispatch_queue> *_previewQueue;
    NSObject *_pickerPreviewingToken;
    JTEffectsPreviewGenerator *_staticPreviewGenerator;
    PVLivePlayer *_continousPreviewPlayer;
    JTEffectContinousPreviewOptions *_continousPreviewOptions;
    NSArray *_continousPreviewProVideoEffects;
    NSArray *_continousPreviewAnimojis;
    NSArray *_effectStackAppliedBeforeContinousPreview;
    JTPixelRotationSession *_pixelRotationSession;
    JTImage *_defaultPreviewImage;
    struct CGSize _previewRenderSize;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) JTCacheDictionary *previewCache;
@property (nonatomic, readonly) JTFrameRateCalculator *fpsCalc;
@property (nonatomic, readonly) JTEffectPickerPreviewDiskCache *previewDiskCache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *previewQueue;
@property (retain, nonatomic) NSObject *pickerPreviewingToken;
@property (retain, nonatomic) JTEffectsPreviewGenerator *staticPreviewGenerator;
@property (retain, nonatomic) PVLivePlayer *continousPreviewPlayer;
@property (retain, nonatomic) JTEffectContinousPreviewOptions *continousPreviewOptions;
@property (retain, nonatomic) NSArray *continousPreviewProVideoEffects;
@property (retain, nonatomic) NSArray *continousPreviewAnimojis;
@property (retain, nonatomic) NSArray *effectStackAppliedBeforeContinousPreview;
@property (retain, nonatomic) JTPixelRotationSession *pixelRotationSession;
@property (nonatomic) struct CGSize previewRenderSize;
@property (getter=isContinouslyPreviewing) _Bool continouslyPreviewing;
@property (retain) JTImage *defaultPreviewImage;
@property (nonatomic) struct CGSize previewSize;
@property (retain) JTImage *backgroundImage;
@property _Bool allowCachingStaticPreviewsToDisk;
@property (copy, nonatomic) NSArray *continousPreviewEffects;
@property (weak, nonatomic) id <JTEffectPreviewManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)highQualityRendering;
- (id)initWithPreviewSize:(struct CGSize)arg1 callbackQueue:(id)arg2;
- (void)startCachingPreviewsContinuouslyWithOptions:(id)arg1;
- (void)cachedPreviewForEffect:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cachedPreviewForEffectIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)JT_stopCachingPreviewsContinuously;
- (_Bool)rendersDefaultContinousPreviewImage;
- (void)adjustAnimationInfoForLiveCaptureRequest:(id)arg1;
- (_Bool)lowPriorityScheduling;
- (void)centerAnimationInfoForRequest:(id)arg1;
- (_Bool)JT_canCacheEffectToDisk:(id)arg1;
- (void)JT_renderPreviewForEffect:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)JT_dispatchBlockOnCallbackQueueImmediatelyWhenPossible:(CDUnknownBlockType)arg1;
- (void)preparePreviewForEffect:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)buildRenderRequest:(id)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)renderRequestComplete:(id)arg1 results:(id)arg2 completedOutOfOrder:(_Bool)arg3;
- (void)stopCachingPreviewsContinuously;
- (unsigned int)preferredSchedulingQueueSize;
- (_Bool)hasCachedPreviewForEffectID:(id)arg1;
- (void)purgeCachedPreviewForEffectID:(id)arg1;
- (void)purgeCachedPreviewsForAllEffects;

@end
