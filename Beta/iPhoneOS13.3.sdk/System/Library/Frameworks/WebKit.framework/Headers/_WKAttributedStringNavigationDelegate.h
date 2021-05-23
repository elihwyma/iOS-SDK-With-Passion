/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _WKAttributedStringNavigationDelegate : NSObject

{
    CDUnknownBlockType _webContentProcessDidTerminate;
    CDUnknownBlockType _decidePolicyForNavigationAction;
    CDUnknownBlockType _didFailProvisionalNavigation;
    CDUnknownBlockType _didFailNavigation;
    CDUnknownBlockType _didFinishNavigation;
}

@property (copy, nonatomic) CDUnknownBlockType webContentProcessDidTerminate;
@property (copy, nonatomic) CDUnknownBlockType decidePolicyForNavigationAction;
@property (copy, nonatomic) CDUnknownBlockType didFailProvisionalNavigation;
@property (copy, nonatomic) CDUnknownBlockType didFailNavigation;
@property (copy, nonatomic) CDUnknownBlockType didFinishNavigation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end
