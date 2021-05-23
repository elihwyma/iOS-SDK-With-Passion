/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXAssetCollectionReference, PXCuratedLibraryViewModel, PXIndexPathSet;

@interface PXCuratedLibraryAssetCollectionSkimmingModel : NSObject

{
    PXCuratedLibraryViewModel *_viewModel;
    long long _zoomLevel;
    long long _skimmingZoomLevel;
    id _dataSourcePauseToken;
    _Bool _hintsVisible;
    _Bool _isPlayingSlideshow;
    _Bool _isInteractionInProgress;
    PXAssetCollectionReference *_containingAssetCollectionReference;
    PXIndexPathSet *_indexPathSetForSkimming;
    struct PXSimpleIndexPath _initialIndexPath;
    struct PXSimpleIndexPath _skimmedIndexPath;
}

@property (nonatomic, readonly) PXAssetCollectionReference *containingAssetCollectionReference;
@property (nonatomic, readonly) _Bool hintsVisible;
@property (nonatomic, readonly) _Bool isPlayingSlideshow;
@property (nonatomic, readonly) _Bool isInteractionInProgress;
@property (nonatomic, readonly) _Bool canStartSkimming;
@property (copy, nonatomic, readonly) PXIndexPathSet *indexPathSetForSkimming;
@property (nonatomic, readonly) struct PXSimpleIndexPath initialIndexPath;
@property (nonatomic) struct PXSimpleIndexPath skimmedIndexPath;
@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;

- (id)initWithViewModel:(id)arg1;
- (void)tearDownAfterSkimmingShowHints:(_Bool)arg1 persistState:(_Bool)arg2;
- (void)prepareForSkimmingInAssetCollectionReference:(id)arg1;
- (void)transitionToSkimming;
- (void)prepareForSlideshowForAssetCollectionReference:(id)arg1;
- (void)transitionToSlideshow;
- (id)validatedAssetCollectionReference:(id)arg1;
- (void)persistSkimmingState;
- (void)prepareForShowingHintsForAssetCollectionReference:(id)arg1;
- (void)_prepareIndexesForAssetCollectionReference:(id)arg1 willStartSkimming:(_Bool)arg2 willStartSlideshow:(_Bool)arg3;
- (void)_updateViewModel;

@end
