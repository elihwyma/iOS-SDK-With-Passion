/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, SKUIClientContext, SKUIFocusedTouchGestureRecognizer, SKUISearchBarViewElement, SKUISearchFieldController, UISearchBar, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUISearchBarController : NSObject

{
    SKUIFocusedTouchGestureRecognizer *_cancelTouchGestureRecognizer;
    SKUIClientContext *_clientContext;
    _Bool _displaysSearchBarInNavigationBar;
    UIViewController *_parentViewController;
    UISearchBar *_searchBar;
    SKUISearchFieldController *_searchFieldController;
    _Bool _showsResultsForEmptyField;
    _Bool _usesSearchFieldController;
    SKUISearchBarViewElement *_viewElement;
}

@property (retain, nonatomic) SKUISearchBarViewElement *searchBarViewElement;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic) _Bool displaysSearchBarInNavigationBar;
@property (nonatomic) _Bool showsResultsForEmptyField;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, readonly) _Bool canBecomeActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)becomeActive;
- (void)reloadAfterDocumentUpdate;
- (id)initWithSearchBarViewElement:(id)arg1;
- (void)resignActive:(_Bool)arg1;
- (id)_searchFieldController;
- (void)searchFieldController:(id)arg1 requestSearch:(id)arg2;
- (void)searchFieldController:(id)arg1 searchBarDidChangeText:(id)arg2;
- (void)_cancelGestureAction:(id)arg1;
- (void)_customizeSearchFieldController:(id)arg1;
- (void)_customizeSearchBar:(id)arg1;
- (id)_newSearchFieldController;
- (void)_dispatchSubmitEventWithText:(id)arg1 URL:(id)arg2 searchHintOriginalTerm:(id)arg3 searchHintIndex:(id)arg4;
- (void)_dispatchChangeEventWithText:(id)arg1;
- (void)_removeCancelTouchGestureRecognizer;

@end
