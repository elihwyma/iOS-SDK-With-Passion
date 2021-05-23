/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLColumn.h>

@class NSSQLForeignKey, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLForeignOrderKey : NSSQLColumn

{
    NSString *_name;
    NSSQLForeignKey *_foreignKey;
}

- (void)dealloc;
- (id)name;
- (void)_setName:(id)arg1;
- (id)toOneRelationship;
- (id)foreignKey;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (id)initWithEntity:(id)arg1 foreignKey:(id)arg2;
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;
- (void)setFKForReadOnlyFetch:(id)arg1;

@end
