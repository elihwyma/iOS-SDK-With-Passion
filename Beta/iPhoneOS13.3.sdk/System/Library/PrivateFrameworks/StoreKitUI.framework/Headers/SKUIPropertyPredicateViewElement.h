/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPredicateViewElement.h>

@class NSString;

@interface SKUIPropertyPredicateViewElement : SKUIPredicateViewElement

{
    long long _comparisonType;
    NSString *_property;
    NSString *_value;
}

@property (nonatomic, readonly) long long comparisonType;
@property (copy, nonatomic, readonly) NSString *property;
@property (copy, nonatomic, readonly) NSString *value;

+ (_Bool)shouldParseChildDOMElements;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)entityValuePredicate;

@end
