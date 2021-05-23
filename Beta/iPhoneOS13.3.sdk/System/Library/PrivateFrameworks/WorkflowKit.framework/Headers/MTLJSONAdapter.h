/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMapTable;

@protocol MTLJSONSerializing;

@interface MTLJSONAdapter : NSObject

{
    Class _modelClass;
    NSDictionary *_JSONKeyPathsByPropertyKey;
    NSDictionary *_valueTransformersByPropertyKey;
    NSMapTable *_JSONAdaptersByModelClass;
}

@property (nonatomic, readonly) id <MTLJSONSerializing> model;
@property (nonatomic, readonly) Class modelClass;
@property (copy, nonatomic, readonly) NSDictionary *JSONKeyPathsByPropertyKey;
@property (copy, nonatomic, readonly) NSDictionary *valueTransformersByPropertyKey;
@property (nonatomic, readonly) NSMapTable *JSONAdaptersByModelClass;

+ (id)JSONDictionaryFromModel:(id)arg1 error:(id *)arg2;
+ (id)valueTransformersForModelClass:(Class)arg1;
+ (id)modelOfClass:(Class)arg1 fromJSONDictionary:(id)arg2 error:(id *)arg3;
+ (id)modelsOfClass:(Class)arg1 fromJSONArray:(id)arg2 error:(id *)arg3;
+ (id)JSONArrayFromModels:(id)arg1 error:(id *)arg2;
+ (id)transformerForModelPropertiesOfClass:(Class)arg1;
+ (id)transformerForModelPropertiesOfObjCType:(const char *)arg1;
+ (id)dictionaryTransformerWithModelClass:(Class)arg1;
+ (id)arrayTransformerWithModelClass:(Class)arg1;
+ (id)NSURLJSONTransformer;
+ (id)NSUUIDJSONTransformer;
+ (id)JSONArrayFromModels:(id)arg1;
+ (id)JSONDictionaryFromModel:(id)arg1;

- (id)init;
- (id)serializablePropertyKeys:(id)arg1 forModel:(id)arg2;
- (id)initWithModelClass:(Class)arg1;
- (id)JSONDictionaryFromModel:(id)arg1 error:(id *)arg2;
- (id)modelFromJSONDictionary:(id)arg1 error:(id *)arg2;
- (id)JSONAdapterForModelClass:(Class)arg1 error:(id *)arg2;

@end
