/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, PETScalarEventTracker;

@interface SBApplicationLayoutGestureMetric : NSObject

{
    PETScalarEventTracker *_pinGestureCompletionTracker;
    PETScalarEventTracker *_unpinGestureCompletionTracker;
    PETScalarEventTracker *_movePIPGestureCompletionTracker;
    PETScalarEventTracker *_moveSideGestureCompletionTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (unsigned long long)_moveActionForInitialFloatingConfig:(long long)arg1 finalConfig:(long long)arg2;
- (unsigned long long)_moveActionForInitialSpaceConfig:(long long)arg1 finalConfig:(long long)arg2;

@end
