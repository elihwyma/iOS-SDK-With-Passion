/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <ITMLKit/IKJSObject.h>

@class SKUIClientContext, SKUIPreviewContainerViewController;

__attribute__((visibility("hidden")))
@interface SKUIClientContextPreviewContainer : IKJSObject

{
    SKUIClientContext *_clientContext;
    SKUIPreviewContainerViewController *_previewContainerViewController;
}

- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2 previewContainerViewController:(id)arg3;
- (void)previewDocument:(id)arg1:(id)arg2;

@end
