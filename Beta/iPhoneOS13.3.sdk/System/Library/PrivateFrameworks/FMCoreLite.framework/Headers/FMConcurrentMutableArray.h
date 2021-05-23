/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class FMReadWriteLock, NSMutableArray;

@interface FMConcurrentMutableArray : NSObject

{
    NSMutableArray *_underlyingArray;
    FMReadWriteLock *_lock;
}

@property (retain, nonatomic) NSMutableArray *underlyingArray;
@property (retain, nonatomic) FMReadWriteLock *lock;
@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (void)addObject:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)nativeArray;

@end
