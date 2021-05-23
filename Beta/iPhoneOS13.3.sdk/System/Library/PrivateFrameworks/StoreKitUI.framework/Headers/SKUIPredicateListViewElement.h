/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSPredicate;

@interface SKUIPredicateListViewElement : SKUIViewElement

{
    NSPredicate *_compoundEntityValuePredicate;
}

@property (copy, nonatomic, readonly) NSArray *predicateViewElements;
@property (nonatomic, readonly) NSPredicate *compoundEntityValuePredicate;

- (id)applyUpdatesWithElement:(id)arg1;
- (void)_enumeratePredicateViewElementsUsingBlock:(CDUnknownBlockType)arg1;

@end
