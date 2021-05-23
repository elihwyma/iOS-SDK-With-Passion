/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSValueTransformer.h>

@interface NSValueTransformer (MTLInversionAdditions)

+ (id)mtl_valueMappingTransformerWithDictionary:(id)arg1 defaultValue:(id)arg2 reverseDefaultValue:(id)arg3;
+ (id)mtl_transformerWithFormatter:(id)arg1 forObjectClass:(Class)arg2;
+ (id)mtl_dateTransformerWithDateFormat:(id)arg1 calendar:(id)arg2 locale:(id)arg3 timeZone:(id)arg4 defaultDate:(id)arg5;
+ (id)mtl_URLValueTransformer;
+ (id)mtl_UUIDValueTransformer;
+ (id)mtl_booleanValueTransformer;
+ (id)mtl_arrayMappingTransformerWithTransformer:(id)arg1;
+ (id)mtl_validatingTransformerForClass:(Class)arg1;
+ (id)mtl_valueMappingTransformerWithDictionary:(id)arg1;
+ (id)mtl_dateTransformerWithDateFormat:(id)arg1 locale:(id)arg2;
+ (id)mtl_numberTransformerWithNumberStyle:(unsigned long long)arg1 locale:(id)arg2;
+ (id)mtl_JSONDictionaryTransformerWithModelClass:(Class)arg1;
+ (id)mtl_JSONArrayTransformerWithModelClass:(Class)arg1;

- (id)mtl_invertedTransformer;

@end
