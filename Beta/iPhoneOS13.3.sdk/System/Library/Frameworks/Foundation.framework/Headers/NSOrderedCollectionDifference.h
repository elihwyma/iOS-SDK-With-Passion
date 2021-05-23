/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet, _NSOrderedCollectionDifferenceMoves;

@interface NSOrderedCollectionDifference : NSObject

{
    NSIndexSet *_insertIndexes;
    NSArray *_insertObjects;
    NSIndexSet *_removeIndexes;
    NSArray *_removeObjects;
    _NSOrderedCollectionDifferenceMoves *_moves;
}

@property (readonly) NSArray *insertions;
@property (readonly) NSArray *removals;
@property (readonly) _Bool hasChanges;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithChanges:(id)arg1;
- (id)initWithInsertIndexes:(id)arg1 insertedObjects:(id)arg2 removeIndexes:(id)arg3 removedObjects:(id)arg4 additionalChanges:(id)arg5;
- (id)_changeWithType:(long long)arg1 index:(unsigned long long)arg2 object:(id)arg3;
- (id)inverseDifference;
- (id)differenceByTransformingChangesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithInsertIndexes:(id)arg1 insertedObjects:(id)arg2 removeIndexes:(id)arg3 removedObjects:(id)arg4;
- (void)_enumerateChangesInDiffOrderWithBlock:(CDUnknownBlockType)arg1;
- (id)invertedDifference;

@end
