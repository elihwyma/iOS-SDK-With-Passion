/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSMapTable, NSString, PUSidebarDataSource, PUSidebarDataSourceController, PUTabbedLibraryViewController, UITabBarItem;

@interface PUSidebarViewController : UITableViewController

{
    PUSidebarDataSource *_dataSource;
    PUSidebarDataSourceController *_dataSourceController;
    NSMapTable *_navigationRootsByDataSourceManagers;
    _Bool _didCallNumberOfItemsInSection;
    _Bool _isSelectingTabViewController;
    PUTabbedLibraryViewController *_tabbedLibraryViewController;
    NSArray *_tabBarItems;
    UITabBarItem *_selectedTabBarItem;
}

@property (retain, nonatomic) NSArray *tabBarItems;
@property (retain, nonatomic) UITabBarItem *selectedTabBarItem;
@property (nonatomic, readonly) NSArray *navigationRoots;
@property (nonatomic, readonly) PUTabbedLibraryViewController *tabbedLibraryViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_updateDataSource;
- (void)tabbedLibraryViewControllerDidChangeViewControllers:(id)arg1;
- (void)tabbedLibraryViewControllerDidChangeSelectedViewController:(id)arg1;
- (void)sidebarDataSourceController:(id)arg1 didChangeDataSourceWithChangeDetails:(id)arg2;
- (id)initWithTabbedLibraryViewController:(id)arg1;
- (void)_updateDataSourceManager;
- (void)_updateSelectedRow;
- (void)_setSelectedTabViewController:(id)arg1;

@end
