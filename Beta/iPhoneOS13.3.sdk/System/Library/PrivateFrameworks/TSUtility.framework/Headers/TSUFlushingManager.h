/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class NSCondition, NSThread, TSUMemoryWatcher, TSUPointerKeyDictionary, TSURetainedPointerKeyDictionary;

@protocol TSUFlushable;

@interface TSUFlushingManager : NSObject

{
    TSURetainedPointerKeyDictionary *_objects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *>> *_sortedObjects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *>> *_sortedNewObjects;
    TSUPointerKeyDictionary *_inactiveObjects;
    unsigned int _clock;
    _Bool _alwaysFlushing;
    _Bool _stopFlushing;
    _Bool _stopFlushingWhenQueueEmpty;
    _Bool _isFlushing;
    id <TSUFlushable> _flushingObject;
    NSCondition *_cond;
    NSCondition *_isFlushingCond;
    TSUMemoryWatcher *_memoryWatcher;
    NSThread *_bgThread;
    unsigned long long _backgroundTransitionTaskId;
    unsigned long long _activeBgThreadTask;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
+ (id)_singletonAlloc;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)didReceiveMemoryWarning;
- (void)_startFlushingObjects;
- (void)_stopFlushingObjects;
- (void)advanceClock;
- (void)_didUseObject:(id)arg1;
- (struct TSUFlushableObjectInfo *)eraseInfoForObject:(id)arg1;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo *)arg1;
- (void)_flushAllEligible;
- (void)_bgTaskStarted;
- (void)_backgroundThread:(id)arg1;
- (void)_bgThreadActive;
- (void)_bgThreadInactive;
- (void)_bgTaskFinished;
- (_Bool)isNewObject:(struct TSUFlushableObjectInfo *)arg1;
- (void)transferNewObjects;
- (void)protectObject:(id)arg1;
- (void)stopProtectingObject:(id)arg1;
- (void)doneWithObject:(id)arg1;
- (void)unsafeToFlush:(id)arg1;
- (void)safeToFlush:(id)arg1 wasAccessed:(_Bool)arg2;
- (void)memoryLevelIncreased:(int)arg1 was:(int)arg2;
- (void)memoryLevelDecreased:(int)arg1 was:(int)arg2;
- (_Bool)controlsActiveObject:(id)arg1;
- (_Bool)controlsInactiveObject:(id)arg1;

@end
