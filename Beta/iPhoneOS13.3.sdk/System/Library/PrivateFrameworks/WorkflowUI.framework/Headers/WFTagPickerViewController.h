/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableOrderedSet, NSString, UISearchController;

@protocol WFTagPickerViewControllerDelegate;

@interface WFTagPickerViewController : UITableViewController

{
    id <WFTagPickerViewControllerDelegate> _delegate;
    NSArray *_tags;
    NSMutableOrderedSet *_selectedTags;
    UISearchController *_searchController;
}

@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSMutableOrderedSet *selectedTags;
@property (nonatomic, readonly) UISearchController *searchController;
@property (weak, nonatomic) id <WFTagPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)dismiss;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (id)currentResults;
- (id)initWithTitle:(id)arg1 tags:(id)arg2;

@end
