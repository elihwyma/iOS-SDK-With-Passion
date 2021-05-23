/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKDispatchQueue, NSCache, NSCountedSet, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface CKDispatchCache : NSObject

{
    NSCache *_objectCache;
    NSCountedSet *_pendingKeys;
    NSMutableDictionary *_pendingGroups;
    CKDispatchQueue *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_lockQueue;
    long long _dispatchPriority;
}

@property (retain, nonatomic) NSCache *objectCache;
@property (retain, nonatomic) NSCountedSet *pendingKeys;
@property (retain, nonatomic) NSMutableDictionary *pendingGroups;
@property (retain, nonatomic) CKDispatchQueue *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue;
@property (nonatomic) long long dispatchPriority;

- (id)init;
- (void)dealloc;
- (void)resume;
- (void)suspend;
- (void)systemApplicationDidSuspend;
- (void)emptyCache;
- (void)clearQueue;
- (id)cachedObjectForKey:(id)arg1;
- (void)enqueueGenerationBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 withPriority:(long long)arg3 forKey:(id)arg4;
- (id)initWithCacheLimit:(unsigned long long)arg1 dispatchPriority:(long long)arg2;
- (void)beginGeneratingForKey:(id)arg1;
- (void)_endGeneratingForKeyUnlocked:(id)arg1;
- (void)_beginGeneratingForKeyUnlocked:(id)arg1;
- (void)setCachedObject:(id)arg1 forKey:(id)arg2;
- (void)enqueueBlock:(CDUnknownBlockType)arg1 withPriority:(long long)arg2;
- (_Bool)isGeneratingForKey:(id)arg1;
- (void)endGeneratingForKey:(id)arg1;
- (_Bool)waitOnGenerationForKey:(id)arg1;

@end
