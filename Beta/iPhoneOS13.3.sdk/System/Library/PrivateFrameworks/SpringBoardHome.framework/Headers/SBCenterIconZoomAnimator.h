/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBIconZoomAnimator.h>

@class NSString, SBFolderController, SBHCenterZoomSettings, UIView;

@protocol SBDockOffscreenFractionModifying;

@interface SBCenterIconZoomAnimator : SBIconZoomAnimator

{
    UIView *_zoomView;
    UIView *_folderView;
    double _iconZoomedZ;
    UIView *_extraViewsContainer;
    double _centerRow;
    double _centerCol;
    struct CGPoint _cameraPosition;
    _Bool _animatingIcons;
    id <SBDockOffscreenFractionModifying> _dockOffscreenFractionModifier;
}

@property (retain, nonatomic) id <SBDockOffscreenFractionModifying> dockOffscreenFractionModifier;
@property (nonatomic, readonly) UIView *zoomView;
@property (nonatomic, readonly) struct CGPoint cameraPosition;
@property (nonatomic, readonly) double centerRow;
@property (nonatomic, readonly) double centerCol;
@property (nonatomic, readonly) _Bool animatingIcons;
@property (nonatomic, readonly) SBFolderController *folderController;
@property (retain, nonatomic) SBHCenterZoomSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_cleanupAnimation;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didMoveIcon:(id)arg2;
- (void)_calculateCentersAndCameraPosition;
- (void)_positionView:(id)arg1 forIcon:(id)arg2;
- (void)_setAnimationFraction:(double)arg1 withCenter:(struct CGPoint)arg2;
- (double)_zPositionForView:(id)arg1 center:(struct CGPoint)arg2 andFraction:(double)arg3;
- (void)enumerateExtraViewsWithHandler:(CDUnknownBlockType)arg1;
- (void)_updateDockForFraction:(double)arg1;
- (void)_cleanupAnimationIncludingDock:(_Bool)arg1;
- (double)_iconZoomDelay;
- (id)_animationFactoryForIcon:(id)arg1;
- (id)_animationFactoryForDock;
- (id)_animationFactoryForFolderView;
- (void)_calculateCenters;
- (struct CGPoint)iconListView:(id)arg1 originForIconCoordinate:(struct SBIconCoordinate)arg2 proposedOrigin:(struct CGPoint)arg3;
- (void)iconListViewIsNotDisplayingAnyIcons:(id)arg1;
- (id)initWithFolderController:(id)arg1;
- (void)setFraction:(double)arg1 withCenter:(struct CGPoint)arg2;

@end
