/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSArray, NSIndexSet, NSString, PLManagedObject, PLObjectSnapshot;

@interface PLContainerChangeNotification : PLChangeNotification

{
    id _object;
    PLObjectSnapshot *_snapshot;
    NSArray *_changedObjects;
    _Bool _didCalculateDiffs;
    _Bool _shouldReload;
    NSIndexSet *_deletedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_movedIndexes;
    struct __CFArray *_movedFromIndexes;
    NSIndexSet *_changedIndexes;
    _Bool _countDidChange;
}

@property (nonatomic, setter=_setDidCalculateDiffs:) _Bool _didCalculateDiffs;
@property (retain, nonatomic, readonly) PLManagedObject *_managedObject;
@property (retain, nonatomic, readonly) NSString *_contentRelationshipName;
@property (retain, nonatomic, readonly) NSArray *_changedObjects;
@property (retain, nonatomic, readonly) PLObjectSnapshot *snapshot;
@property (retain, nonatomic, readonly) NSString *_diffDescription;
@property (nonatomic, readonly) _Bool countDidChange;
@property (nonatomic, readonly) NSIndexSet *movedIndexes;
@property (retain, nonatomic, readonly) struct __CFArray *movedFromIndexes;
@property (nonatomic, readonly) _Bool shouldReload;
@property (nonatomic, readonly) NSIndexSet *deletedIndexes;
@property (nonatomic, readonly) NSIndexSet *insertedIndexes;
@property (nonatomic, readonly) _Bool hasMoves;
@property (nonatomic, readonly) NSIndexSet *changedIndexes;
@property (nonatomic, readonly) NSIndexSet *changedIndexesRelativeToSnapshot;
@property (nonatomic, readonly) NSArray *deletedObjects;
@property (nonatomic, readonly) NSArray *insertedObjects;
@property (nonatomic, readonly) NSArray *changedObjects;

- (id)init;
- (void)dealloc;
- (id)name;
- (id)object;
- (id)_init;
- (void)_calculateDiffs;
- (_Bool)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (void)enumerateMovesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)snapshotIndexForContainedObject:(id)arg1;
- (void)_calculateDiffsIfNecessary;
- (id)_initWithObject:(id)arg1 snapshot:(id)arg2 changedObjects:(id)arg3;

@end
