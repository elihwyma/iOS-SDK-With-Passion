/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentStoreRequest.h>

@class NSNotification, NSSet;

@interface NSSaveChangesRequest : NSPersistentStoreRequest

{
    NSSet *_insertedObjects;
    NSSet *_updatedObjects;
    NSSet *_deletedObjects;
    NSSet *_optimisticallyLockedObjects;
    unsigned long long _flags;
    NSNotification *_mutatedObjectIDsNotification;
}

@property (readonly) NSSet *insertedObjects;
@property (readonly) NSSet *updatedObjects;
@property (readonly) NSSet *deletedObjects;
@property (readonly) NSSet *lockedObjects;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)hasChanges;
- (unsigned long long)requestType;
- (_Bool)_secureOperation;
- (void)_setSecureOperation:(_Bool)arg1;
- (void)_setChangedObjectIDsNotification:(id)arg1;
- (id)initWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3 lockedObjects:(id)arg4;
- (BOOL)_retryHandlerCount;
- (void)_setRetryHandlerCount:(BOOL)arg1;
- (id)_changedObjectIDsNotification;
- (void)setDeletedObjects:(id)arg1;

@end
