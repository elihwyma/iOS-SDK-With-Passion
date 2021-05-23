/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSString, SKUILimitListViewElement, SKUIPredicateListViewElement, SKUISortDescriptorListViewElement;

@interface SKUIAbstractEntityProviderViewElement : SKUIViewElement

{
    NSString *_entityTypeString;
    NSArray *_prefetchedProperties;
}

@property (copy, nonatomic, readonly) NSString *entityTypeString;
@property (copy, nonatomic, readonly) NSArray *prefetchedProperties;
@property (nonatomic, readonly) SKUILimitListViewElement *limitListViewElement;
@property (nonatomic, readonly) SKUIPredicateListViewElement *predicateListViewElement;
@property (nonatomic, readonly) SKUISortDescriptorListViewElement *sortDescriptorListViewElement;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
