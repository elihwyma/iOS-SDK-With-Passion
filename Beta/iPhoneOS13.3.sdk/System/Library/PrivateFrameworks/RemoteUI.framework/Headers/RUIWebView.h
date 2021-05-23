/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSString, NSURL, UIWebView;

@interface RUIWebView

{
    UIWebView *_webView;
    NSString *_html;
    NSURL *_baseURL;
    id _delegate;
}

@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *html;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (id)sourceURL;
- (id)userStyleSheet;

@end
