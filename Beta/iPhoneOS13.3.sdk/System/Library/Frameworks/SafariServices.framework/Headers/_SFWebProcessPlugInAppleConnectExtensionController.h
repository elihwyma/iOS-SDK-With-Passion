/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, WKWebProcessPlugInScriptWorld, _SFWebProcessPlugInPageController, _WKRemoteObjectInterface;

@protocol _SFAppleConnectExtensionContentScriptMessageReceiver;

__attribute__((visibility("hidden")))
@interface _SFWebProcessPlugInAppleConnectExtensionController : NSObject

{
    _SFWebProcessPlugInPageController *_pageController;
    id <_SFAppleConnectExtensionContentScriptMessageReceiver> _appleConnectExtensionContentScriptMessageReceiver;
    _WKRemoteObjectInterface *_extensionMessageReceiverInterface;
    WKWebProcessPlugInScriptWorld *_isolatedWorld;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)dispatchMessageToContentScriptWithName:(id)arg1 userInfo:(id)arg2;
- (id)initWithPageController:(id)arg1;
- (void)dispatchMessageFromContentScript:(id)arg1 userInfo:(id)arg2;
- (id)_appleConnectExtensionContentScriptMessageReceiver;
- (void)injectAppleConnectBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2;

@end
