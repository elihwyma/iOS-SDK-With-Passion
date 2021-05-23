/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKAppKeyboard, IKTextFieldElement, IKViewElement, NSString, UIActivityIndicatorView, UISearchController, UIView, _TVStackCollectionViewController;

@interface _TVSearchTemplateController_iOS : _TVBgImageLoadingViewController

{
    UIView *_nonResultsView;
    _TVStackCollectionViewController *_resultsViewController;
    UISearchController *_searchController;
    IKTextFieldElement *_searchFieldElement;
    IKAppKeyboard *_ikKeyboard;
    IKViewElement *_nonResultsElement;
    IKViewElement *_collectionListElement;
    struct CGRect _keyboardFrame;
    double _impressionThreshold;
    UIActivityIndicatorView *_spinner;
    UIView *_originalSearchFieldRightView;
    long long _originalSearchFieldRightViewMode;
    IKViewElement *_viewElement;
}

@property (nonatomic, readonly) IKViewElement *viewElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)textDidChangeForKeyboard:(id)arg1;
- (void)updateNavigationItem:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)_cancelImpressionsUpdate;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)stackCollectionViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)_updateImpressions;
- (void)_recordImpressionsForVisibleView;
- (void)_setNonResultsView:(id)arg1;
- (void)_updateKeyboardText;
- (_Bool)_isAtWordEnd;
- (void)_updateSearchFieldText;
- (id)_sanitizedText;

@end
