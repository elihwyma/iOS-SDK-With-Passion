/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFActionDrawerCompositeResultsViewController.h>

@class NSString, WFActionDrawerState;

@protocol WFActionDrawerAppsDetailViewControllerDelegate;

@interface WFActionDrawerAppsDetailViewController : WFActionDrawerCompositeResultsViewController

{
    _Bool _loading;
    id <WFActionDrawerAppsDetailViewControllerDelegate> _delegate;
    NSString *_bundleIdentifier;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic) _Bool loading;
@property (weak, nonatomic) id <WFActionDrawerAppsDetailViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) WFActionDrawerState *state;

- (id)initWithBundleIdentifier:(id)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)moveToState:(id)arg1 animated:(_Bool)arg2;
- (void)actionCell:(id)arg1 infoButtonTappedForAction:(id)arg2;
- (void)siriSuggestionsTableViewCell:(id)arg1 didSelectAction:(id)arg2;
- (void)siriSuggestionsTableViewCell:(id)arg1 infoButtonTappedForSuggestion:(id)arg2;
- (void)reloadViews;
- (unsigned long long)detailSectionForSection:(long long)arg1;
- (long long)detailSectionIndexForIndexPath:(long long)arg1;

@end
