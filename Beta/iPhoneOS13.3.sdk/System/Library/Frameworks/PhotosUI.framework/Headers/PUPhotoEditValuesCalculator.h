/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXObservable.h>

@class NSObject, PICompositionController, PLEditSource, PUPhotoEditImageValues;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PUPhotoEditValuesCalculator : PXObservable

{
    PUPhotoEditImageValues *_currentImageValues;
    PUPhotoEditImageValues *_initialImageValues;
    PICompositionController *_compositionControllerForCurrentValues;
    NSObject<OS_dispatch_queue> *_computationQueue;
    NSObject<OS_dispatch_group> *_computingValuesGroup;
    long long _currentSourceSelection;
    PLEditSource *_editSource;
    PLEditSource *_overcaptureEditSource;
    PICompositionController *_compositionController;
    CDStruct_1b6d18a9 _videoFrameTime;
}

@property (retain, nonatomic) PLEditSource *editSource;
@property (retain, nonatomic) PLEditSource *overcaptureEditSource;
@property (retain, nonatomic) PICompositionController *compositionController;
@property (nonatomic, readonly) _Bool hasImageValues;
@property (nonatomic) CDStruct_1b6d18a9 videoFrameTime;

+ (_Bool)shouldRunGeometricAutoCalculatorForSource:(id)arg1;

- (id)init;
- (void)invalidate;
- (id)mutableChangeObject;
- (double)smartToneAutoSuggestion;
- (double)smartColorAutoSuggestion;
- (id)currentEditSource;
- (id)portraitValuesWithAccuracy:(long long)arg1;
- (id)apertureValuesWithAccuracy:(long long)arg1;
- (id)smartToneStatisticsWithAccuracy:(long long)arg1;
- (id)primarySmartToneStatisticsWithAccuracy:(long long)arg1;
- (id)overcaptureSmartToneStatisticsWithAccuracy:(long long)arg1;
- (void)updateAdjustmentSmartToneStatistics:(id)arg1 withAccuracy:(long long)arg2;
- (id)smartColorStatisticsWithAccuracy:(long long)arg1;
- (id)autoCropValuesWithAccuracy:(long long)arg1;
- (id)autoPerspectiveValuesWithAccuracy:(long long)arg1;
- (_Bool)_imageCurrentValuesCacheIsValid;
- (void)precomputeImageValues;
- (void)precomputeImageValuesWithCompletion:(CDUnknownBlockType)arg1;
- (void)precomputeImageValuesWithOptionalCompletion:(CDUnknownBlockType)arg1;
- (void)computeAutoEnhanceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_ensureCurrentImageValuesAreComputed;
- (void)_ensureInitialImageValuesAreComputed;

@end
