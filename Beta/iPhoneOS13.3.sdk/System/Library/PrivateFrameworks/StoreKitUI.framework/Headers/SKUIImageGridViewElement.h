/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

__attribute__((visibility("hidden")))
@interface SKUIImageGridViewElement : SKUIViewElement

{
    struct CGSize _size;
}

@property (nonatomic, readonly) long long columnCount;
@property (nonatomic, readonly) struct UIEdgeInsets contentInset;
@property (nonatomic, readonly) struct CGSize size;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
