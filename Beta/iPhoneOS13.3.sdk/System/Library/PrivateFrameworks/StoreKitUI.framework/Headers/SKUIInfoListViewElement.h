/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

__attribute__((visibility("hidden")))
@interface SKUIInfoListViewElement : SKUIViewElement

{
    long long _infoListType;
}

@property (nonatomic, readonly) long long infoListType;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (long long)pageComponentType;

@end
