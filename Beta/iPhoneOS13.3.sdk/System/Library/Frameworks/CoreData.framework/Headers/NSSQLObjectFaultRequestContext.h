/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSFetchRequest, NSManagedObjectID;

__attribute__((visibility("hidden")))
@interface NSSQLObjectFaultRequestContext : NSSQLStoreRequestContext

{
    NSManagedObjectID *_objectID;
    NSFetchRequest *_fetchRequest;
    _Bool _forConflictAnalysis;
}

@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic) _Bool forConflictAnalysis;

- (void)dealloc;
- (id)fetchRequest;
- (_Bool)executeRequestCore:(id *)arg1;
- (id)initWithObjectID:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (id)createFetchRequestContext;

@end
