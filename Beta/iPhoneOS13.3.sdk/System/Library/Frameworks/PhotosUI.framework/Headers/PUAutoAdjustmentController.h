/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, PICompositionController;

@protocol NUImageProperties;

@interface PUAutoAdjustmentController : NSObject

{
    NSArray *_cachedRedEyeCorrections;
    NSDictionary *_cachedWhiteBalanceSettings;
    double _cachedSmartToneLevel;
    double _cachedSmartColorLevel;
    _Bool _cachedValuesAreValid;
    PICompositionController *_stashedPreviousManualComposition;
    _Bool _busy;
    id <NUImageProperties> _imageProperties;
}

@property (nonatomic, getter=isBusy, setter=_setBusy:) _Bool busy;
@property (retain, nonatomic) id <NUImageProperties> imageProperties;

- (void)enableAutoEnhanceOnCompositionController:(id)arg1 valuesCalculator:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)calculateStatisticsForCompositionController:(id)arg1 valuesCalculator:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)ensureCacheUpToDateForValuesCalculator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)disableAutoEnhanceOnCompositionController:(id)arg1;
- (void)invalidateCachedAdjustments;
- (_Bool)isAutoEnhanceEnabledForCompositionController:(id)arg1;
- (void)_applyAutoValuesOnCompositionController:(id)arg1 whiteBalanceSettings:(id)arg2 redEyeCorrections:(id)arg3 smartToneLevel:(double)arg4 smartColorLevel:(double)arg5 valuesCalculator:(id)arg6;
- (void)_revertAutoValuesOnCompositionController:(id)arg1;

@end
