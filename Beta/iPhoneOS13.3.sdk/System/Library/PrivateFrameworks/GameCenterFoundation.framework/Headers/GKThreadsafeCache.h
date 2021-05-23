/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKLinkedList, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface GKThreadsafeCache : NSObject

{
    NSMutableDictionary *_dictionary;
    NSMutableDictionary *_missingEntryQueues;
    GKLinkedList *_cacheList;
    unsigned long long _maxCount;
    unsigned long long _count;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (retain, nonatomic) GKLinkedList *cacheList;
@property (retain, nonatomic) NSMutableDictionary *missingEntryQueues;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithName:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)objectForKey:(id)arg1 withMissingHandler:(CDUnknownBlockType)arg2;
- (id)internalObjectForKey:(id)arg1;
- (void)internalSetObject:(id)arg1 forKey:(id)arg2;

@end
