/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

#import <CoreData/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSEntityDescription, NSMutableDictionary, NSString;

@interface NSPropertyDescription : NSObject <Swift>

{
    NSString *_versionHashModifier;
    NSData *_versionHash;
    NSEntityDescription *_entity;
    NSString *_name;
    NSArray *_validationPredicates;
    NSArray *_validationWarnings;
    struct _NSExtraPropertyIVars *_extraIvars;
    NSMutableDictionary *_userInfo;
    struct __propertyDescriptionFlags {
        unsigned int _isReadOnly:1;
        unsigned int _isTransient:1;
        unsigned int _isOptional:1;
        unsigned int _isIndexed:1;
        unsigned int _skipValidation:1;
        unsigned int _isIndexedBySpotlight:1;
        unsigned int _isStoredInExternalRecord:1;
        unsigned int _extraIvarsAreInDataBlob:1;
        unsigned int _isOrdered:1;
        unsigned int _hasMaxValueInExtraIvars:1;
        unsigned int _hasMinValueInExtraIvars:1;
        unsigned int _storeBinaryDataExternally:1;
        unsigned int _preserveValueOnDelete:1;
        unsigned int _isTriggerBacked:1;
        unsigned int _isFileBackedFuture:1;
        unsigned int _reservedPropertyDescription:1;
    } _propertyDescriptionFlags;
    short _entitysReferenceIDForProperty;
}

@property (nonatomic, readonly) NSEntityDescription *entity;
@property (copy, nonatomic) NSString *name;
@property (getter=isOptional) _Bool optional;
@property (getter=isTransient) _Bool transient;
@property (readonly) NSArray *validationPredicates;
@property (readonly) NSArray *validationWarnings;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (getter=isIndexed) _Bool indexed;
@property (copy, readonly) NSData *versionHash;
@property (copy) NSString *versionHashModifier;
@property (getter=isIndexedBySpotlight) _Bool indexedBySpotlight;
@property (getter=isStoredInExternalRecord) _Bool storedInExternalRecord;
@property (copy) NSString *renamingIdentifier;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_isOrdered;
- (void)setReadOnly:(_Bool)arg1;
- (id)_initWithName:(id)arg1;
- (_Bool)_isEditable;
- (unsigned long long)_propertyType;
- (_Bool)_isRelationship;
- (_Bool)_isFileBackedFuture;
- (_Bool)_storeBinaryDataExternally;
- (_Bool)isReadOnly;
- (long long)_entitysReferenceID;
- (_Bool)_isSchemaEqual:(id)arg1;
- (id)_underlyingProperty;
- (struct _NSExtraPropertyIVars *)_extraIVars;
- (void)_throwIfNotEditable;
- (_Bool)_hasMinValueInExtraIvars;
- (_Bool)_hasMaxValueInExtraIvars;
- (_Bool)_preserveValueOnDelete;
- (_Bool)_isTriggerBacked;
- (id)_rawValidationPredicates;
- (id)_rawValidationWarnings;
- (_Bool)_comparePredicatesAndWarnings:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (void)_replaceValidationPredicates:(id)arg1 andWarnings:(id)arg2;
- (_Bool)_nonPredicateValidateValue:(id *)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id *)arg4;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (void)_appendPropertyFieldsToData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6;
- (_Bool)_epsilonEquals:(id)arg1 rhs:(id)arg2 withFlags:(int)arg3;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (void)_initializeExtraIVars;
- (void)_setEntity:(id)arg1;
- (void)_setEntityAndMaintainIndices:(id)arg1;
- (void)setElementID:(id)arg1;
- (id)elementID;
- (void)_setEntitysReferenceID:(long long)arg1;
- (void)_stripForMigration;
- (void)_restoreValidation;
- (_Bool)_skipValidation;
- (_Bool)_isToManyRelationship;
- (void)setValidationPredicates:(id)arg1 withValidationWarnings:(id)arg2;
- (void)_setOrdered:(_Bool)arg1;
- (_Bool)isSpotlightIndexed;
- (void)setSpotlightIndexed:(_Bool)arg1;
- (_Bool)isStoredInTruthFile;
- (void)setStoredInTruthFile:(_Bool)arg1;
- (_Bool)isStoredInTruth;
- (void)setStoredInTruth:(_Bool)arg1;

@end
