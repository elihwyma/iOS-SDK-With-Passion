/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUILimitViewElement.h>

@class NSString;

@interface SKUICountLimitViewElement : SKUILimitViewElement

{
    long long _limitValue;
    NSString *_entityTypeString;
}

@property (nonatomic, readonly) long long limitValue;
@property (copy, nonatomic, readonly) NSString *entityTypeString;

+ (_Bool)shouldParseChildDOMElements;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
