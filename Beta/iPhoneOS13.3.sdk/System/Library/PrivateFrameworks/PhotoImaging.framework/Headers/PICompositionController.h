/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NUComposition, PIAdjustmentConstants;

@protocol PICompositionControllerDelegate;

@interface PICompositionController : NSObject

{
    NUComposition *_composition;
    struct {
        _Bool hasDidAdd;
        _Bool hasDidRemove;
        _Bool hasDidModify;
        _Bool hasDidModifyMultiple;
        _Bool hasClassForController;
    } _delegateFlags;
    NSDictionary *_identifierMap;
    id <PICompositionControllerDelegate> _changeDelegate;
    long long _mediaType;
    long long _imageOrientation;
}

@property (nonatomic, readonly) PIAdjustmentConstants *adjustmentConstants;
@property (copy, nonatomic, readonly) NUComposition *composition;
@property (weak, nonatomic) id <PICompositionControllerDelegate> changeDelegate;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long imageOrientation;
@property (nonatomic) long long sourceSelection;

+ (id)photosSchema;
+ (id)settingForAdjustmentKey:(id)arg1 settingKey:(id)arg2;
+ (Class)adjustmentControllerClassForKey:(id)arg1;
+ (id)_keyToIdentifierMap;
+ (id)schemaForKey:(id)arg1;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)availableKeys;
- (id)portraitAdjustmentController;
- (void)modifyAdjustmentWithKey:(id)arg1 modificationBlock:(CDUnknownBlockType)arg2;
- (id)depthAdjustmentController;
- (long long)userOrientation;
- (id)sourceSelectAdjustmentController;
- (id)videoReframeAdjustmentController;
- (id)cropAdjustmentController;
- (id)initWithComposition:(id)arg1;
- (void)applyChangesFromCompositionController:(id)arg1;
- (void)removeAdjustmentWithKey:(id)arg1;
- (_Bool)isEqual:(id)arg1 forKeys:(id)arg2 visualChangesOnly:(_Bool)arg3;
- (id)effect3DAdjustmentController;
- (id)effectAdjustmentController;
- (_Bool)isEqual:(id)arg1 forKeys:(id)arg2 comparisonBlock:(CDUnknownBlockType)arg3;
- (id)definitionAdjustmentController;
- (id)noiseReductionAdjustmentController;
- (id)whiteBalanceAdjustmentController;
- (id)sharpenAdjustmentController;
- (id)smartBWAdjustmentController;
- (id)rawNoiseReductionAdjustmentController;
- (id)smartColorAdjustmentController;
- (id)smartToneAdjustmentController;
- (id)adjustmentControllerForKey:(id)arg1;
- (id)orientationAdjustmentController;
- (void)setOvercaptureSource:(id)arg1;
- (void)setSource:(id)arg1 mediaType:(long long)arg2;
- (id)trimAdjustmentController;
- (id)compositionKeys;
- (id)redEyeAdjustmentController;
- (_Bool)isEqual:(id)arg1 visualChangesOnly:(_Bool)arg2;
- (id)autoLoopAdjustmentController;
- (id)orientationAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)cropAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)slomoAdjustmentController;
- (id)smartToneAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)videoPosterFrameAdjustmentController;
- (id)livePhotoKeyFrameAdjustmentController;
- (void)addAdjustmentWithKey:(id)arg1;
- (void)replaceAdjustment:(id)arg1 withKey:(id)arg2;
- (id)differingAdjustmentsWithComposition:(id)arg1;
- (Class)_adjustmentControllerClassForKey:(id)arg1;
- (id)highResFusionAdjustmentController;
- (id)vignetteAdjustmentController;
- (id)_adjustmentControllerForKey:(id)arg1 creatingIfNecessary:(_Bool)arg2 expectedClass:(Class)arg3;
- (id)smartColorAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)smartBWAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)redEyeAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)livePhotoKeyFrameAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)videoPosterFrameAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)depthAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)trimAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)slomoAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)effectAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)effect3DAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)portraitAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)autoLoopAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)highResFusionAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)rawNoiseReductionAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)sharpenAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)whiteBalanceAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)noiseReductionAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)definitionAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)vignetteAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)videoReframeAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;
- (id)sourceSelectAdjustmentControllerCreatingIfNecessary:(_Bool)arg1;

@end
