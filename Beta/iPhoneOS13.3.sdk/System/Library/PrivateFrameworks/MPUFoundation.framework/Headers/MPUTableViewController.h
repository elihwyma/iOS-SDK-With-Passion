/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <MPUFoundation/MPUDataSourceViewController.h>

@class NSMutableArray, NSString, UITableView;

@interface MPUTableViewController : MPUDataSourceViewController

{
    _Bool _shouldUpdateVisibleCellsWhenVisible;
    _Bool _hasAppearedOnce;
    UITableView *_tableView;
    long long _numberOfTopActionRows;
    NSMutableArray *_visibleTopActionRows;
    long long _numberOfBottomActionRows;
    NSMutableArray *_visibleBottomActionRows;
    _Bool _shouldDeselectImmediately;
    Class _cellConfigurationClass;
}

@property (nonatomic, readonly) Class cellConfigurationClass;
@property (nonatomic) _Bool shouldDeselectImmediately;
@property (nonatomic, readonly) _Bool shouldScrollToFirstDataSourceSectionOnInitialAppearance;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) struct CGPoint contentOffsetRevealingFirstDataSourceSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)invalidationContextClass;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (_Bool)usesCellConfigurations;
+ (_Bool)wantsAutolayoutSizedTableViewRows;
+ (id)allActionCellConfigurationClasses;
+ (id)actionCellConfigurationClasses;
+ (id)actionCellConfigurationClassesForLocation:(unsigned long long)arg1;
+ (Class)_tableViewClass;

- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initWithDataSource:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadData;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (id)_createTableView;
- (long long)_totalNumberOfSections;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (void)reloadActionRowsAnimated:(_Bool)arg1;
- (void)_updateVisibleCellsForDownloads:(id)arg1 updateAllCells:(_Bool)arg2;
- (void)_reloadActionRowsAnimated:(_Bool)arg1 skipTableViewUpdates:(_Bool)arg2;
- (_Bool)isTableViewLoaded;
- (Class)cellConfigurationForIndexPath:(id)arg1;
- (void)_configureCellsAfterScroll;
- (long long)dataSourceIndexForIndexPath:(id)arg1;
- (Class)actionCellConfigurationClassForIndexPath:(id)arg1;
- (long long)numberOfTopActionRowsInTableView:(id)arg1;
- (long long)numberOfBottomActionRowsInTableView:(id)arg1;
- (id)reuseIdentifierForCellAtIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withEntity:(id)arg3 invalidationContext:(id)arg4;
- (long long)dataSourceSectionForSection:(long long)arg1;
- (long long)indexOfFirstDataSourceSection;
- (void)_loadCellConfiguration;
- (_Bool)shouldShowActionCellConfiguration:(Class)arg1;
- (long long)numberOfActionRowsInTableView:(id)arg1;
- (id)indexPathForDataSourceIndex:(long long)arg1;
- (long long)sectionForDataSourceSection:(long long)arg1;
- (void)_recreateTableView;
- (void)_setCellConfigurationClass:(Class)arg1;

@end
