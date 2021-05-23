/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, WKWebProcessPlugInBrowserContextController, _WKRemoteObjectInterface;

__attribute__((visibility("hidden")))
@interface SFWebProcessPlugInPageExtensionController : NSObject

{
    WKWebProcessPlugInBrowserContextController *_browserContextController;
    _WKRemoteObjectInterface *_extensionControllerInterface;
    NSMutableDictionary *_extensionToScriptWorldMap;
}

- (void)dealloc;
- (void)prepareJavaScriptWorldForSharingExtension:(id)arg1 javaScript:(id)arg2;
- (void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2;
- (void)_setUpExtensionControllerInterface;
- (void)clearExtensionScriptWorlds;
- (void)_clearExtensionControllerInterface;
- (void)evaluateJavaScriptForSharingExtension:(id)arg1 extraArguments:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithBrowserContextController:(id)arg1;

@end
