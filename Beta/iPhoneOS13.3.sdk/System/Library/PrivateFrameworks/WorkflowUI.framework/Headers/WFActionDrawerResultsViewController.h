/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UILabel, UITableView, WFActionDrawerResults, WFActionDrawerState;

@protocol WFActionDrawerResultsViewControllerDelegate;

@interface WFActionDrawerResultsViewController : UIViewController

{
    id <WFActionDrawerResultsViewControllerDelegate> _delegate;
    WFActionDrawerResults *_results;
    NSString *_emptyText;
    UITableView *_tableView;
    UILabel *_emptyLabel;
}

@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) UILabel *emptyLabel;
@property (weak, nonatomic) id <WFActionDrawerResultsViewControllerDelegate> delegate;
@property (nonatomic, readonly) WFActionDrawerResults *results;
@property (copy, nonatomic) NSString *emptyText;
@property (nonatomic) _Bool scrollsToTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) WFActionDrawerState *state;

- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithTitle:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollToTop;
- (_Bool)moveToState:(id)arg1 animated:(_Bool)arg2;
- (void)actionCell:(id)arg1 infoButtonTappedForAction:(id)arg2;
- (void)setResults:(id)arg1 animated:(_Bool)arg2;
- (void)updateEmptyLabelVisibility;

@end
