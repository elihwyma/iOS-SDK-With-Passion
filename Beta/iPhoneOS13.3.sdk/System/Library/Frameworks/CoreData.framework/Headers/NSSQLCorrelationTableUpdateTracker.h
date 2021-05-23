/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSSQLManyToMany;

__attribute__((visibility("hidden")))
@interface NSSQLCorrelationTableUpdateTracker : NSObject

{
    NSSQLManyToMany *_relationship;
    id _inserts;
    id _deletes;
    id _masterUpdates;
    id _otherUpdates;
}

@property (nonatomic, readonly) NSSQLManyToMany *relationship;

- (void)dealloc;
- (_Bool)hasInserts;
- (void)enumerateInsertsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasDeletes;
- (void)enumerateDeletesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasMasterReorders;
- (void)enumerateMasterReordersUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMasterReordersPart2UsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasReorders;
- (void)enumerateReordersUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateInsertsOIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateReordersOIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMasterReordersOIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDeletesOIDsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_organizeValues:(id)arg1;
- (id)initForRelationship:(id)arg1;
- (void)trackInserts:(id)arg1 deletes:(id)arg2 reorders:(id)arg3 forObjectWithID:(id)arg4;
- (void)trackReorders:(id)arg1 forObjectWithID:(id)arg2;

@end
