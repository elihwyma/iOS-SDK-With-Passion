/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUJSModelObject.h>

@class NUSchema;

@protocol NUIdentifiable;

@interface NUJSSchemaObject : NUJSModelObject

@property (nonatomic, readonly) NUSchema *schema;
@property (nonatomic, readonly) id <NUIdentifiable> item;

+ (id)JSValueWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3;

- (_Bool)hasProperty:(id)arg1;
- (id)initWithModel:(id)arg1 representedObject:(id)arg2 context:(id)arg3;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (id)initWithWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3;

@end
