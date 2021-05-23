/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIPredicateListViewElement;

__attribute__((visibility("hidden")))
@interface SKUITemplateDefinitionViewElement : SKUIViewElement

@property (nonatomic, readonly) SKUIPredicateListViewElement *predicateListViewElement;
@property (nonatomic, readonly) SKUIViewElement *contentViewElement;
@property (copy, nonatomic, readonly) NSString *definitionMode;
@property (copy, nonatomic, readonly) NSString *definitionType;

@end
