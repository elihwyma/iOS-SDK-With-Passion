/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSMutableIndexSet, NSOperationQueue, NSString, SKUIClientContext, SKUIItemArtworkContext, SKUIItemCollectionController, SKUIStyledImageDataConsumer, SKUIUber, UICollectionView, UIImage;

@protocol SKUIItemGridDelegate;

@interface SKUIItemGridViewController : UIViewController <Swift>

{
    UICollectionView *_collectionView;
    NSMutableIndexSet *_hiddenIconIndexSet;
    SKUIItemCollectionController *_itemCollectionController;
    UIImage *_placeholderImage;
    NSMutableIndexSet *_selectedItemIndexSet;
    NSMutableArray *_items;
    double _rowHeight;
    SKUIClientContext *_clientContext;
    id <SKUIItemGridDelegate> _delegate;
    NSOperationQueue *_operationQueue;
    SKUIUber *_uber;
    struct CGSize _imageBoundingSize;
}

@property (nonatomic, readonly) double rowHeight;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic) struct CGPoint contentOffset;
@property (weak, nonatomic) id <SKUIItemGridDelegate> delegate;
@property (retain, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer;
@property (retain, nonatomic) SKUIItemArtworkContext *artworkContext;
@property (nonatomic) struct CGSize imageBoundingSize;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) SKUIUber *uber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)_collectionViewLayout;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)_collectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)removeItemsAtIndexes:(id)arg1;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (void)_reloadLayout;
- (id)_itemCollectionController;
- (void)loadNextPageOfArtworkWithReason:(long long)arg1;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2;
- (struct _NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint)arg2;
- (struct _NSRange)visibleItemRangeForItemCollectionController:(id)arg1;
- (id)initWithRowHeight:(double)arg1;
- (id)popIconImageViewForItemAtIndex:(long long)arg1;
- (void)setItemCellClass:(Class)arg1;
- (void)unhideIcons;
- (void)itemCollectionView:(id)arg1 didPerformEditActionForCell:(id)arg2;

@end
