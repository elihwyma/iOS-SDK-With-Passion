/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, TSDAutoscroll, TSDInteractiveCanvasController;

@interface TSDDynamicOperationController : NSObject

{
    TSDInteractiveCanvasController *mICC;
    _Bool mOperationIsDynamic;
    _Bool mResetGuides;
    _Bool mSupportsAlignmentGuides;
    _Bool mPossibleDynamicOperation;
    NSMutableSet *mReps;
    NSMutableSet *mAllTransformedReps;
    TSDAutoscroll *mAutoscroll;
}

@property (nonatomic, readonly) NSSet *allTransformedReps;
@property (nonatomic, readonly) NSSet *currentlyTransformingReps;

- (void)dealloc;
- (void)endOperation;
- (void)cancelOperation;
- (void)beginOperation;
- (void)handleGestureRecognizer:(id)arg1;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (_Bool)isInOperation;
- (_Bool)isInPossibleDynamicOperation;
- (void)stopTransformingReps:(id)arg1;
- (void)startTransformingReps:(id)arg1;
- (void)p_beginDynamicOperationForReps:(id)arg1;
- (void)p_controllingTMDidResetInOperation:(id)arg1;
- (void)p_cleanupOperation;
- (void)p_resetGuidesForCleanup:(_Bool)arg1;
- (void)beginPossibleDynamicOperation;
- (_Bool)isOperationDynamic;
- (void)handleTrackerManipulator:(id)arg1;
- (void)invalidateGuides;

@end
