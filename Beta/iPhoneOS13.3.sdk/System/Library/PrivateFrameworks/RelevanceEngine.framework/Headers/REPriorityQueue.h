/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface REPriorityQueue : NSObject

{
    struct __CFBinaryHeap *_binaryHeap;
    CDUnknownBlockType _comparator;
}

@property (nonatomic, readonly) CDUnknownBlockType comparator;
@property (nonatomic, readonly) unsigned long long count;
@property (copy, nonatomic, readonly) NSArray *allObjects;
@property (nonatomic, readonly) id minimumObject;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllObjects;
- (_Bool)containsObject:(id)arg1;
- (void)insertObject:(id)arg1;
- (id)initWithComparator:(CDUnknownBlockType)arg1;
- (void)enumerateObjects:(CDUnknownBlockType)arg1;
- (void)removeMinimumObject;

@end
