/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSPropertyDescription, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLProperty : NSObject

{
    NSPropertyDescription *_propertyDescription;
    NSSQLEntity *_entity;
    unsigned char _propertyType;
    unsigned char _sqlType;
    unsigned short _fetchIndex;
    unsigned short _slot;
    struct _sqlColumnFlags {
        unsigned int _allowAliasing:1;
        unsigned int _unique:1;
        unsigned int _constrained:1;
        unsigned int _backedByTrigger:1;
        unsigned int _isDerivedAttribute:1;
        unsigned int _reservedFlags:11;
    } _flags;
}

@property (nonatomic, getter=isConstrained) _Bool constrained;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)name;
- (id)entity;
- (id)propertyDescription;
- (_Bool)isToMany;
- (_Bool)isToOne;
- (_Bool)isManyToMany;
- (id)columnName;
- (unsigned char)propertyType;
- (_Bool)isAttribute;
- (unsigned char)sqlType;
- (unsigned int)slot;
- (id)externalName;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (_Bool)isColumn;
- (_Bool)isRelationship;
- (void)setEntityForReadOnlyFetch:(id)arg1;
- (_Bool)isUnique;
- (_Bool)isPrimaryKey;
- (void)setPropertyDescription:(id)arg1;
- (_Bool)isForeignKey;
- (_Bool)isForeignEntityKey;
- (_Bool)isForeignOrderKey;
- (_Bool)isEntityKey;
- (_Bool)isOptLockKey;

@end
