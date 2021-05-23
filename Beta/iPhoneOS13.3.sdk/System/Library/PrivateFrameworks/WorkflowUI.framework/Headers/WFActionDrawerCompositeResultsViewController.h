/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UITableView, WFActionDrawerResults;

@interface WFActionDrawerCompositeResultsViewController : UIViewController

{
    WFActionDrawerResults *_results;
    NSArray *_suggestionSections;
    NSArray *_actionSections;
    NSArray *_appSections;
    NSArray *_userActivitySections;
    UITableView *_tableView;
}

@property (nonatomic, readonly) WFActionDrawerResults *results;
@property (nonatomic, readonly) NSArray *suggestionSections;
@property (nonatomic, readonly) NSArray *actionSections;
@property (nonatomic, readonly) NSArray *appSections;
@property (nonatomic, readonly) NSArray *userActivitySections;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)reloadViews;
- (void)setResults:(id)arg1 animated:(_Bool)arg2;
- (id)categorizeResults:(id)arg1;
- (id)convertDonationsToActionsForSections:(id)arg1;

@end
