/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, SKUIButtonViewElement;

__attribute__((visibility("hidden")))
@interface SKUIHeaderViewElement : SKUIViewElement

@property (nonatomic, readonly) SKUIButtonViewElement *button;
@property (nonatomic, readonly) NSArray *titleLabels;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)pageComponentType;

@end
