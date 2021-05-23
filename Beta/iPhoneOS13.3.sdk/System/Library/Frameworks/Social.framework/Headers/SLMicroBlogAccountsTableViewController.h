/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UITableViewController.h>

@class NSArray, SLMicroBlogUserRecord, UIImage;

@protocol SLMicroBlogAccountsTableViewControllerDelegate;

@interface SLMicroBlogAccountsTableViewController : UITableViewController

{
    NSArray *_accountUserRecords;
    SLMicroBlogUserRecord *_selectedAccountUserRecord;
    id <SLMicroBlogAccountsTableViewControllerDelegate> _selectionDelegate;
    UIImage *_blankImage;
}

- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)cancelButtonTapped:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (void)didUpdateAccountUserRecord:(id)arg1;
- (void)setAccountUserRecords:(id)arg1;
- (void)setCurrentAccountUserRecord:(id)arg1;
- (id)_accountUserRecordForIndexPath:(id)arg1;
- (id)_blankImage;

@end
