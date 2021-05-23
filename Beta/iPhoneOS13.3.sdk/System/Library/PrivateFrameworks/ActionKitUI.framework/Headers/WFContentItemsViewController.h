/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WFContentItemsViewController : UITableViewController

{
    _Bool _allowsCoercion;
    NSArray *_contentItems;
}

@property (retain, nonatomic) NSArray *contentItems;
@property (nonatomic) _Bool allowsCoercion;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
