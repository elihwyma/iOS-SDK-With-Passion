/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString;

@protocol WFMapSearchTableViewControllerDelegate;

@interface WFMapSearchTableViewController : UITableViewController

{
    id <WFMapSearchTableViewControllerDelegate> _delegate;
    NSArray *_mapItems;
}

@property (retain, nonatomic) NSArray *mapItems;
@property (weak, nonatomic) id <WFMapSearchTableViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;

@end
