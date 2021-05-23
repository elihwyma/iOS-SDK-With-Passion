/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath, NSTimer;

@protocol PXPeopleDragAndDropCollectionViewDelegateLayout;

@interface PXPeopleDragAndDropCollectionViewLayout : UICollectionViewFlowLayout

{
    _Bool _performActualRearrange;
    NSTimer *_dragPauseTimer;
    NSIndexPath *_dragIndexPathForMerge;
    NSIndexPath *_targetIndexPathForMerge;
    struct CGPoint _lastDragPoint;
    struct CGPoint _currentPosition;
}

@property (retain, nonatomic) NSTimer *dragPauseTimer;
@property (nonatomic) struct CGPoint lastDragPoint;
@property (nonatomic) struct CGPoint currentPosition;
@property (nonatomic) _Bool performActualRearrange;
@property (retain, nonatomic) NSIndexPath *dragIndexPathForMerge;
@property (retain, nonatomic) NSIndexPath *targetIndexPathForMerge;
@property (nonatomic, readonly) id <PXPeopleDragAndDropCollectionViewDelegateLayout> mergeDelegate;

- (id)init;
- (void)dealloc;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(struct CGPoint)arg2;
- (_Bool)performMergeIfPossible;
- (void)_potentialMergeWithDragIndexPath:(id)arg1 ontoIndexPath:(id)arg2 withPosition:(struct CGPoint)arg3;
- (void)_updateDragPause;
- (void)_cancelDragPauseTimer;

@end
