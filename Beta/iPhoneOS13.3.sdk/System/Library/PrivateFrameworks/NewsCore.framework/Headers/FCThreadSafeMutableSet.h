/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NFUnfairLock, NSArray, NSMutableSet, NSSet;

@interface FCThreadSafeMutableSet : NSObject

{
    NFUnfairLock *_lock;
    NSMutableSet *_set;
}

@property (readonly) unsigned long long count;
@property (readonly) _Bool isEmpty;
@property (copy, readonly) NSArray *allObjects;
@property (copy, nonatomic, readonly) NSSet *readOnlySet;

- (id)init;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObjectsInSet:(id)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (void)readWriteWithAccessor:(CDUnknownBlockType)arg1;

@end
