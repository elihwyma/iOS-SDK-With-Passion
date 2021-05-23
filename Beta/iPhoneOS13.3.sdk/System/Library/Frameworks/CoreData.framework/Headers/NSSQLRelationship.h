/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLProperty.h>

@class NSSQLEntity, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLRelationship : NSSQLProperty

{
    NSString *_name;
    NSSQLEntity *_destinationEntity;
    NSSQLRelationship *_inverse;
}

- (void)dealloc;
- (id)name;
- (_Bool)isOrdered;
- (void)_setName:(id)arg1;
- (id)destinationEntity;
- (id)inverseRelationship;
- (id)correlationTableName;
- (id)relationshipDescription;
- (id)foreignKey;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (id)sourceEntity;
- (void)_setInverseRelationship:(id)arg1;
- (id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)_setForeignOrderKey:(id)arg1;

@end
