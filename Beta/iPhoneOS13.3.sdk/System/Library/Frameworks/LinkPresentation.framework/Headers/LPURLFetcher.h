/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPFetcher.h>

@class NSString, NSURL, WKWebView;

__attribute__((visibility("hidden")))
@interface LPURLFetcher : LPFetcher

{
    CDUnknownBlockType _completionHandler;
    WKWebView *_webView;
    NSURL *_URL;
    Class _responseClass;
}

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) Class responseClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2;
- (void)_completedWithData:(id)arg1 MIMEType:(id)arg2 error:(id)arg3;

@end
