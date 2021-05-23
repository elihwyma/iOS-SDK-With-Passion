/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface JTThreadSafeArray : NSObject

{
    NSMutableArray *_array;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

@property (retain, nonatomic) NSMutableArray *array;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly) unsigned long long count;

- (id)init;
- (id)description;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (unsigned long long)indexOfObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)sortUsingSelector:(SEL)arg1;
- (void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)copyOfArray;

@end
