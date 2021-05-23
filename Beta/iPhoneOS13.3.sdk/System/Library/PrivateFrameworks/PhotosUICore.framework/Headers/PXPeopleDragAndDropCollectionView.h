/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionView.h>

@class NSIndexPath, PXPeopleCollectionViewCell, UIVisualEffect;

@protocol PXPeopleDragAndDropCollectionViewDelegate;

@interface PXPeopleDragAndDropCollectionView : UICollectionView

{
    _Bool _interactiveMode;
    _Bool _validDrop;
    id <PXPeopleDragAndDropCollectionViewDelegate> _dragDropDelegate;
    PXPeopleCollectionViewCell *_dragSourceCell;
    NSIndexPath *_dragSourceIndexPath;
    UIVisualEffect *_blurEffect;
}

@property (nonatomic) _Bool validDrop;
@property (retain, nonatomic) UIVisualEffect *blurEffect;
@property (weak, nonatomic) id <PXPeopleDragAndDropCollectionViewDelegate> dragDropDelegate;
@property (nonatomic) _Bool interactiveMode;
@property (retain, nonatomic) PXPeopleCollectionViewCell *dragSourceCell;
@property (retain, nonatomic) NSIndexPath *dragSourceIndexPath;

- (void)layoutSubviews;
- (void)reloadData;
- (void)cancelInteractiveMovement;
- (void)endInteractiveMovement;
- (void)resetTransformForSourceIndex:(id)arg1;
- (id)sortedIndexPathsForSelectedItems;
- (_Bool)beginInteractiveMovementAtLocation:(struct CGPoint)arg1 forItemAtIndexPath:(id)arg2;
- (double)_highestVisibleCellZOrder;
- (id)_footerAttributes;
- (long long)sectionAtPoint:(struct CGPoint)arg1;

@end
