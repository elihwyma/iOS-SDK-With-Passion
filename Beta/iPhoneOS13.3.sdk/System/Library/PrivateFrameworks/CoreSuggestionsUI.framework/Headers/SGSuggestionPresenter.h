/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SGBanner, SGSuggestionAction, SGSuggestionStore, UIViewController;

@protocol SGSuggestionPresenterDelegate;

@interface SGSuggestionPresenter : NSObject

{
    SGBanner *_banner;
    SGSuggestionAction *_bannerPrimaryAction;
    SGSuggestionAction *_bannerDismissAction;
    UIViewController *_presentedViewController;
    SGSuggestionStore *_suggestionStore;
    _Bool _wantsToShowBanner;
    id <SGSuggestionPresenterDelegate> _delegate;
}

@property (nonatomic) _Bool wantsToShowBanner;
@property (weak, nonatomic) id <SGSuggestionPresenterDelegate> delegate;
@property (nonatomic, readonly) SGBanner *banner;
@property (copy, nonatomic) NSArray *suggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)formatList:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (_Bool)presentationControllerShouldDismiss:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)_presentingViewController;
- (void)presentViewController:(id)arg1;
- (void)dismissViewController:(id)arg1;
- (void)_dismissViewControllerAnimated:(_Bool)arg1;
- (id)suggestionStore;
- (void)addSuggestion:(id)arg1;
- (void)removeSuggestion:(id)arg1;
- (id)formatMixedCategoriesTitle:(id)arg1;
- (void)_bannerPrimaryAction;
- (void)suggestion:(id)arg1 actionFinished:(_Bool)arg2;
- (void)suggestionWasUpdated:(id)arg1;
- (long long)suggestionsUIContext;
- (void)_listDidChangeNotification:(id)arg1;
- (void)_bannerDismiss;
- (void)_updateBanner;
- (id)formatMixedCategoriesSubtitle:(id)arg1;
- (id)_viewControllerForPresentingFromBanner;
- (void)_presentModalViewControllerFromButton:(id)arg1;
- (void)_presentModalViewController:(id)arg1 fromSourceView:(id)arg2;
- (id)_presentedControllerDoneButtonItem;
- (id)_presentedControllerCancelButtonItem;
- (void)_dismissPresentedViewController:(id)arg1;

@end
