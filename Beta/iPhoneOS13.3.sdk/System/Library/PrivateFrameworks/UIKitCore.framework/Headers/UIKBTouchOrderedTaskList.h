/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSUUID, NSValue;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UIKBTouchOrderedTaskList : NSObject

{
    NSUUID *_touchUUID;
    NSObject<OS_dispatch_queue> *_touchStateTasksQueue;
    NSMutableArray *_touchStateTasks;
    NSValue *_currentTouchPoint;
    _Bool _ignoredOnBegin;
    unsigned long long _pathIndex;
    double _originalStartTime;
}

@property (retain, nonatomic, readonly) NSUUID *touchUUID;
@property (nonatomic, readonly) unsigned long long pathIndex;
@property (nonatomic, readonly) double originalStartTime;
@property (retain, nonatomic, readonly) NSValue *currentTouchPoint;
@property (nonatomic) _Bool ignoredOnBegin;
@property (nonatomic, readonly) _Bool hasTasks;

+ (id)taskListForTouchUUID:(id)arg1 withPathIndex:(unsigned long long)arg2;

- (void)dealloc;
- (void)addTask:(id)arg1;
- (id)initWithTouchUUID:(id)arg1 withPathIndex:(unsigned long long)arg2;
- (_Bool)isExecutingFirstTask;
- (void)removeTasksMatchingFilter:(CDUnknownBlockType)arg1;
- (_Bool)executeTasksInView:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)firstTouchStateForUITouchPhase:(long long)arg1;

@end
