/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterFoundation/_GKStateMachine.h>

@class GKCancelSwipeToEditGestureRecognizer, GKCollectionViewCell, GKCollectionViewDataSource, NSIndexPath, NSString, UICollectionView, UIPanGestureRecognizer, _UIDynamicAnimation;

@interface GKSwipeToEditStateMachine : _GKStateMachine

{
    int _debounce;
    UICollectionView *_collectionView;
    GKCollectionViewDataSource *_gkDataSource;
    GKCancelSwipeToEditGestureRecognizer *_editModeCancelRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    GKCollectionViewCell *_editingCell;
    double _startTrackingX;
    _UIDynamicAnimation *_openAnimation;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) GKCollectionViewDataSource *gkDataSource;
@property (retain, nonatomic) GKCancelSwipeToEditGestureRecognizer *editModeCancelRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) GKCollectionViewCell *editingCell;
@property (nonatomic) double startTrackingX;
@property (retain, nonatomic) _UIDynamicAnimation *openAnimation;
@property (nonatomic, readonly) NSIndexPath *trackedIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)handlePan:(id)arg1;
- (id)initWithCollectionView:(id)arg1;
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;
- (void)handleCancelTap:(id)arg1;
- (double)xPositionForTranslation:(struct CGPoint)arg1;
- (void)shutActionPaneForEditingCellAnimated:(_Bool)arg1;
- (void)didEnterEditingState;
- (void)didExitEditingState;
- (void)didExitNothingState;
- (void)didEnterNothingState;
- (void)didEnterAnimatingShutState;
- (void)didEnterAnimatingOpenState;
- (void)didExitAnimatingOpenState;

@end
