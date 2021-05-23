/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <ITMLKit/IKJSObject.h>

@class SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUIJSUpdatableAssetController : IKJSObject

{
    SKUIClientContext *_clientContext;
}

- (void)refreshCachedManifest:(id)arg1;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;
- (id)currentManifestVersion;
- (id)loadResource:(id)arg1;
- (id)newestCachedManifestVersion;

@end
