/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSManagedObjectID, NSRelationshipDescription, NSSQLModel;

__attribute__((visibility("hidden")))
@interface NSSQLRelationshipFaultRequestContext : NSSQLStoreRequestContext

{
    NSRelationshipDescription *_relationship;
    NSManagedObjectID *_objectID;
}

@property (nonatomic, readonly) NSRelationshipDescription *relationship;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) NSSQLModel *sqlModel;

- (void)dealloc;
- (_Bool)executeRequestCore:(id *)arg1;
- (id)initWithObjectID:(id)arg1 relationship:(id)arg2 context:(id)arg3 sqlCore:(id)arg4;

@end
