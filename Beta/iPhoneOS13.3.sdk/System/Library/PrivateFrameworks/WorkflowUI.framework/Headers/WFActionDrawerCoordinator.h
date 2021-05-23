/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, UINavigationController, UIViewController, WFActionDrawerAppsViewController, WFActionDrawerResults, WFActionDrawerResultsController, WFActionDrawerSiriSuggestionsViewController, WFActionDrawerState, WFActionDrawerViewController, WFComposeViewController, WFDrawerController, WFWorkflow;

@protocol WFActionDrawerResultsControlling;

@interface WFActionDrawerCoordinator : NSObject

{
    WFComposeViewController *_composeViewController;
    WFActionDrawerViewController *_actionsViewController;
    WFWorkflow *_workflow;
    WFDrawerController *_drawerController;
    UINavigationController *_navigationController;
    NSHashTable *_componentEditingSessions;
    WFActionDrawerResults *_siriSuggestionsResults;
    WFActionDrawerResults *_siriSuggestionsByIntentResults;
    WFActionDrawerSiriSuggestionsViewController *_siriSuggestionsViewController;
    id <WFActionDrawerResultsControlling> _actionDrawerResultsControllingDelegate;
    UIViewController *_documentationPopoverViewController;
    WFActionDrawerResultsController *_actionDrawerResultsController;
    WFActionDrawerAppsViewController *_appsViewController;
}

@property (nonatomic, readonly) NSHashTable *componentEditingSessions;
@property (retain, nonatomic) WFActionDrawerResults *siriSuggestionsResults;
@property (retain, nonatomic) WFActionDrawerResults *siriSuggestionsByIntentResults;
@property (weak, nonatomic) WFActionDrawerSiriSuggestionsViewController *siriSuggestionsViewController;
@property (weak, nonatomic) id <WFActionDrawerResultsControlling> actionDrawerResultsControllingDelegate;
@property (weak, nonatomic) UIViewController *documentationPopoverViewController;
@property (retain, nonatomic) WFActionDrawerResultsController *actionDrawerResultsController;
@property (retain, nonatomic) WFActionDrawerAppsViewController *appsViewController;
@property (weak, nonatomic, readonly) WFComposeViewController *composeViewController;
@property (nonatomic, readonly) WFActionDrawerViewController *actionsViewController;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (weak, nonatomic) WFDrawerController *drawerController;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) UIViewController *componentHostingViewController;
@property (nonatomic, readonly) WFActionDrawerState *state;

- (void)dealloc;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (_Bool)moveToState:(id)arg1 animated:(_Bool)arg2;
- (void)suggestionsViewController:(id)arg1 didSelectAction:(id)arg2;
- (void)resultsViewController:(id)arg1 didSelectAction:(id)arg2;
- (void)resultsViewController:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3;
- (void)responderDidBeginEditing:(id)arg1;
- (void)componentPresentDocumentationForAction:(id)arg1 withSourceView:(id)arg2;
- (void)componentWillBeginEditingSession:(id)arg1;
- (void)componentDidEndEditingSession:(id)arg1;
- (void)componentPresentWorkflowSettings;
- (void)appendAction:(id)arg1;
- (void)actionDescriptionViewController:(id)arg1 didSelectAddAction:(id)arg2;
- (void)actionDrawerViewController:(id)arg1 didSelectAction:(id)arg2;
- (void)actionDrawerViewController:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3;
- (void)actionDrawerViewControllerDidSelectCategoryApps:(id)arg1 title:(id)arg2;
- (void)actionDrawerViewControllerDidSelectCategoryFavorites:(id)arg1 title:(id)arg2;
- (void)actionDrawerViewControllerDidSelectCategoryScripting:(id)arg1 title:(id)arg2;
- (void)actionDrawerViewController:(id)arg1 didSelectCategoryForContentType:(id)arg2 title:(id)arg3;
- (void)actionDrawerViewController:(id)arg1 didSelectAppWithBundleIdentifier:(id)arg2;
- (void)appViewController:(id)arg1 didSelectAppWithBundleIdentifier:(id)arg2;
- (void)appDetailsViewController:(id)arg1 didSelectAction:(id)arg2;
- (void)appDetailsViewController:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3;
- (id)initWithComposeViewController:(id)arg1 workflow:(id)arg2;
- (void)loadWithActionsViewController:(id)arg1 withState:(id)arg2;
- (void)reloadSiriSuggestions;
- (id)presentResultsViewControllerWithTitle:(id)arg1 results:(id)arg2 visibility:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)presentResultsViewController:(id)arg1 visibility:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)presentDescriptionForAction:(id)arg1 fromViewController:(id)arg2 view:(id)arg3 arrowDirections:(unsigned long long)arg4 animated:(_Bool)arg5;
- (void)presentResultsForAppWithBundleIdentifier:(id)arg1;
- (void)dismissDocumentationIfPresentedInPopoverAnimated:(_Bool)arg1;
- (void)subscribeForTextEditingNotifications;
- (void)cancelEditingSessionsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
