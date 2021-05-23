/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSString, UIWebView;

@interface SLURLPreviewGenerator : NSObject

{
    CDUnknownBlockType _completion;
    UIWebView *_webView;
}

@property (retain) UIWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)uiWebView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
- (void)loadURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_callCompletionWithPreview:(id)arg1;

@end
