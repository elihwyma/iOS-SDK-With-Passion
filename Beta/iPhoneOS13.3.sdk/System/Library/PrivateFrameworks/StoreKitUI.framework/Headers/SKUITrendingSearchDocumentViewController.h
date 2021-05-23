/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSString, SKUITrendingSearchTemplateElement, SKUITrendingSearchView, UIViewController;

@interface SKUITrendingSearchDocumentViewController : SKUIViewController

{
    SKUITrendingSearchView *_resultsView;
    SKUITrendingSearchTemplateElement *_template;
    UIViewController *_privacyViewController;
}

@property (retain, nonatomic) SKUITrendingSearchView *resultsView;
@property (retain, nonatomic) SKUITrendingSearchTemplateElement *template;
@property (retain, nonatomic) UIViewController *privacyViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)documentDidUpdate:(id)arg1;
- (id)impressionableViewElements;
- (id)initWithTemplateElement:(id)arg1;
- (void)_reloadResultsView;
- (struct UIEdgeInsets)_resultsViewContentInset;
- (void)resultsViewTapRecognized:(id)arg1;
- (void)searchResultButtonTapped:(id)arg1;

@end
