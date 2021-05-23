/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INCodableLocalizationTable, INSchema, NSArray, NSDictionary, NSMutableDictionary, NSOrderedSet, NSString;

@interface INCodableDescription : NSObject <Swift>

{
    NSMutableDictionary *_attributesByName;
    INCodableLocalizationTable *_localizationTable;
    INCodableLocalizationTable *_customLocalizationTable;
    NSString *_attributeKeyPrefix;
    NSString *_attributesKeyPrefix;
    NSString *_attributeMetadataKeyPrefix;
    NSString *_attributePromptDialogKeyPrefix;
    NSString *_attributeRelationshipKeyPrefix;
    NSString *_attributeUnsupportedReasonKeyPrefix;
    NSMutableDictionary *_dictionaryKeysForCacheGroup;
    NSString *_attributeTagKey;
    NSString *_attributeDisplayPriorityKey;
    INSchema *_schema;
    NSString *_intentDefinitionNamespace;
    NSString *_className;
    NSString *_typeName;
    NSDictionary *_attributes;
    NSOrderedSet *_displayOrderedAttributes;
}

@property (retain, nonatomic) NSMutableDictionary *_dictionaryKeysForCacheGroup;
@property (copy, nonatomic, setter=_setLocalizationTable:) INCodableLocalizationTable *_localizationTable;
@property (copy, nonatomic, setter=_setCustomLocalizationTable:) INCodableLocalizationTable *_customLocalizationTable;
@property (copy, nonatomic, readonly) NSString *_attributeKeyPrefix;
@property (copy, nonatomic, readonly) NSString *_attributeMetadataKeyPrefix;
@property (copy, nonatomic, readonly) NSString *_attributePromptDialogKeyPrefix;
@property (copy, nonatomic, readonly) NSString *_attributeRelationshipKeyPrefix;
@property (copy, nonatomic, readonly) NSString *_attributeUnsupportedReasonKeyPrefix;
@property (copy, nonatomic, readonly) NSString *_attributesKeyPrefix;
@property (copy, nonatomic, readonly) NSString *_attributeTagKey;
@property (copy, nonatomic, readonly) NSString *_attributeDisplayPriorityKey;
@property (weak, nonatomic) INSchema *schema;
@property (copy, nonatomic) NSString *intentDefinitionNamespace;
@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic) NSString *typeName;
@property (copy, nonatomic) NSDictionary *attributes;
@property (copy, nonatomic) NSOrderedSet *displayOrderedAttributes;
@property (nonatomic, readonly) NSArray *referencedCodableEnums;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *cacheGroup;
@property (copy, nonatomic, readonly) NSString *keyPrefix;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)_ignoredAttributeTags;
- (id)_dictionaryKeyForKeyPath:(id)arg1 object:(id)arg2;
- (void)_updateAttributesByName;
- (id)attributeByKeyPath:(id)arg1;
- (id)attributeByName:(id)arg1;
- (unsigned long long)highestAttributeTag;

@end
