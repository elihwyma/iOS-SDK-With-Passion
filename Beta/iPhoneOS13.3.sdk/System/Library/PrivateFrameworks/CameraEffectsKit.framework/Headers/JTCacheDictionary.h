/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@protocol OS_dispatch_queue;

@interface JTCacheDictionary : NSObject

{
    unsigned long long _capacity;
    NSMutableDictionary *_dictionary;
    NSMutableOrderedSet *_keys;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *dictionary;
@property (retain, nonatomic) NSMutableOrderedSet *keys;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cacheQueue;
@property (nonatomic) unsigned long long capacity;
@property (readonly) unsigned long long count;

- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)highMemoryWarning;
- (_Bool)JT_removeLeastRecentlyUsedIfAtCapacity;
- (void)JT_markRecentlyUsed:(id)arg1;

@end
