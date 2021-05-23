/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UICollectionViewController.h>

@class NSIndexPath, NSString;

@protocol MiroEditorClipCollectionDataSource, MiroEditorClipCollectionDelegate;

@interface MiroTimelineClipCollectionViewController : UICollectionViewController

{
    _Bool _highlightCenterThumbnail;
    id <MiroEditorClipCollectionDataSource> _dataSource;
    id <MiroEditorClipCollectionDelegate> _delegate;
    NSIndexPath *_initialIndexPath;
    NSIndexPath *_collectionViewDraggingIndexPath;
}

@property (retain, nonatomic) NSIndexPath *collectionViewDraggingIndexPath;
@property (nonatomic) _Bool highlightCenterThumbnail;
@property (nonatomic, readonly) struct UIEdgeInsets collectionViewContentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <MiroEditorClipCollectionDataSource> dataSource;
@property (weak, nonatomic) id <MiroEditorClipCollectionDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *initialIndexPath;

- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 didSnapToItemAtIndexPath:(id)arg3;
- (void)miroCollectionView:(id)arg1 willBeginInteractiveMovementForItemAtIndexPath:(id)arg2;
- (void)miroCollectionViewDidEndInteractiveMovement:(id)arg1;
- (void)miroCollectionViewDidCancelInteractiveMovement:(id)arg1;
- (void)snapToIndexPath:(id)arg1 animated:(_Bool)arg2;
- (id)cellForClipProvider:(id)arg1;
- (void)_snapToIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)_updateHighlightForVisibleCellsAnimated:(_Bool)arg1;
- (struct CGSize)_cellSizeForClipAtIndex:(long long)arg1;
- (void)_updateHighlightForCell:(id)arg1 atIndexPath:(id)arg2;
- (double)_proximityToCenterForCellAtIndexPath:(id)arg1;

@end
