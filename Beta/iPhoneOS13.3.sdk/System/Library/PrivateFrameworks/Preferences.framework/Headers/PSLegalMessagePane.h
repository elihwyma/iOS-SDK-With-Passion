/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, UIWebView;

@interface PSLegalMessagePane

{
    UIWebView *_webView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)shouldInsetContent;
- (void)layoutInsetContent:(struct CGRect)arg1;
- (void)viewDidBecomeVisible;
- (_Bool)handlesDoneButton;
- (id)scrollViewToBeInsetted;
- (id)markupString;
- (id)htmlFileLocation;

@end
