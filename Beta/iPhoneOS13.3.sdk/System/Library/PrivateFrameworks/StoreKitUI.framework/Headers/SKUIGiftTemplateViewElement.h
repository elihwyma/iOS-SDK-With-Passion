/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIItem;

__attribute__((visibility("hidden")))
@interface SKUIGiftTemplateViewElement : SKUIViewElement

{
    long long _giftType;
    NSString *_productBuyParams;
    long long _productItemIdentifier;
}

@property (nonatomic, readonly) long long giftType;
@property (nonatomic, readonly) SKUIItem *productItem;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
