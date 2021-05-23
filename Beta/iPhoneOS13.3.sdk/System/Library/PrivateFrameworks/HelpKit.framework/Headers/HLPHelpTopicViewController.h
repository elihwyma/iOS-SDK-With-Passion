/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <UIKit/UIViewController.h>

@class HLPHelpBookController, HLPHelpLoadingView, HLPHelpLocale, HLPHelpTopicHistoryItem, HLPHelpUsageController, NSArray, NSCache, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, NSURL, TPSURLSessionItem, UIBarButtonItem, WKWebView;

@protocol HLPHelpTopicViewControllerDelegate;

@interface HLPHelpTopicViewController : UIViewController

{
    id _interactivePopGestureRecognizerDelegate;
    _Bool _canShowTOC;
    _Bool _webViewLoaded;
    _Bool _RTL;
    HLPHelpBookController *_helpBookController;
    NSString *_assetHostOverride;
    NSMutableArray *_topicHistory;
    UIBarButtonItem *_tocBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_forwardBarButtonItem;
    NSLayoutConstraint *_loadingViewTopConstraint;
    _Bool _supportsDarkMode;
    _Bool _displayHelpTopicsOnly;
    _Bool _hideDoneButton;
    _Bool _showTopicNameAsTitle;
    id <HLPHelpTopicViewControllerDelegate> _delegate;
    NSURL *_helpBookURL;
    WKWebView *_webView;
    HLPHelpLocale *_locale;
    HLPHelpTopicHistoryItem *_currentTopicHistoryItem;
    HLPHelpLoadingView *_loadingView;
    HLPHelpUsageController *_usageController;
    TPSURLSessionItem *_URLSessionItem;
    NSCache *_topicCache;
    NSArray *_searchTerms;
    NSMutableDictionary *_webViewRequestsMap;
}

@property (retain, nonatomic) TPSURLSessionItem *URLSessionItem;
@property (retain, nonatomic) NSCache *topicCache;
@property (retain, nonatomic) NSArray *searchTerms;
@property (retain, nonatomic) NSMutableDictionary *webViewRequestsMap;
@property (weak, nonatomic) id <HLPHelpTopicViewControllerDelegate> delegate;
@property (nonatomic) _Bool supportsDarkMode;
@property (nonatomic) _Bool displayHelpTopicsOnly;
@property (nonatomic) _Bool hideDoneButton;
@property (nonatomic) _Bool showTopicNameAsTitle;
@property (retain, nonatomic) NSURL *helpBookURL;
@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) HLPHelpLocale *locale;
@property (retain, nonatomic) HLPHelpBookController *helpBookController;
@property (retain, nonatomic) HLPHelpTopicHistoryItem *currentTopicHistoryItem;
@property (retain, nonatomic) HLPHelpLoadingView *loadingView;
@property (retain, nonatomic) HLPHelpUsageController *usageController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)dismiss;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateBackgroundColor;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)updateDoneButton;
- (void)updateNavigationButtons;
- (void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3;
- (void)showHelpBookInfo:(id)arg1;
- (void)reloadCurrentTopic;
- (void)helpTopicViewControllerShowHelpBookInfo:(id)arg1;
- (void)helpTopicViewControllerDoneButtonTapped:(id)arg1;
- (void)helpTopicViewController:(id)arg1 topicLoaded:(id)arg2;
- (void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2;
- (void)helpTopicViewControllerCurrentTopicIsPassionPoint:(id)arg1;
- (void)showWebViewDelay;
- (void)showTableOfContent;
- (void)backButtonTapped;
- (void)forwardButtonTapped;
- (void)updateScrollPositionForCurrentTopicItem;
- (void)saveCurrentTopicItem;
- (void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3 topicAccessType:(long long)arg4;
- (void)loadHTMLString:(id)arg1 anchor:(id)arg2;
- (void)updateHTMLStringPath:(id)arg1 tag:(id)arg2 attribute:(id)arg3;

@end
