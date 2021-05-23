/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIActivityItemProvider.h>

@class SKUIClientContext, SKUIProductPageItem;

__attribute__((visibility("hidden")))
@interface SKUIDeferredActivityItemProvider : UIActivityItemProvider

{
    SKUIProductPageItem *_productPageItem;
    SKUIClientContext *_clientContext;
    CDUnknownBlockType _itemProvider;
}

@property (copy) CDUnknownBlockType itemProvider;
@property (retain) SKUIClientContext *clientContext;
@property (copy, readonly) SKUIProductPageItem *productPageItem;

+ (id)placeholderItem;

- (id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2;
- (id)initWithProductPageItemProvider:(CDUnknownBlockType)arg1 clientContext:(id)arg2;
- (id)initWithProductPageItemProvider:(CDUnknownBlockType)arg1 clientContext:(id)arg2 placeholderItem:(id)arg3;

@end
