/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface WBSParsecSchema : NSObject

{
    _Bool _optional;
    CDUnknownBlockType _validationBlock;
    CDUnknownBlockType _specializedSchemaBlock;
    Class _expectedClass;
    NSError *_associatedError;
}

@property (copy, nonatomic) CDUnknownBlockType validationBlock;
@property (copy, nonatomic) CDUnknownBlockType specializedSchemaBlock;
@property (nonatomic, getter=isOptional) _Bool optional;
@property (retain, nonatomic) Class expectedClass;
@property (retain, nonatomic) NSError *associatedError;

+ (id)schemaWithExpectedClass:(Class)arg1;
+ (id)schemaForDictionaryWithStructure:(id)arg1;
+ (id)schemaForArrayWithElementSchema:(id)arg1;
+ (id)schemaForDictionaryWithStructure:(id)arg1 associatedError:(id)arg2;
+ (id)schemaWithExpectedClass:(Class)arg1 associatedError:(id)arg2 isOptional:(_Bool)arg3;
+ (id)schemaWithExpectedClass:(Class)arg1 associatedError:(id)arg2;
+ (id)schemaForArrayWithElementSchema:(id)arg1 associatedError:(id)arg2 isOptional:(_Bool)arg3;
+ (id)schemaForDictionaryWithStructure:(id)arg1 associatedError:(id)arg2 isOptional:(_Bool)arg3;
+ (id)schemaForArrayWithElementSchema:(id)arg1 associatedError:(id)arg2;
+ (id)schemaWithConstantValue:(id)arg1;

- (void)validateObject:(id)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (id)_initWithExpectedClass:(Class)arg1 associatedError:(id)arg2 isOptional:(_Bool)arg3;
- (_Bool)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;

@end
