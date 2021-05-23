/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSArray.h>

@interface NSArray (TSUAdditions)

+ (id)arrayWithInts:(int *)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithCGFloats:(double *)arg1 count:(unsigned long long)arg2;

- (id)tsu_arrayByReversingOrder;
- (id)tsu_arrayOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)tsu_containsObjectIdenticalTo:(id)arg1;
- (id)initWithCGFloats:(double *)arg1 count:(unsigned long long)arg2;
- (id)tsu_map:(CDUnknownBlockType)arg1;
- (id)initWithInts:(int *)arg1 count:(unsigned long long)arg2;
- (id)tsu_mutableArrayByMakingObjectsPerformSelector:(SEL)arg1;
- (id)tsu_objectBeforeObjectIdenticalTo:(id)arg1;
- (id)tsu_objectAfterObjectIdenticalTo:(id)arg1;
- (unsigned long long)tsu_indexOfSmallestObject;
- (id)tsu_indexesOfObjects:(id)arg1;
- (void)tsu_makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)tsu_makeObjectsPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)tsu_makeObjectsPerformSelectorIfImplemented:(SEL)arg1;
- (id)tsu_arrayWithObjectsInSet:(id)arg1;
- (id)tsu_intersectionWithArray:(id)arg1;
- (id)tsu_arrayByRemovingObjectsInArray:(id)arg1;
- (id)tsu_arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)tsu_arrayByMakingObjectsPerformSelector:(SEL)arg1;
- (void)tsu_enumerateSnapshotObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)tsu_arrayOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)tsu_arrayByTransformingWithBlock:(CDUnknownBlockType)arg1;
- (id)tsu_arrayByFlattening;
- (void)appendJsonStringToString:(id)arg1;

@end
