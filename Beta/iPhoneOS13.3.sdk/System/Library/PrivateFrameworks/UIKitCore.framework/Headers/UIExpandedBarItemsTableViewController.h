/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewController.h>

@class UIBarButtonItemGroup;

__attribute__((visibility("hidden")))
@interface UIExpandedBarItemsTableViewController : UITableViewController

{
    UIBarButtonItemGroup *_barButtonGroup;
}

@property (nonatomic, readonly) UIBarButtonItemGroup *barButtonGroup;

- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithBarButtonGroup:(id)arg1;
- (id)_visibleItems;
- (unsigned long long)_numberOfItems;
- (id)_displayTitleForBarButtonItem:(id)arg1;

@end
