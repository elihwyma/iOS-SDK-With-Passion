/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSString, NSTimer, PXAnimatedHeaderView, PXPeopleConfirmationLoadingView, PXPeopleConfirmationSummaryViewController, PXPeopleSuggestionManager, PXPeopleSuggestionView, UIActivityIndicatorView, UILabel;

@interface PXPeopleConfirmationViewController : UIViewController

{
    _Bool _suggestionsPresented;
    _Bool _showTypeDebugColor;
    PXPeopleSuggestionManager *_suggestionManager;
    PXPeopleSuggestionView *_suggestionView;
    PXAnimatedHeaderView *_headerView;
    UILabel *_descriptionLabel;
    UILabel *_interimLoadingLabel;
    UIActivityIndicatorView *_interimLoadingIndicator;
    unsigned long long _viewState;
    PXPeopleConfirmationLoadingView *_loadingView;
    PXPeopleConfirmationSummaryViewController *_summaryViewController;
    NSTimer *_loadingDelayTimer;
}

@property (retain, nonatomic) PXPeopleSuggestionView *suggestionView;
@property (retain, nonatomic) PXAnimatedHeaderView *headerView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) PXPeopleConfirmationLoadingView *loadingView;
@property (retain, nonatomic) UILabel *interimLoadingLabel;
@property (retain, nonatomic) UIActivityIndicatorView *interimLoadingIndicator;
@property (retain, nonatomic) PXPeopleConfirmationSummaryViewController *summaryViewController;
@property (retain, nonatomic) NSTimer *loadingDelayTimer;
@property (nonatomic) _Bool suggestionsPresented;
@property (nonatomic) _Bool showTypeDebugColor;
@property (readonly) PXPeopleSuggestionManager *suggestionManager;
@property (readonly) _Bool isSummaryViewShowing;
@property (nonatomic) unsigned long long viewState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)cancelOperation:(id)arg1;
- (id)initWithPerson:(id)arg1;
- (void)doneTapped:(id)arg1;
- (void)performUndo:(id)arg1;
- (id)personForSummaryViewController:(id)arg1;
- (unsigned long long)userConfirmedCountForSummaryViewController:(id)arg1;
- (unsigned long long)autoConfirmedCountForSummaryViewController:(id)arg1;
- (void)confirmationCountUpdatedForSuggestionManager:(id)arg1 undoing:(_Bool)arg2;
- (void)willLoadMoreSuggestionsForSuggestionManager:(id)arg1;
- (void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;
- (void)presentSuggestion:(id)arg1 animated:(_Bool)arg2;
- (void)displaySummary;
- (void)dismissSummary;
- (void)updateViewWithViewState:(unsigned long long)arg1;
- (void)suggestionDidDisplay;
- (void)confirmTapped:(id)arg1;
- (void)denyTapped:(id)arg1;
- (void)undoConfirm:(id)arg1;
- (void)undoDeny:(id)arg1;

@end
