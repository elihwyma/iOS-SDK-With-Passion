/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class SKUIAccountButtonsViewElement, SKUILink;

__attribute__((visibility("hidden")))
@interface SKUIAccountButtonsComponent : SKUIPageComponent

{
    SKUILink *_ecommerceLink;
    _Bool _hidesTermsAndConditions;
}

@property (nonatomic, readonly) SKUIAccountButtonsViewElement *viewElement;
@property (retain, nonatomic) SKUILink *ECommerceLink;
@property (nonatomic) _Bool hidesTermsAndConditions;

- (long long)componentType;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;

@end
