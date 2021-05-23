/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class ISStoreURLOperation, NSNumber, NSString, SUWebView;

@interface SUScriptExecutionContext : NSObject

{
    ISStoreURLOperation *_loadOperation;
    SUWebView *_webView;
}

@property (nonatomic, readonly) id windowScriptObject;
@property (nonatomic, readonly) struct OpaqueJSContext *globalExecutionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;

- (void)dealloc;
- (id)_webView;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)callWebScriptMethod:(id)arg1 withArguments:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (_Bool)evaluateData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)evaluateScriptAtURL:(id)arg1;
- (void)_cancelLoadOperation;
- (id)_newLoadOperation;
- (void)evaluateScriptWithURLBagKey:(id)arg1;
- (id)parentViewControllerForWebView:(id)arg1;

@end
