/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableArray;

@protocol POPAnimatorDelegate;

@interface POPAnimator : NSObject

{
    CADisplayLink *_displayLink;
    list_20bec4f3 _list;
    struct __CFDictionary *_dict;
    NSMutableArray *_observers;
    list_20bec4f3 _pendingList;
    struct __CFRunLoopObserver *_pendingListObserver;
    double _slowMotionStartTime;
    double _slowMotionLastTime;
    double _slowMotionAccumulator;
    double _beginTime;
    struct _opaque_pthread_mutex_t _lock;
    _Bool _disableDisplayLink;
    id <POPAnimatorDelegate> _delegate;
}

@property (nonatomic) _Bool disableDisplayLink;
@property (nonatomic) double beginTime;
@property (weak, nonatomic) id <POPAnimatorDelegate> delegate;
@property (nonatomic, readonly) double refreshPeriod;

+ (id)sharedAnimator;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id).cxx_construct;
- (id)observers;
- (void)render;
- (void)addAnimation:(id)arg1 forObject:(id)arg2 key:(id)arg3;
- (void)removeAllAnimationsForObject:(id)arg1;
- (void)removeAnimationForObject:(id)arg1 key:(id)arg2;
- (id)animationKeysForObject:(id)arg1;
- (id)animationForObject:(id)arg1 key:(id)arg2;
- (void)_clearPendingListObserver;
- (double)_currentRenderTime;
- (void)_renderTime:(double)arg1 items:(list_20bec4f3)arg2;
- (void)_processPendingList;
- (void)_renderTime:(double)arg1 item:(shared_ptr_1553c9f8)arg2;
- (void)removeAnimationForObject:(id)arg1 key:(id)arg2 cleanupDict:(_Bool)arg3;
- (void)_scheduleProcessPendingList;
- (void)renderTime:(double)arg1;

@end
