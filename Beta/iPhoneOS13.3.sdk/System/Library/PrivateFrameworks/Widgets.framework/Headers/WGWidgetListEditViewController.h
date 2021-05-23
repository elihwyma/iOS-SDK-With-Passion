/*
 Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

#import <UIViewController.h>

@class NSArray, NSMutableArray, NSString, UINavigationController, UITableViewController;

@protocol WGWidgetListEditViewControllerDataSource, WGWidgetListEditViewControllerDelegate;

@interface WGWidgetListEditViewController : UIViewController

{
    UINavigationController *_navigationController;
    UITableViewController *_tableViewController;
    NSMutableArray *_enabledTodayItemIDs;
    NSMutableArray *_favoriteItemIDs;
    NSMutableArray *_disabledItemIDs;
    NSArray *_groupIDs;
    double _contentMinY;
    NSArray *_originalFavoriteItemIDs;
    _Bool _dismissingDueToInterfaceAction;
    _Bool _showsPinSection;
    _Bool _showsFavorites;
    _Bool _widgetsPinnedOriginally;
    _Bool _widgetsPinned;
    id <WGWidgetListEditViewControllerDataSource> _dataSource;
    id <WGWidgetListEditViewControllerDelegate> _delegate;
    id _statusBarColorAssertion;
}

@property (nonatomic, getter=_isDismissingDueToInterfaceAction, setter=_setDismissingDueToInterfaceAction:) _Bool dismissingDueToInterfaceAction;
@property (retain, nonatomic, getter=_statusBarColorAssertion, setter=_setStatusBarColorAssertion:) id statusBarColorAssertion;
@property (nonatomic) _Bool showsPinSection;
@property (nonatomic) _Bool showsFavorites;
@property (nonatomic, getter=wereWidgetsPinnedOriginally) _Bool widgetsPinnedOriginally;
@property (nonatomic, getter=areWidgetsPinned) _Bool widgetsPinned;
@property (weak, nonatomic) id <WGWidgetListEditViewControllerDataSource> dataSource;
@property (weak, nonatomic) id <WGWidgetListEditViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)_loadItems;
- (long long)_layoutMode;
- (void)_cancelWidgetListEditView;
- (void)_dismissWidgetListEditView;
- (void)_acknowledgeItemsSavingItemState:(_Bool)arg1;
- (_Bool)showsFavoritesSection;
- (long long)todaySection;
- (long long)favoritesSection;
- (long long)disabledWidgetsSection;
- (long long)pinSection;
- (void)pinSwitchChanaged:(id)arg1;
- (id)_itemIdentifierForIndexPath:(id)arg1;
- (id)_indexPathForItemWithIdentifier:(id)arg1;
- (_Bool)_isNewItem:(id)arg1;
- (unsigned long long)_indexForInsertingItemWithIdentifier:(id)arg1 intoArray:(id)arg2;
- (long long)_indexOfFirstEnabledWidgetInSection:(unsigned long long)arg1;
- (long long)_indexOfLastEnabledWidgetInSection:(unsigned long long)arg1;
- (id)_itemIdentifiersInSection:(unsigned long long)arg1;
- (void)_enableItemAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)_disableItemAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (id)_widgetListEditViewTableHeaderView;
- (void)_saveItemState;
- (void)_saveItemArrangement;
- (void)_acknowledgeItemsAndResetNewWidgetsCount;
- (void)_dismissDueToInterfaceActionAndAcknowledgeItemsSavingItemState:(_Bool)arg1;
- (id)_enabledItemIdentifiersForGroupID:(id)arg1;
- (long long)_compareItemWithIdentifier:(id)arg1 andItemWithIdentifierConsideringIsNew:(id)arg2;
- (unsigned long long)_sectionIndexForGroupKey:(id)arg1;
- (id)_groupKeyForSectionAtIndex:(unsigned long long)arg1;

@end
