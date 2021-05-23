/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString;

@protocol CKBrowserAppManagerViewControllerDelegate;

@interface CKAppSearchResultsTableViewController : UITableViewController

{
    NSArray *_allPlugins;
    id <CKBrowserAppManagerViewControllerDelegate> _delegate;
    NSArray *_searchResults;
}

@property (retain, nonatomic) NSArray *searchResults;
@property (retain, nonatomic) NSArray *allPlugins;
@property (weak, nonatomic) id <CKBrowserAppManagerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)searchEnded;

@end
