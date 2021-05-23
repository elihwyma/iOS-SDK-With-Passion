/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKWebViewFactoryItem, NSDictionary, NSMutableDictionary, NSString;

@protocol MKWebBridgeDelegate;

__attribute__((visibility("hidden")))
@interface MKWebBridge : NSObject

{
    NSMutableDictionary *_pendingCallbackHandlers;
    long long _nextCallNumber;
    CDUnknownBlockType _defaultCallbackHandler;
    NSMutableDictionary *_callHandlers;
    MKWebViewFactoryItem *_webViewFactoryItem;
    long long _connectionState;
    id <MKWebBridgeDelegate> _delegate;
}

@property (nonatomic, readonly) MKWebViewFactoryItem *webViewFactoryItem;
@property (nonatomic, readonly) long long connectionState;
@property (weak, nonatomic) id <MKWebBridgeDelegate> delegate;
@property (copy, nonatomic, readonly) NSDictionary *callHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_operatingSystemName;
+ (id)_operatingSystemVersion;
+ (id)URLByAddingConfiguration:(id)arg1 toURL:(id)arg2;

- (void)closeConnection;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)initWithWebViewFactoryItem:(id)arg1;
- (void)addCallableMethod:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)callMethod:(id)arg1 arguments:(id)arg2 callbackHandler:(CDUnknownBlockType)arg3;
- (void)_receiveMessage:(id)arg1;
- (void)_postMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_dispatchCall:(id)arg1;
- (void)_dispatchCallback:(id)arg1;
- (void)_initializeConnection;
- (void)_consumeCallbackHandlerWithNumber:(id)arg1 result:(id)arg2 errorMessage:(id)arg3;

@end
