/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteResultFactory, NSMutableArray;

@interface CNAutocompleteLocalContactResultTransformBuilder : NSObject

{
    NSMutableArray *_transforms;
    CNAutocompleteResultFactory *_factory;
    unsigned long long _builtContactType;
}

@property unsigned long long builtContactType;

+ (id)resultValueForContactPropertyValue:(id)arg1 propertyKey:(id)arg2 contact:(id)arg3;
+ (long long)addressTypeForProperty:(id)arg1;
+ (id)localContactBuilderWithResultFactory:(id)arg1;
+ (id)suggestedContactBuilderWithResultFactory:(id)arg1;
+ (id)serverContactBuilderWithResultFactory:(id)arg1;

- (CDUnknownBlockType)build;
- (id)initWithResultFactory:(id)arg1;
- (CDUnknownBlockType)makeTransformForProperty:(id)arg1;
- (CDUnknownBlockType)buildAggregateTransform;
- (void)addTransformForProperty:(id)arg1;

@end
