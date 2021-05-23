/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUISortDescriptorViewElement : SKUIViewElement

{
    _Bool _ascending;
    NSString *_property;
}

@property (nonatomic, readonly, getter=isAscending) _Bool ascending;
@property (copy, nonatomic, readonly) NSString *property;

+ (_Bool)shouldParseChildDOMElements;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
