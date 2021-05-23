/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIImageViewElement, SKUILabelViewElement;

__attribute__((visibility("hidden")))
@interface SKUIPhysicalCircleItemViewElement : SKUIViewElement

{
    long long _circleSize;
    NSString *_itemIdentifier;
}

@property (nonatomic, readonly) long long circleSize;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) SKUIImageViewElement *imageElement;
@property (nonatomic, readonly) SKUILabelViewElement *titleElement;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
