/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLColumn.h>

@class NSSQLToOne, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLForeignKey : NSSQLColumn

{
    NSString *_name;
    NSSQLToOne *_toOne;
}

- (void)dealloc;
- (id)name;
- (void)_setName:(id)arg1;
- (id)toOneRelationship;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)initWithEntity:(id)arg1 toOneRelationship:(id)arg2;

@end
