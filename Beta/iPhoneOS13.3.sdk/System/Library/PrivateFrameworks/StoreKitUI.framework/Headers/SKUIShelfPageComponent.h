/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class SKUIShelfViewElement;

__attribute__((visibility("hidden")))
@interface SKUIShelfPageComponent : SKUIPageComponent

@property (nonatomic, readonly) SKUIShelfViewElement *viewElement;

- (long long)componentType;
- (id)initWithViewElement:(id)arg1;

@end
