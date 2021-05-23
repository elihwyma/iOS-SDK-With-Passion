/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKViewController.h>

@class HKIncrementalSearchBar, NSData, NSMutableArray, UIView, WKWebView;

@interface HKCDADocumentReportViewController : HKViewController

{
    _Bool _javascriptSearchInstalled;
    _Bool _javascriptIsRunning;
    _Bool _searchInProgress;
    NSData *_documentData;
    UIView *_disclosureView;
    WKWebView *_webView;
    HKIncrementalSearchBar *_incrementalSearchBar;
    long long _hitCount;
    long long _currentHighlightedHit;
    NSMutableArray *_javascriptOperationQueue;
}

@property (readonly) NSData *documentData;
@property (nonatomic, readonly) UIView *disclosureView;
@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic, readonly) HKIncrementalSearchBar *incrementalSearchBar;
@property (nonatomic) _Bool javascriptSearchInstalled;
@property (nonatomic) _Bool javascriptIsRunning;
@property (nonatomic) _Bool searchInProgress;
@property (nonatomic) long long hitCount;
@property (nonatomic) long long currentHighlightedHit;
@property (retain, nonatomic) NSMutableArray *javascriptOperationQueue;

+ (id)xmlToHTMLTranslator;

- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithDocumentData:(id)arg1;
- (void)searchBarDoneAction:(id)arg1;
- (void)_updateMatchDisplayString:(long long)arg1 numMatches:(long long)arg2;
- (void)searchBarUpAction:(id)arg1;
- (void)searchBarDownAction:(id)arg1;
- (void)searchBarChangeSearch:(id)arg1 searchString:(id)arg2;
- (void)startIncrementalSearch;
- (void)hideDisclosure:(id)arg1;
- (id)buildDisclosureView;
- (void)_translateXMLInBackground;
- (void)_runJavascriptOperation:(id)arg1 clearQueuedCommands:(_Bool)arg2;
- (void)_finishJavascriptOperation;
- (void)_updateSearchHits:(long long)arg1;
- (void)_runJavascript:(id)arg1 clearQueuedCommands:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateSearchBarState;
- (void)_incrementCurrentHitBy:(long long)arg1;

@end
