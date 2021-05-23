/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <Foundation/NSObject.h>

@class AKServerRequestConfiguration, AKURLRequestApprover, NSString;

@protocol AKIDPHandlerDelegate;

@interface AKIDPHandler : NSObject

{
    AKURLRequestApprover *_redirectApprover;
    AKServerRequestConfiguration *_configuration;
    id <AKIDPHandlerDelegate> _delegate;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic, readonly) AKServerRequestConfiguration *configuration;
@property (weak, nonatomic) id <AKIDPHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_completeFlowWithError:(id)arg1;
- (void)_completeWithACSPostRequestFromWebView:(id)arg1;
- (id)_samlJavaScriptQuery;
- (id)_safeACSDictionaryFromResult:(id)arg1;
- (id)initWithConfiguration:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
