/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUTableViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HFItemManager, HUGridLayoutOptions, HUItemTableViewScrollDestination, NSMapTable, NSMutableArray, NSMutableSet, NSString;

@protocol NACancelable;

@interface HUItemTableViewController : HUTableViewController <Swift>

{
    _Bool _wantsPreferredContentSize;
    _Bool _viewHasAppeared;
    _Bool _hasForcedLoadingVisibleCells;
    _Bool _hasFinishedInitialLoad;
    _Bool _automaticallyUpdatesViewControllerTitle;
    _Bool _visibilityUpdatesEnabled;
    _Bool _shouldUseAlternateCellColor;
    unsigned long long _appearState;
    HUItemTableViewScrollDestination *_pendingScrollDestination;
    HFItemManager *_itemManager;
    NSMutableSet *_internalItemModuleControllers;
    NSMutableArray *_foregroundUpdateFutures;
    NSMutableSet *_registeredCellClasses;
    id <NACancelable> _deferredVisibilityUpdate;
    NSMapTable *_textFieldToCellMap;
    HUGridLayoutOptions *_gridLayoutOptions;
}

@property (nonatomic) unsigned long long appearState;
@property (nonatomic) _Bool viewHasAppeared;
@property (nonatomic) _Bool hasForcedLoadingVisibleCells;
@property (retain, nonatomic) HUItemTableViewScrollDestination *pendingScrollDestination;
@property (retain, nonatomic) HFItemManager *itemManager;
@property (nonatomic, readonly) NSMutableSet *internalItemModuleControllers;
@property (nonatomic) _Bool hasFinishedInitialLoad;
@property (retain, nonatomic) NSMutableArray *foregroundUpdateFutures;
@property (nonatomic, readonly) NSMutableSet *registeredCellClasses;
@property (nonatomic) _Bool automaticallyUpdatesViewControllerTitle;
@property (nonatomic) _Bool visibilityUpdatesEnabled;
@property (retain, nonatomic) id <NACancelable> deferredVisibilityUpdate;
@property (nonatomic, readonly) NSMapTable *textFieldToCellMap;
@property (retain, nonatomic) HUGridLayoutOptions *gridLayoutOptions;
@property (nonatomic) _Bool shouldUseAlternateCellColor;
@property (nonatomic) _Bool wantsPreferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HFItem *hu_presentedItem;

+ (_Bool)adoptsDefaultGridLayoutMargins;
+ (unsigned long long)updateMode;

- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_updateTitle;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)executionEnvironmentRunningStateDidChange:(id)arg1;
- (void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateItemModules:(id)arg2;
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
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)textFieldForVisibleItem:(id)arg1;
- (id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2;
- (id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2;
- (_Bool)shouldManageTextFieldForItem:(id)arg1;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (id)hu_preloadContent;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;
- (id)childViewControllersToPreload;
- (void)recursivelyDisableItemUpdates:(_Bool)arg1 withReason:(id)arg2;
- (id)_visibleCellForItem:(id)arg1;
- (id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2;
- (id)presentingViewControllerForModuleController:(id)arg1;
- (void)reloadCellForItems:(id)arg1;
- (id)itemModuleControllers;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (id)itemTableHeaderView;
- (id)itemTableHeaderMessage;
- (id)moduleControllerForItem:(id)arg1;
- (_Bool)bypassInitialItemUpdateReload;
- (void)scrollToItem:(id)arg1 animated:(_Bool)arg2;
- (void)highlightItemAnimated:(id)arg1;
- (_Bool)alwaysUseDeltaTableViewUpdatesAfterViewHasAppeared;
- (void)_updateTableHeaderAndFooter;
- (void)_scrollToDestination:(id)arg1;
- (void)_updatePreferredContentSizeIfNecessary;
- (void)_updateLayoutMarginsForCells:(id)arg1;
- (void)_performCommonUpdateForCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (id)itemTableFooterMessage;
- (id)itemTableFooterView;
- (void)_dispatchUpdateForCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (_Bool)_shouldHideHeaderForSection:(long long)arg1;
- (_Bool)_shouldHideFooterForSection:(long long)arg1;
- (long long)_rowAnimationForOperationType:(unsigned long long)arg1 item:(id)arg2;
- (void)highlightItemAnimated:(id)arg1 duration:(double)arg2;
- (id)_itemForTextField:(id)arg1;
- (void)_transformViewControllerForRequest:(id)arg1;

@end
