/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NFUnfairLock, NSArray, NSDictionary, NSMutableDictionary;

@interface FCThreadSafeMutableDictionary : NSObject

{
    NFUnfairLock *_lock;
    NSMutableDictionary *_dictionary;
}

@property (readonly) unsigned long long count;
@property (readonly) _Bool isEmpty;
@property (copy, nonatomic, readonly) NSArray *allKeys;
@property (copy, nonatomic, readonly) NSArray *allValues;
@property (copy, nonatomic, readonly) NSDictionary *readOnlyDictionary;

- (id)init;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (void)readWriteWithAccessor:(CDUnknownBlockType)arg1;

@end
