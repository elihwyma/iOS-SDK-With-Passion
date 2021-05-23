/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSExtensionContext.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLRemotePreviewServiceContext : NSExtensionContext

{
    _Bool _isObservingPreviewController;
    id _contents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)previewViewController;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invalidateService;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)previewWillAppear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)setHostViewControllerProxy:(id)arg1;
- (void)previewControllerWantsFullScreen:(_Bool)arg1;
- (void)previewControllerDidUpdateTitle:(id)arg1;
- (void)previewControllerDidUpdatePreferredContentSize:(id)arg1;
- (void)getPrinterProxyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)protocolHost;
- (void)_startObservingPreviewControllerAttributeChanges;
- (void)_stopObservingPreviewControllerAttributeChanges;

@end
