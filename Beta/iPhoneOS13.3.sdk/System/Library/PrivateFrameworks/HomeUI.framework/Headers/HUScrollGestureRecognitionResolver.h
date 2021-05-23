/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet;

@interface HUScrollGestureRecognitionResolver : NSObject

{
    double _conflictingGestureActivationDelay;
    NSMutableSet *_mutablePanGestureReocgnizers;
    NSMutableSet *_conflictingGestureStates;
}

@property (nonatomic, readonly) NSMutableSet *mutablePanGestureReocgnizers;
@property (nonatomic, readonly) NSMutableSet *conflictingGestureStates;
@property (nonatomic) double conflictingGestureActivationDelay;
@property (nonatomic, readonly) NSSet *panGestureRecognizers;
@property (nonatomic, readonly) NSSet *conflictingGestureRecognizers;

- (id)init;
- (void)dealloc;
- (void)_handlePanGesture:(id)arg1;
- (void)removePanGestureRecognizer:(id)arg1;
- (void)_removeConflictingGestureState:(id)arg1;
- (id)_stateForConflictingGestureRecognizer:(id)arg1;
- (void)_handleConflictingGesture:(id)arg1;
- (void)_cancelConflictingGestures;
- (void)_clearSimultaenouslyRecognizedGestures;
- (void)_activeTimerDidFireForOtherGesture:(id)arg1;
- (void)addPanGestureRecognizer:(id)arg1;
- (void)addConflictingGestureRecognizer:(id)arg1;
- (void)removeConflictingGestureRecognizer:(id)arg1;

@end
