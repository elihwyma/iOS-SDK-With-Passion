//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKitUI/WKNavigationDelegate-Protocol.h>

@class AKServerRequestConfiguration, AKURLRequestApprover;
@protocol AKIDPHandlerDelegate;

@interface AKIDPHandler : NSObject <WKNavigationDelegate>
{
    AKURLRequestApprover *_redirectApprover;
    AKServerRequestConfiguration *_configuration;
    id <AKIDPHandlerDelegate> _delegate;
    id /* CDUnknownBlockType */ _completion;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(nonatomic) __weak id <AKIDPHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AKServerRequestConfiguration *configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
- (void)_completeFlowWithError:(id)arg1;
- (void)_completeWithACSPostRequestFromWebView:(id)arg1;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)_samlJavaScriptQuery;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (id)_safeACSDictionaryFromResult:(id)arg1;
- (void)cancel;
- (id)initWithConfiguration:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;

@end

