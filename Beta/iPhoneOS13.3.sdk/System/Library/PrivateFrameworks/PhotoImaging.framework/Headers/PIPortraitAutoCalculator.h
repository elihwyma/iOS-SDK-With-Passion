/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NUAutoCalculator.h>

@class NSString, PIFaceObservationCache;

@interface PIPortraitAutoCalculator : NUAutoCalculator

{
    PIFaceObservationCache *_faceObservationCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) PIFaceObservationCache *faceObservationCache;

+ (id)portraitInfoDictionaryFromCameraMetadata:(id)arg1;
+ (id)portraitInfoDictionaryFromFaceObservations:(id)arg1 metadata:(id)arg2 orientation:(long long)arg3 valuesAtCapture:(id)arg4;
+ (_Bool)isStillImageDisparity:(id)arg1;
+ (id)focusRectDictionaryFromMetadata:(id)arg1;
+ (id)focusRectDictionaryFromRect:(struct CGRect)arg1;
+ (_Bool)canApplyPortraitEffectsWithMetadata:(id)arg1;
+ (id)depthEffectInfoDictionaryFromFaceObservations:(id)arg1 metadata:(id)arg2 orientation:(long long)arg3 valuesAtCapture:(id)arg4;
+ (id)depthEffectInfoDictionaryFromFaceObservations:(id)arg1 focus:(id)arg2 valuesAtCapture:(id)arg3 lumaNoiseScale:(float)arg4 orientation:(long long)arg5;
+ (id)portraitEffectInfoDictionaryFromFaceObservations:(id)arg1 orientation:(long long)arg2 valuesAtCapture:(id)arg3;

- (void)submit:(CDUnknownBlockType)arg1;
- (void)_calculateWithImageProperties:(id)arg1 valuesAtCapture:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
