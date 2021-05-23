/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSDictionary, NSMutableDictionary;

@interface INSchema : NSObject <Swift>

{
    _Bool _system;
    NSMutableDictionary *_schemaDictionary;
    NSMutableDictionary *_parameterCombinationDictionary;
    NSMutableDictionary *_configurableParameterCombinationDictionary;
    NSDictionary *_typeForClassDictionary;
    NSMutableDictionary *_enums;
    NSMutableDictionary *_types;
}

@property (nonatomic, readonly) NSMutableDictionary *_schemaDictionary;
@property (nonatomic, readonly) NSMutableDictionary *_parameterCombinationDictionary;
@property (nonatomic, readonly) NSMutableDictionary *_configurableParameterCombinationDictionary;
@property (nonatomic, readonly) NSDictionary *_typeForClassDictionary;
@property (nonatomic, readonly, getter=isSystem) _Bool system;
@property (nonatomic, readonly) NSMutableDictionary *_enums;
@property (nonatomic, readonly) NSMutableDictionary *_types;

+ (_Bool)supportsSecureCoding;
+ (id)_cache;
+ (id)systemSchema;
+ (_Bool)_defaultSchemaCanSupportIntent:(id)arg1;
+ (id)defaultSchema;
+ (id)_defaultSchemaForBundle:(id)arg1 contentOptions:(unsigned long long)arg2;
+ (id)_schemaWithIntentDefinitionURLs:(id)arg1 bundleIdentifier:(id)arg2 contentOptions:(unsigned long long)arg3;
+ (id)_defaultSchemaForBundle:(id)arg1;
+ (void)_resetCache;
+ (id)_supportedTypesDictionary;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)intentCodableDescriptionWithIntentClassName:(id)arg1;
- (id)intentResponseCodableDescriptionWithIntentClassName:(id)arg1;
- (id)intentResponseCodableDescriptionWithIntentResponseClassName:(id)arg1;
- (id)_initWithContentsOfURLs:(id)arg1 bundleIdentifier:(id)arg2;
- (id)_initWithContentsOfURLs:(id)arg1 bundleIdentifier:(id)arg2 contentOptions:(unsigned long long)arg3;
- (id)_initWithContentsOfURLs:(id)arg1;
- (id)intentWithName:(id)arg1;
- (id)_codableDescriptionWithDictionary:(id)arg1 intentDefinitionNamespace:(id)arg2 filename:(id)arg3 bundleIdentifier:(id)arg4 codableDescriptionClass:(Class)arg5;
- (id)_typesWithDictionary:(id)arg1 filename:(id)arg2 bundleIdentifier:(id)arg3;
- (id)_intentWithDictionary:(id)arg1 intentDefinitionNamespace:(id)arg2 filename:(id)arg3 bundleIdentifier:(id)arg4 referencedCodableDescriptions:(id)arg5;
- (id)_intentResponseWithDictionary:(id)arg1 intentDefinitionNamespace:(id)arg2 className:(id)arg3 filename:(id)arg4 bundleIdentifier:(id)arg5 referencedCodableDescriptions:(id)arg6;
- (void)_loadIntentsFromArrayOfDictionaries:(id)arg1 intentDefinitionNamespace:(id)arg2 fromFile:(id)arg3 bundleIdentifier:(id)arg4 referencedCodableDescriptions:(id)arg5 contentOptions:(unsigned long long)arg6;
- (void)_setObjectDescription:(id)arg1 forClass:(Class)arg2 identifier:(id)arg3;
- (id)_objectDescriptionForClass:(Class)arg1 identifier:(id)arg2;
- (id)_parameterCombinationsForClass:(Class)arg1;
- (id)_parameterCombinationsForClassName:(id)arg1;
- (id)_configurableParameterCombinationsForClassName:(id)arg1;
- (id)_classNamesForClass:(Class)arg1;
- (id)_codableDescriptionsForClass:(Class)arg1;
- (id)_objectDescriptionForTypeOfClass:(Class)arg1;
- (id)dictionaryRepresentationForIntent:(id)arg1;
- (id)dictionaryRepresentationForIntent:(id)arg1 language:(id)arg2;
- (id)_dictionaryRepresentationForIntentCodableDescription:(id)arg1 intentResponseCodableDescription:(id)arg2 appInfo:(id)arg3 language:(id)arg4;

@end
