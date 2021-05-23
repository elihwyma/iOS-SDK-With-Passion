/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface RLMSchema : NSObject <Swift>

{
    NSArray *_objectSchema;
    struct Schema _objectStoreSchema;
    NSMutableDictionary *_objectSchemaByName;
}

@property (retain, nonatomic) NSMutableDictionary *objectSchemaByName;
@property (copy, nonatomic) NSArray *objectSchema;

+ (id)partialPrivateSharedSchema;
+ (id)sharedSchemaForClass:(Class)arg1;
+ (id)sharedSchema;
+ (Class)classForString:(id)arg1;
+ (id)dynamicSchemaFromObjectStoreSchema:(const struct Schema *)arg1;
+ (id)schemaWithObjectClasses:(id)arg1;
+ (id)partialSharedSchema;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id).cxx_construct;
- (id)schemaForClassName:(id)arg1;
- (struct Schema)objectStoreCopy;
- (_Bool)isEqualToSchema:(id)arg1;

@end
