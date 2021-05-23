/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIItemViewElement.h>

@class NSArray, SKUIImageViewElement;

__attribute__((visibility("hidden")))
@interface SKUIBrowseItemViewElement : SKUIItemViewElement

{
    _Bool _expands;
}

@property (nonatomic, readonly) SKUIImageViewElement *decorationImage;
@property (nonatomic, readonly) _Bool expands;
@property (nonatomic, readonly) NSArray *metadata;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)pageComponentType;

@end
