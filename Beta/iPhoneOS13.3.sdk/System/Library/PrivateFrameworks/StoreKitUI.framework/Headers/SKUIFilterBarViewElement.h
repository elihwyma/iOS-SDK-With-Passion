/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIDividerViewElement;

__attribute__((visibility("hidden")))
@interface SKUIFilterBarViewElement : SKUIViewElement

@property (nonatomic, readonly) SKUIDividerViewElement *bottomDivider;

- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (long long)pageComponentType;
- (id)childViewElementsForAlignment:(unsigned long long)arg1;

@end
