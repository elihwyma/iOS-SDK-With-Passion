/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class FMReadWriteLock, NSMutableDictionary;

@interface FMConcurrentMutableDictionary : NSObject

{
    NSMutableDictionary *_underlyingDictionary;
    FMReadWriteLock *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *underlyingDictionary;
@property (retain, nonatomic) FMReadWriteLock *lock;
@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (id)replaceObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)nativeDictionary;
- (id)objectForKey:(id)arg1 withConstructor:(CDUnknownBlockType)arg2;
- (id)popObjectforKey:(id)arg1;

@end
