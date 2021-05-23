/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface JTThreadSafeDictionary : NSObject

{
    NSMutableDictionary *_dict;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

@property (retain, nonatomic) NSMutableDictionary *dict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly) unsigned long long count;
@property (readonly) NSArray *allKeys;
@property (readonly) NSArray *allValues;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)removeAllObjects;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setDictionary:(id)arg1;
- (id)valueForKey:(id)arg1;

@end
