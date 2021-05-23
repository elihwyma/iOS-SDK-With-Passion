/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSMutableArray.h>

@class NSArray;

@interface TSPLazyReferenceArray : NSMutableArray

{
    NSMutableArray *_references;
    unsigned long long _mutations;
}

@property (nonatomic, readonly) NSArray *references;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)addObject:(id)arg1;
- (id)initWithArray:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (id)objectsAtIndexes:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromArray:(id)arg2 range:(struct _NSRange)arg3;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromArray:(id)arg2;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (id)referenceAtIndex:(unsigned long long)arg1;
- (void)addReference:(id)arg1;

@end
