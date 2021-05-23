/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPropertyDescription.h>

@class NSData, NSString;

@interface NSAttributeDescription : NSPropertyDescription

{
    unsigned short _type;
    Class _attributeValueClass;
    NSString *_valueTransformerName;
    NSString *_attributeValueClassName;
    id _defaultValue;
}

@property _Bool preserveValueOnDeletionInPersistentHistory;
@property _Bool isFileBackedFuture;
@property unsigned long long attributeType;
@property (copy) NSString *attributeValueClassName;
@property (retain) id defaultValue;
@property (copy, readonly) NSData *versionHash;
@property (copy) NSString *valueTransformerName;
@property _Bool allowsExternalBinaryDataStorage;
@property _Bool preservesValueInHistoryOnDeletion;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)stringForAttributeType:(unsigned long long)arg1;
+ (id)_classNameForType:(unsigned long long)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)_propertyType;
- (_Bool)_isSchemaEqual:(id)arg1;
- (_Bool)storesBinaryDataExternally;
- (_Bool)isIndexed;
- (void)_sortOutDefaultNumericValuesBecauseDoublesAndFloatsDontCompareEqualAndThatBreaksTests;
- (_Bool)_attributeTypeIsSchemaEqual:(unsigned long long)arg1;
- (id)validationPredicates;
- (id)validationWarnings;
- (void)_setPreserveValueOnDeletionInPersistentHistory:(_Bool)arg1;
- (Class)_attributeValueClass;
- (id)_rawValidationPredicates;
- (id)_rawValidationWarnings;
- (long long)_canConvertPredicate:(id)arg1 andWarning:(id)arg2;
- (_Bool)_comparePredicatesAndWarnings:(id)arg1;
- (_Bool)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (_Bool)_nonPredicateValidateValue:(id *)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id *)arg4;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (id)_initWithName:(id)arg1 type:(unsigned long long)arg2 withClassName:(id)arg3;
- (id)_initWithName:(id)arg1 type:(unsigned long long)arg2;
- (_Bool)_epsilonEquals:(id)arg1 rhs:(id)arg2 withFlags:(int)arg3;
- (id)_initWithType:(unsigned long long)arg1;
- (void)setStoresBinaryDataExternally:(_Bool)arg1;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;

@end
