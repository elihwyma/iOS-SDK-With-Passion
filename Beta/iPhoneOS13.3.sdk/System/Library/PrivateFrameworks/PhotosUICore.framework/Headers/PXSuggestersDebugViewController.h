/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSDictionary;

@interface PXSuggestersDebugViewController : UITableViewController

{
    NSArray *_items;
    NSDictionary *_options;
}

- (id)initWithOptions:(id)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 withItem:(id)arg2;
- (void)_fetchSuggesters;

@end
