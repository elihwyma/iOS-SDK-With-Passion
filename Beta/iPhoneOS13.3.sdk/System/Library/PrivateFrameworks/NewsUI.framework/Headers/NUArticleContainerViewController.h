/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIViewController.h>

@class NSString, NUArticleBarButtonItemManager, NUArticleNavigationController, NUInterstitialAdManager, NUPageViewController;

@protocol NUArticleContainerViewControllerDelegate, NUPaging, NUPagingFactory, NURouter;

@interface NUArticleContainerViewController : UIViewController

{
    _Bool _linkPreviewing;
    id <NUArticleContainerViewControllerDelegate> _delegate;
    NUArticleNavigationController *_navigationController;
    NUPageViewController *_pageViewController;
    id <NUPagingFactory> _pagingFactory;
    NUInterstitialAdManager *_interstitialAdManager;
    id <NUPaging> _paging;
    NUArticleBarButtonItemManager *_barButtonItemManager;
    id <NURouter> _router;
}

@property (nonatomic, readonly) NUArticleNavigationController *navigationController;
@property (nonatomic, readonly) NUPageViewController *pageViewController;
@property (nonatomic, readonly) id <NUPagingFactory> pagingFactory;
@property (nonatomic, readonly) NUInterstitialAdManager *interstitialAdManager;
@property (retain, nonatomic) id <NUPaging> paging;
@property (nonatomic, readonly) NUArticleBarButtonItemManager *barButtonItemManager;
@property (nonatomic, readonly) id <NURouter> router;
@property (weak, nonatomic) id <NUArticleContainerViewControllerDelegate> delegate;
@property (nonatomic, getter=isLinkPreviewing) _Bool linkPreviewing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)childViewControllerForStatusBarHidden;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)loadingDidFinishWithError:(id)arg1;
- (void)loadingWillStart;
- (id)viewControllerPageableForViewController:(id)arg1;
- (void)styleNavigationForPage:(id)arg1;
- (void)pageViewController:(id)arg1 viewController:(id)arg2 changedVisibilityFactor:(double)arg3;
- (void)pageViewController:(id)arg1 didChangeVisibleViewControllerFromViewController:(id)arg2 direction:(unsigned long long)arg3;
- (void)articleBarButtonItemManager:(id)arg1 performDoneActionForBarButtonItem:(id)arg2;
- (void)articleBarButtonItemManager:(id)arg1 performNextActionForBarButtonItem:(id)arg2;
- (void)articleBarButtonItemManager:(id)arg1 performShareActionForBarButtonItem:(id)arg2;
- (void)articleBarButtonItemManagerDidLayoutBarButtonItems:(id)arg1;
- (void)interstitialAdManager:(id)arg1 didLoadInterstitialPage:(id)arg2;
- (void)interstitialAdManager:(id)arg1 didUnloadInterstitialPage:(id)arg2;
- (id)interstitialAdManager:(id)arg1 pageAfterPage:(id)arg2;
- (void)enableNavigation:(_Bool)arg1;
- (id)initWithPagingFactory:(id)arg1 interstitialAdManager:(id)arg2 router:(id)arg3;
- (void)loadWithArticleIDs:(id)arg1;

@end
