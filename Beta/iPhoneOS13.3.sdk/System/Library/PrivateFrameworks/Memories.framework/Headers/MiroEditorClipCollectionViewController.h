/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UICollectionViewController.h>

@class NSIndexPath, NSString;

@protocol MiroEditorClipCollectionDataSource, MiroEditorClipCollectionDelegate;

@interface MiroEditorClipCollectionViewController : UICollectionViewController

{
    _Bool _isInViewWillTransitionToSize;
    id <MiroEditorClipCollectionDataSource> _dataSource;
    id <MiroEditorClipCollectionDelegate> _delegate;
    NSIndexPath *_initialIndexPath;
}

@property (nonatomic) _Bool isInViewWillTransitionToSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <MiroEditorClipCollectionDataSource> dataSource;
@property (weak, nonatomic) id <MiroEditorClipCollectionDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *initialIndexPath;

- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 didSnapToItemAtIndexPath:(id)arg3;
- (void)snapToIndexPath:(id)arg1 animated:(_Bool)arg2;
- (id)cellForClipProvider:(id)arg1;
- (void)_snapToIndexPath:(id)arg1 animated:(_Bool)arg2;

@end
