/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBScaleIconZoomAnimator.h>

@class NSString, SBFFluidBehaviorSettings, SBFloatyFolderView, SBFolderController, SBFolderIcon, SBHFolderZoomSettings, SBIconView, SBSearchGesture, _SBInnerFolderIconZoomAnimator;

@interface SBFolderIconZoomAnimator : SBScaleIconZoomAnimator

{
    SBFolderController *_innerFolderController;
    SBFloatyFolderView *_innerFolderView;
    _SBInnerFolderIconZoomAnimator *_innerZoomAnimator;
    _Bool _isAnimatingInFloatingDock;
    SBFFluidBehaviorSettings *_dockAnimationSettings;
    SBSearchGesture *_searchGesture;
}

@property (retain, nonatomic) SBSearchGesture *searchGesture;
@property (nonatomic) _Bool isAnimatingInFloatingDock;
@property (retain, nonatomic) SBHFolderZoomSettings *settings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *dockAnimationSettings;
@property (nonatomic, readonly) SBFolderIcon *targetIcon;
@property (nonatomic, readonly) SBIconView *targetIconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_prepareAnimation;
- (struct CGRect)_zoomedFrame;
- (void)_setAnimationFraction:(double)arg1;
- (void)_cleanupAnimation;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (void)_setupMatchMoveWithDock;
- (void)_setupCounterDockMatchMoveAnimationWithOffset:(double)arg1 layer:(id)arg2 additive:(_Bool)arg3;
- (void)_setupMatchMoveWithDockWithTargetIconCenter:(struct CGPoint)arg1 targetIconAnchor:(struct CGPoint)arg2;
- (id)defaultTargetIconContainerView;
- (void)_setupMatchMoveAnimation;
- (_Bool)shouldMatchMoveWithDock;
- (void)_updateDockMatchMoveWithFraction:(double)arg1;
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (void)searchGesture:(id)arg1 startedShowing:(_Bool)arg2;
- (id)initWithAnimationContainer:(id)arg1 innerFolderController:(id)arg2 folderIcon:(id)arg3;
- (id)_referenceFolderIconView;
- (_Bool)_forceSquareZoomDimension;

@end
