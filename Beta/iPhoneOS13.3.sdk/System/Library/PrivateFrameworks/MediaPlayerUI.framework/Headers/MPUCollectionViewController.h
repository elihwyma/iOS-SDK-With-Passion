/*
 Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

#import <MPUFoundation/MPUDataSourceViewController.h>

@class NSString, UICollectionView;

@interface MPUCollectionViewController : MPUDataSourceViewController

{
    UICollectionView *_collectionView;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)invalidationContextClass;

- (void)dealloc;
- (id)initWithDataSource:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)contentScrollView;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)_updateVisibleCellsForDownloads:(id)arg1 updateAllCells:(_Bool)arg2;
- (id)reuseIdentifierForCellAtIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withEntity:(id)arg3 invalidationContext:(id)arg4;
- (id)_createCollectionView;
- (id)_createCollectionViewLayout;
- (_Bool)collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 editingStyleForItemAtIndexPath:(id)arg2;

@end
