/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIDeferredActivityItemProvider.h>

@class SKUIResourceLoader;

__attribute__((visibility("hidden")))
@interface SKUIURLActivityItemProvider : SKUIDeferredActivityItemProvider

{
    SKUIResourceLoader *_resourceLoader;
}

+ (id)placeholderItem;

- (id)item;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2;
- (id)initWithProductPageItemProvider:(CDUnknownBlockType)arg1 clientContext:(id)arg2;
- (id)linkPresentationImageFor:(id)arg1;

@end
