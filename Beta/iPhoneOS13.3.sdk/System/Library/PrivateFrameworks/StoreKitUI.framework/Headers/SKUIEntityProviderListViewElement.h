/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSDictionary;

@interface SKUIEntityProviderListViewElement : SKUIViewElement

{
    NSDictionary *_entityProviders;
}

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)entityProviderWithIdentifier:(id)arg1;

@end
