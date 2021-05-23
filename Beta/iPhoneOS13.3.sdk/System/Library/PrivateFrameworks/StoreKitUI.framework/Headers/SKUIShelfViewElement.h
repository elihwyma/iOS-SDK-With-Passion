/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIShelfViewElement : SKUIViewElement

{
    long long _numberOfRows;
    NSString *_slideshowTitle;
    CDUnknownBlockType _shelfItemViewElementValidator;
}

@property (nonatomic, readonly) long long numberOfRows;
@property (nonatomic, readonly) NSString *slideshowTitle;
@property (copy, nonatomic) CDUnknownBlockType shelfItemViewElementValidator;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (long long)pageComponentType;

@end
