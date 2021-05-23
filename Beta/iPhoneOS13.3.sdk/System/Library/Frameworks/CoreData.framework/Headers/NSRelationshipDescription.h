/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPropertyDescription.h>

@class NSData, NSEntityDescription, NSString;

@interface NSRelationshipDescription : NSPropertyDescription

{
    void *_reserved5;
    void *_reserved6;
    NSEntityDescription *_destinationEntity;
    NSString *_lazyDestinationEntityName;
    NSRelationshipDescription *_inverseRelationship;
    NSString *_lazyInverseRelationshipName;
    unsigned long long _maxCount;
    unsigned long long _minCount;
    unsigned long long _deleteRule;
}

@property (nonatomic) NSEntityDescription *destinationEntity;
@property (nonatomic) NSRelationshipDescription *inverseRelationship;
@property unsigned long long maxCount;
@property unsigned long long minCount;
@property unsigned long long deleteRule;
@property (readonly, getter=isToMany) _Bool toMany;
@property (copy, readonly) NSData *versionHash;
@property (getter=isOrdered) _Bool ordered;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithName:(id)arg1;
- (unsigned long long)_propertyType;
- (_Bool)_isRelationship;
- (_Bool)_isSchemaEqual:(id)arg1;
- (_Bool)isIndexed;
- (void)_createCachesAndOptimizeState;
- (_Bool)_nonPredicateValidateValue:(id *)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id *)arg4;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (_Bool)_isToManyRelationship;
- (void)_updateInverse:(id)arg1;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2 proxyContext:(id)arg3;
- (_Bool)_validateValuesAreOfDestinationEntity:(id)arg1 source:(id)arg2;
- (void)_setLazyDestinationEntityName:(id)arg1;

@end
