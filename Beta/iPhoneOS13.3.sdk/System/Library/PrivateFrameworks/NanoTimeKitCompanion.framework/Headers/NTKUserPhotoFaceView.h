/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKBasePhotoFaceView.h>

@interface NTKUserPhotoFaceView : NTKBasePhotoFaceView

{
    _Bool _isContentLoaded;
    unsigned long long _currentAnalysisOperationID;
    _Bool _isAnalysisOperationInProgress;
    _Bool _showingGrid;
    _Bool _irisIndicatorActive;
}

@property (nonatomic, getter=isShowingGrid) _Bool showingGrid;
@property (nonatomic, getter=isIrisIndicatorActive) _Bool irisIndicatorActive;

+ (id)_analysisQ;

- (void)_updateContents;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_configureForEditMode:(long long)arg1;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_cleanupAfterEditing;
- (_Bool)_preloadNextPhoto;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (double)_backgroundImageAlphaForEditMode:(long long)arg1;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (_Bool)_canOperationProceed:(unsigned long long)arg1;
- (void)_operationIsDone;
- (void)_updateDateAttributesAnimated:(_Bool)arg1;
- (void)_updateImageToBlur;
- (void)_updateNoPhotosState;
- (void)_setContentBreathingScale:(double)arg1;
- (id)customEditingViewController;

@end
