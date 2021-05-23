/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIViewController.h>

@class FCArticle, FCIssue, FCObservable, NFMultiDelegate, NSHashTable, NSString, NUArticleContext, UIResponder, UIScrollView, UIView;

@protocol NUAnalyticsReporting, NUArticleContentSizeManager, NUArticleViewControllerFactory, NUErrorMessageFactory, NULoadingDelegate, NULoadingViewProviding, NUSettings;

@interface NUArticleHostViewController : UIViewController

{
    NSString *_pageIdentifier;
    id <NULoadingDelegate> _loadingDelegate;
    FCObservable *_articleViewStyler;
    NUArticleContext *_articleContext;
    UIResponder *_responder;
    FCArticle *_article;
    FCIssue *_issue;
    id <NUArticleViewControllerFactory> _articleViewControllerFactory;
    id <NUSettings> _settings;
    UIViewController *_contentTypeViewController;
    UIView<NULoadingViewProviding> *_loadingView;
    NFMultiDelegate *_multiLoadingDelegate;
    id <NUErrorMessageFactory> _errorMessageFactory;
    id <NUAnalyticsReporting> _analyticsReporting;
    id <NUArticleContentSizeManager> _contentSizeManager;
}

@property (nonatomic, readonly) FCArticle *article;
@property (nonatomic, readonly) FCIssue *issue;
@property (nonatomic, readonly) id <NUArticleViewControllerFactory> articleViewControllerFactory;
@property (copy, nonatomic, readonly) id <NUSettings> settings;
@property (retain, nonatomic) UIViewController *contentTypeViewController;
@property (retain, nonatomic) UIView<NULoadingViewProviding> *loadingView;
@property (nonatomic, readonly) NFMultiDelegate *multiLoadingDelegate;
@property (nonatomic, readonly) id <NUErrorMessageFactory> errorMessageFactory;
@property (nonatomic, readonly) id <NUAnalyticsReporting> analyticsReporting;
@property (nonatomic, readonly) id <NUArticleContentSizeManager> contentSizeManager;
@property (retain, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) long long contentScale;
@property (nonatomic, readonly) FCObservable *articleViewStyler;
@property (nonatomic, readonly) NSHashTable *loadingListeners;
@property (retain, nonatomic) NUArticleContext *articleContext;
@property (retain, nonatomic) UIResponder *responder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NULoadingDelegate> loadingDelegate;
@property (copy, nonatomic, readonly) NSString *pageIdentifier;
@property (nonatomic, readonly) UIScrollView *scrollView;

- (_Bool)becomeFirstResponder;
- (void)viewDidLoad;
- (_Bool)resignFirstResponder;
- (void)viewDidLayoutSubviews;
- (void)reportEvent:(id)arg1;
- (void)loadingDidFinishWithError:(id)arg1;
- (id)initWithArticle:(id)arg1 articleViewControllerFactory:(id)arg2 settings:(id)arg3 errorMessageFactory:(id)arg4 contentSizeManager:(id)arg5;
- (void)loadingWillStart;
- (void)loadingDidStart;
- (void)loadingDidUpdateProgress:(double)arg1;
- (id)initWithArticle:(id)arg1 issue:(id)arg2 articleViewControllerFactory:(id)arg3 settings:(id)arg4 errorMessageFactory:(id)arg5 analyticsReporting:(id)arg6 contentSizeManager:(id)arg7;
- (id)loadingTextForArticle:(id)arg1;
- (void)loadArticleAndEmbedArticleViewController;

@end
