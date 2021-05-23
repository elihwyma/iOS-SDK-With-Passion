/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class WKWebView;

@protocol SFSharingExtensionWebProcessController;

@interface _SFSafariSharingExtensionController : NSObject

{
    WKWebView *_webView;
    id <SFSharingExtensionWebProcessController> _extensionControllerProxy;
}

- (id)initWithWebView:(id)arg1;
- (void)prepareJavaScriptWorldForSharingExtension:(id)arg1 javaScript:(id)arg2;
- (void)runJavaScriptForSharingExtension:(id)arg1 extraArguments:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2;
- (id)_extensionControllerProxy;

@end
