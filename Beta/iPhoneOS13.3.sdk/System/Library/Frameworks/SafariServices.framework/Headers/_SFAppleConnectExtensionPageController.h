/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, WKWebView, _WKRemoteObjectInterface;

@protocol _SFAppleConnectExtensionMessageReceiver, _SFAppleConnectExtensionUIDelegate;

@interface _SFAppleConnectExtensionPageController : NSObject

{
    id <_SFAppleConnectExtensionMessageReceiver> _appleConnectExtensionMessageReceiver;
    _WKRemoteObjectInterface *_contentScriptMessageReceiverInterface;
    WKWebView *_webView;
    id <_SFAppleConnectExtensionUIDelegate> _delegate;
}

@property (weak, nonatomic) id <_SFAppleConnectExtensionUIDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)initWithWebView:(id)arg1;
- (void)dismissExtensionViewController:(id)arg1;
- (void)dispatchMessageToContentScriptWithName:(id)arg1 userInfo:(id)arg2;
- (void)presentExtensionViewController:(id)arg1;
- (void)dispatchMessageFromContentScript:(id)arg1 userInfo:(id)arg2;
- (id)_appleConnectExtensionMessageReceiver;

@end
