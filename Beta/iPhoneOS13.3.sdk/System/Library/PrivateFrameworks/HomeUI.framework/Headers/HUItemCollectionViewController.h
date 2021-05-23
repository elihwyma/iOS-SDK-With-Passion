/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUCollectionViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HFItemManager, NSHashTable, NSMutableArray, NSMutableSet, NSString;

@protocol NACancelable;

@interface HUItemCollectionViewController : HUCollectionViewController <Swift>

{
    _Bool _wantsPreferredContentSize;
    _Bool _hasFinishedInitialLoad;
    _Bool _viewVisible;
    _Bool _visibilityUpdatesEnabled;
    HFItemManager *_itemManager;
    NSMutableSet *_registeredCellClasses;
    NSMutableArray *_foregroundUpdateFutures;
    NSMutableArray *_viewVisibleFutures;
    id <NACancelable> _deferredVisibilityUpdate;
    NSHashTable *_childViewControllersAtViewWillAppearTime;
    NSHashTable *_childViewControllersAtViewWillDisappearTime;
}

@property (retain, nonatomic) HFItemManager *itemManager;
@property (nonatomic) _Bool hasFinishedInitialLoad;
@property (nonatomic, readonly) NSMutableSet *registeredCellClasses;
@property (retain, nonatomic) NSMutableArray *foregroundUpdateFutures;
@property (nonatomic, getter=isViewVisible) _Bool viewVisible;
@property (nonatomic, readonly) NSMutableArray *viewVisibleFutures;
@property (nonatomic) _Bool visibilityUpdatesEnabled;
@property (retain, nonatomic) id <NACancelable> deferredVisibilityUpdate;
@property (retain, nonatomic) NSHashTable *childViewControllersAtViewWillAppearTime;
@property (retain, nonatomic) NSHashTable *childViewControllersAtViewWillDisappearTime;
@property (nonatomic) _Bool wantsPreferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HFItem *hu_presentedItem;

+ (unsigned long long)updateMode;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)_updateTitle;
- (void)executionEnvironmentRunningStateDidChange:(id)arg1;
- (void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didChangeOverallLoadingState:(unsigned long long)arg2;
- (id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3;
- (void)itemManagerDidFinishUpdate:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)itemManager:(id)arg1 didRemoveSections:(id)arg2;
- (void)itemManager:(id)arg1 didInsertSections:(id)arg2;
- (void)itemManager:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)hu_preloadContent;
- (id)childViewControllersToPreload;
- (void)recursivelyDisableItemUpdates:(_Bool)arg1 withReason:(id)arg2;
- (_Bool)automaticallyUpdatesViewControllerTitle;
- (_Bool)isLayoutDependentOnItemState;
- (struct CGSize)preferredContentSizeForCollectionViewContentSize:(struct CGSize)arg1;
- (void)performBatchCollectionViewUpdatesForUpdateRequest:(id)arg1 reloadOnly:(_Bool)arg2;

@end
