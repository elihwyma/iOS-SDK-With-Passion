/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSMutableIndexSet, NSOperationQueue, NSString, SKUIClientContext, SKUIItemArtworkContext, SKUIItemCollectionController, SKUIItemList, SKUIResourceLoader, SKUIStyledImageDataConsumer, SKUIUber, SSVLoadURLOperation;

@protocol SKUIItemListTableDelegate;

@interface SKUIItemListTableViewController : UITableViewController

{
    _Bool _delegateWantsCanRemove;
    _Bool _delegateWantsDidRemove;
    _Bool _delegateWantsWillDisplay;
    _Bool _didLoadMore;
    NSMutableIndexSet *_hiddenIconIndexSet;
    SKUIItemArtworkContext *_artworkContext;
    SKUIItemCollectionController *_itemCollectionController;
    SSVLoadURLOperation *_loadMoreOperation;
    _Bool _requestedLoadMore;
    _Bool _loadsMoreItems;
    _Bool _suspended;
    id <SKUIItemListTableDelegate> _delegate;
    SKUIClientContext *_clientContext;
    SKUIItemList *_itemList;
    NSOperationQueue *_operationQueue;
    double _rowHeight;
    long long _selectionStyle;
    long long _separatorStyle;
    SKUIUber *_uber;
    struct CGSize _imageBoundingSize;
}

@property (weak, nonatomic) id <SKUIItemListTableDelegate> delegate;
@property (retain, nonatomic) SKUIItemArtworkContext *artworkContext;
@property (retain, nonatomic) SKUIResourceLoader *artworkLoader;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer;
@property (nonatomic) struct CGSize imageBoundingSize;
@property (retain, nonatomic) SKUIItemList *itemList;
@property (nonatomic) _Bool loadsMoreItems;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) double rowHeight;
@property (nonatomic) long long selectionStyle;
@property (nonatomic) long long separatorStyle;
@property (nonatomic, getter=isSuspended) _Bool suspended;
@property (retain, nonatomic) SKUIUber *uber;
@property (nonatomic, readonly) NSString *visibleMetricsImpressions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)addItems:(id)arg1;
- (void)itemTableView:(id)arg1 didConfirmItemOfferForTableViewCell:(id)arg2;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
- (id)_itemCollectionController;
- (void)loadNextPageOfArtworkWithReason:(long long)arg1;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2;
- (struct _NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint)arg2;
- (struct _NSRange)visibleItemRangeForItemCollectionController:(id)arg1;
- (id)popIconImageViewForItemAtIndex:(long long)arg1;
- (void)setItemCellClass:(Class)arg1;
- (void)unhideIcons;
- (void)_loadRemainingItemsWithPriority:(long long)arg1;
- (void)_finishLoadMoreOperationWithItems:(id)arg1 error:(id)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1;
- (void)setItemArtworkContext:(id)arg1;
- (void)itemTableView:(id)arg1 didRemoveCell:(id)arg2;

@end
