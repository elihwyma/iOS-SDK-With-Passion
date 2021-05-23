/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKBasePhotosFaceView.h>

@class NSMutableArray, NSString, NTKCachedPhoto, NTKPhotosReader, UITapGestureRecognizer, UIView, _NTKPhotoIndexGenerator;

@interface NTKPhotosFaceView : NTKBasePhotosFaceView

{
    unsigned int _isContentLoaded:1;
    unsigned int _isTimetravelScrubbing:1;
    unsigned int _isAnalysisOperationInProgress:1;
    unsigned int _inPhotoTransition:1;
    unsigned int _isPreloadingNextPhotoOnSleep:1;
    NTKPhotosReader *_reader;
    _NTKPhotoIndexGenerator *_generator;
    unsigned long long _currentContent;
    unsigned long long _currentAnalysisOperationID;
    UITapGestureRecognizer *_singleTapGesture;
    UIView *_photoTransitionSnapshotView;
    UIView *_photoTransitionCornerView;
    unsigned long long _queuedTransitionCount;
    unsigned long long _preloadGeneration;
    unsigned long long _numberOfPhotos;
    CDUnknownBlockType _enqueuePreloadedPhotoCompletion;
    NSMutableArray *_preloaded;
    NSMutableArray *_toload;
    unsigned long long _deviceSizeClass;
    NTKCachedPhoto *_presentedPhoto;
}

@property (retain, nonatomic) NTKCachedPhoto *presentedPhoto;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_animationFinished:(_Bool)arg1;
- (void)_handleSingleTap:(id)arg1;
- (void)_animationStart;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_configureForEditMode:(long long)arg1;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_cleanupAfterEditing;
- (void)_finalizeForSnapshotting:(CDUnknownBlockType)arg1;
- (_Bool)_shouldAnimationContinue:(_Bool)arg1;
- (void)setNoPhotosViewVisible:(_Bool)arg1;
- (void)_clearPreloaded;
- (_Bool)_preloadNextPhoto;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_applyFrozen;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (double)_backgroundImageAlphaForEditMode:(long long)arg1;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (_Bool)_canOperationProceed:(unsigned long long)arg1;
- (void)_operationIsDone;
- (void)_updateDateAttributesAnimated:(_Bool)arg1;
- (void)_updateImageToBlur;
- (void)_updateContents:(_Bool)arg1;
- (void)_nextPhotoAnimated:(_Bool)arg1 method:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_resetTapAnimationState;
- (void)_updateDateAttributesAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dequeueToLoadIfMatchingGeneration:(unsigned long long)arg1;
- (_Bool)_enqueuePreloadedPhoto:(id)arg1 ifMatchingGeneration:(unsigned long long)arg2;
- (void)_displayCachedPhoto:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_startBackgroundRefill;
- (void)_nextPhotoReadyAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_analysisCacheKeyFor:(id)arg1;
- (id)_cachedAnalysisForKey:(id)arg1;
- (id)_createAndCachePhotoAnalysisForKey:(id)arg1 dateAlignment:(unsigned long long)arg2 image:(id)arg3;
- (id)_analysisForAlignment:(unsigned long long)arg1;
- (void)_updateReader:(_Bool)arg1;
- (void)readerDidChange:(id)arg1;

@end
