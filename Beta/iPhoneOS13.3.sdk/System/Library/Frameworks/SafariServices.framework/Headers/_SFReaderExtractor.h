/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

#import <SafariServices/Swift-Protocol.h>

@class NSString, NSTimer, NSURL, WKProcessPool, WKWebView, _SFReaderController;

@interface _SFReaderExtractor : NSObject <Swift>

{
    WKWebView *_webView;
    WKWebView *_readerWebView;
    WKProcessPool *_processPool;
    NSURL *_currentURL;
    _SFReaderController *_readerController;
    NSTimer *_loadingTimeoutTimer;
    NSTimer *_readerExtractionTimer;
    CDUnknownBlockType _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_invalidateTimers;
- (id)_configuration;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (id)_processPool;
- (void)readerController:(id)arg1 didCollectArticleContent:(id)arg2;
- (void)_setUpReaderController;
- (void)_finishWithContent:(id)arg1 error:(id)arg2;
- (void)_scheduleLoadingTimeout;
- (void)_scheduleReaderDataExtractionTimeout;
- (void)getExtractedDataForURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getExtractedDataForURL:(id)arg1 withData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
