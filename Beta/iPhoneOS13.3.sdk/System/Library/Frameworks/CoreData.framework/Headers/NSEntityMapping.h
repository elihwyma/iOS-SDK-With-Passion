/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSExpression, NSMutableArray, NSString;

@interface NSEntityMapping : NSObject

{
    void *_reserved;
    void *_reserved1;
    NSDictionary *_mappingsByName;
    NSString *_name;
    unsigned long long _mappingType;
    NSString *_sourceEntityName;
    NSData *_sourceEntityVersionHash;
    NSString *_destinationEntityName;
    NSData *_destinationEntityVersionHash;
    NSExpression *_sourceExpression;
    NSDictionary *_userInfo;
    NSString *_entityMigrationPolicyClassName;
    NSMutableArray *_attributeMappings;
    NSMutableArray *_relationshipMappings;
    struct __entityMappingFlags {
        unsigned int _isInUse:1;
        unsigned int _changeIsSchemaCompatible:1;
        unsigned int _reservedEntityMapping:30;
    } _entityMappingFlags;
}

@property (copy) NSString *name;
@property unsigned long long mappingType;
@property (copy) NSString *sourceEntityName;
@property (copy) NSData *sourceEntityVersionHash;
@property (copy) NSString *destinationEntityName;
@property (copy) NSData *destinationEntityVersionHash;
@property (retain) NSArray *attributeMappings;
@property (retain) NSArray *relationshipMappings;
@property (retain) NSExpression *sourceExpression;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (copy) NSString *entityMigrationPolicyClassName;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEditable;
- (void)_setIsEditable:(_Bool)arg1;
- (void)_setChangeIsSchemaCompatible:(_Bool)arg1;
- (void)_throwIfNotEditable;
- (void)_createCachesAndOptimizeState;
- (id)_initWithSourceEntityDescription:(id)arg1 destinationEntityDescription:(id)arg2;
- (id)_mappingsByName;
- (id)_migrationPolicy;
- (void)_addAttributeMapping:(id)arg1;
- (void)_addRelationshipMapping:(id)arg1;
- (_Bool)_hasInferredMappingNeedingValidation;
- (_Bool)_changeIsSchemaCompatible;

@end
