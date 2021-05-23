/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFActionDrawerCompositeResultsViewController.h>

@class NSArray, NSString, WFActionDrawerState;

@protocol WFActionDrawerSearchResultsViewControllerDelegate;

@interface WFActionDrawerSearchResultsViewController : WFActionDrawerCompositeResultsViewController

{
    id <WFActionDrawerSearchResultsViewControllerDelegate> _delegate;
    NSArray *_combinedActionActivitySections;
}

@property (retain, nonatomic) NSArray *combinedActionActivitySections;
@property (weak, nonatomic) id <WFActionDrawerSearchResultsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) WFActionDrawerState *state;

- (void)loadView;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)moveToState:(id)arg1 animated:(_Bool)arg2;
- (void)actionCell:(id)arg1 infoButtonTappedForAction:(id)arg2;
- (void)siriSuggestionsTableViewCell:(id)arg1 didSelectAction:(id)arg2;
- (void)siriSuggestionsTableViewCell:(id)arg1 infoButtonTappedForSuggestion:(id)arg2;
- (void)reloadViews;
- (void)appsTableViewCell:(id)arg1 didSelectAppWithBundleIdentifier:(id)arg2;

@end
