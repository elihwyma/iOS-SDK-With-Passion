/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLRelationship.h>

@class NSSQLForeignEntityKey, NSSQLForeignKey, NSSQLForeignOrderKey;

__attribute__((visibility("hidden")))
@interface NSSQLToOne : NSSQLRelationship

{
    NSSQLForeignKey *_foreignKey;
    NSSQLForeignEntityKey *_foreignEntityKey;
    NSSQLForeignOrderKey *_foreignOrderKey;
    _Bool _isVirtual;
}

- (void)dealloc;
- (id)description;
- (_Bool)isOptional;
- (id)columnName;
- (unsigned int)slot;
- (id)foreignEntityKey;
- (id)foreignKey;
- (id)foreignOrderKey;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (_Bool)isVirtual;
- (id)initWithEntity:(id)arg1 inverseToMany:(id)arg2;
- (id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)_setForeignOrderKey:(id)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 virtualForToMany:(id)arg3;

@end
