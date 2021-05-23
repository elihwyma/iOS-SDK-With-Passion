/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSCondition, NSThread, OITSUPointerKeyDictionary, OITSURetainedPointerKeyDictionary;

@protocol TSUiOSMemoryWarningFlushable;

__attribute__((visibility("hidden")))
@interface OITSUFlushingManager : NSObject

{
    OITSURetainedPointerKeyDictionary *_objects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *>> *_sortedObjects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *>> *_sortedNewObjects;
    OITSUPointerKeyDictionary *_inactiveObjects;
    unsigned int _clock;
    _Bool _alwaysFlushing;
    _Bool _stopFlushing;
    _Bool _stopFlushingWhenQueueEmpty;
    _Bool _isFlushing;
    id <TSUiOSMemoryWarningFlushable> _flushingObject;
    NSCondition *_cond;
    NSCondition *_isFlushingCond;
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
- (void)doneWithObject:(id)arg1;
- (void)unsafeToFlush:(id)arg1;
- (void)safeToFlush:(id)arg1 wasAccessed:(_Bool)arg2;
- (_Bool)controlsActiveObject:(id)arg1;
- (_Bool)controlsInactiveObject:(id)arg1;

@end
