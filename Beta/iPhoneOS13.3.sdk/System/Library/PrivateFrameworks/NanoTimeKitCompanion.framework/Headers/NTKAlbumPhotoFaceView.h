/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKBasePhotoFaceView.h>

@class NSArray, NSMutableArray, NSString, NTKAlbumAtom, NTKDelayedBlock, NTKSafeLocketReader, UITapGestureRecognizer, UIView;

@interface NTKAlbumPhotoFaceView : NTKBasePhotoFaceView

{
    unsigned int _isContentLoaded:1;
    unsigned int _isPreloadingNextPhotoOnSleep:1;
    unsigned int _isTimetravelScrubbing:1;
    unsigned int _inPhotoTransition:1;
    NTKSafeLocketReader *_reader;
    unsigned long long _nextPhotoGeneration;
    NTKDelayedBlock *_delayedIrisBlock;
    NSArray *_switcherSnapshotViews;
    NTKAlbumAtom *_canonicalPhotoAtom;
    unsigned long long _queuedTransitionCount;
    UITapGestureRecognizer *_singleTapGesture;
    NSMutableArray *_preloaded;
    long long _prevDataMode;
    NTKAlbumAtom *_currentAtom;
    UIView *_photoTransitionSnapshotView;
    UIView *_photoTransitionCornerView;
    unsigned long long _preloadGeneration;
    unsigned long long _numberOfPhotos;
}

@property (retain, nonatomic) NTKAlbumAtom *currentAtom;
@property (retain, nonatomic) UIView *photoTransitionSnapshotView;
@property (retain, nonatomic) UIView *photoTransitionCornerView;
@property (nonatomic) unsigned long long preloadGeneration;
@property (nonatomic) unsigned long long numberOfPhotos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (void)_animationFinished:(_Bool)arg1;
- (void)_handleSingleTap:(id)arg1;
- (unsigned long long)_nextIndex:(_Bool)arg1;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (void)_applyDataMode;
- (void)_handleWristRaiseScreenWake;
- (void)_handleOrdinaryScreenWake;
- (void)_applyShowsCanonicalContent;
- (void)_createSwitcherSnapshotViewsIfNeeded;
- (void)_layoutPosterAndSnapshotsForSwitcher:(_Bool)arg1;
- (void)_destroySwitcherSnapshotViews;
- (id)_analyzeAtom:(id)arg1;
- (_Bool)_shouldAnimationContinue:(_Bool)arg1;
- (void)_nextPhotoAnimated:(_Bool)arg1 random:(_Bool)arg2 loadSynchronous:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setAtom:(id)arg1 animated:(_Bool)arg2;
- (void)_hideEmptyAlbum;
- (void)_loadIris;
- (id)_loadAtomAtIndex:(unsigned long long)arg1;
- (_Bool)_enqueueAtom:(id)arg1 ifMatchingGeneration:(unsigned long long)arg2;
- (void)_clearPreloaded;
- (void)_displayAtom:(id)arg1 animated:(_Bool)arg2 withAnalysis:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_startBackgroundRefillFromIndex:(unsigned long long)arg1;
- (void)_locketDidChange;
- (void)_nextPhotoAnimated:(_Bool)arg1 random:(_Bool)arg2;
- (_Bool)_preloadNextPhoto;
- (void)_showEmptyAlbum;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_applyFrozen;
- (void)_locketDidChangeAsync:(id)arg1;
- (void)_hideSwitcherSnapshotViews;
- (void)firstUnlockDidOccur;
- (void)_updateForResourceDirectoryChange:(id)arg1;

@end
