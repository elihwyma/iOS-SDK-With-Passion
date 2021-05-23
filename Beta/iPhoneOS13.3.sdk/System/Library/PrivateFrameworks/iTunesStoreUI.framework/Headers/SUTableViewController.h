/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class NSIndexPath, NSString, SUTableDataSource, SUTableView, UITableView;

@interface SUTableViewController : SUViewController

{
    SUTableDataSource *_dataSource;
    long long _disappearOrientation;
    NSIndexPath *_firstTapIndexPath;
    long long _placeholderRowCount;
    _Bool _preferUserInteractionWhileScrolling;
    SUTableView *_tableView;
    long long _tableViewStyle;
}

@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (retain, nonatomic) SUTableDataSource *dataSource;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic) long long tableViewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reloadData;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didReceiveMemoryWarning;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(_Bool)arg3;
- (_Bool)deleteRowAtIndexPath:(id)arg1;
- (id)copyScriptProperties;
- (void)setScriptProperties:(id)arg1;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (void)reloadForChangedRowCount:(long long)arg1;
- (void)_reloadPlaceholderCells;
- (void)_resetTableView;
- (void)_doubleTapTimeout;
- (_Bool)indexPathIsPlaceholder:(id)arg1;
- (int)clippedCornersForIndexPath:(id)arg1;
- (_Bool)canSelectRowAtIndexPath:(id)arg1;
- (void)_deliverTapCount:(long long)arg1 forIndexPath:(id)arg2;
- (_Bool)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;
- (id)newTableView;

@end
