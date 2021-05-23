/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFActionDrawerCompositeResultsViewController.h>

@class NSArray, NSString, WFActionDrawerCategoriesMetrics, WFActionDrawerResultsController, WFActionDrawerState;

@protocol NSObject, WFActionDrawerSuggestionsViewControllerDelegate;

@interface WFActionDrawerSiriSuggestionsViewController : WFActionDrawerCompositeResultsViewController

{
    _Bool _shouldDisplayCategoriesVertically;
    id <WFActionDrawerSuggestionsViewControllerDelegate> _delegate;
    WFActionDrawerResultsController *_actionDrawerResultsController;
    id <NSObject> _actionRegistryFilledNotificationObserver;
    WFActionDrawerCategoriesMetrics *_categoriesMetrics;
}

@property (nonatomic, readonly) NSArray *contentTypeCategories;
@property (retain, nonatomic) id <NSObject> actionRegistryFilledNotificationObserver;
@property (nonatomic) _Bool shouldDisplayCategoriesVertically;
@property (retain, nonatomic) WFActionDrawerCategoriesMetrics *categoriesMetrics;
@property (weak, nonatomic) id <WFActionDrawerSuggestionsViewControllerDelegate> delegate;
@property (nonatomic, readonly) WFActionDrawerResultsController *actionDrawerResultsController;
@property (nonatomic) _Bool scrollsToTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) WFActionDrawerState *state;

- (void)dealloc;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
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
- (void)categoriesTableViewCellDidSelectCategoryApps:(id)arg1 title:(id)arg2;
- (void)categoriesTableViewCellDidSelectCategoryFavorites:(id)arg1 title:(id)arg2;
- (void)categoriesTableViewCellDidSelectCategoryScripting:(id)arg1 title:(id)arg2;
- (void)categoriesTableViewCell:(id)arg1 didSelectCategoryForContentType:(id)arg2 title:(id)arg3;
- (void)siriSuggestionsTableViewCell:(id)arg1 didSelectAction:(id)arg2;
- (void)siriSuggestionsTableViewCell:(id)arg1 infoButtonTappedForSuggestion:(id)arg2;
- (id)initWithActionDrawerResultsController:(id)arg1;
- (void)reloadViews;
- (void)reloadCategoriesSection;

@end
