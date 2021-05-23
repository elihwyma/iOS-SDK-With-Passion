/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIHeaderViewElement;

__attribute__((visibility("hidden")))
@interface SKUIColumnViewElement : SKUIViewElement

{
    long long _columnSpan;
}

@property (nonatomic, readonly) long long columnSpan;
@property (nonatomic, readonly) SKUIHeaderViewElement *headerElement;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (long long)pageComponentType;

@end
