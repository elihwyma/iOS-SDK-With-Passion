/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class BKSTouchStream, FBSDisplayIdentity, NSMutableSet, NSSet, NSString, UIGestureRecognizer, _UISystemGestureWindow;

__attribute__((visibility("hidden")))
@interface __UISystemGestureManager : NSObject <Swift>

{
    FBSDisplayIdentity *_rootDisplayIdentity;
    _UISystemGestureWindow *_systemGestureWindow;
    NSMutableSet *_recognizingGestures;
    NSMutableSet *_externalEdgeSwipeGestures;
    NSMutableSet *_internalGestures;
    NSMutableSet *_externalGestures;
    _Bool _achievedMaximumMovement;
    _Bool _didSeeExclusiveTouchBegan;
    _Bool _didProcessPendingSwipeBegan;
    UIGestureRecognizer *_exclusiveTouchGesture;
    UIGestureRecognizer *_pendingSwipeGesture;
    UIGestureRecognizer *_catchEdgeSwipeFailureGesture;
    BKSTouchStream *_touchStream;
}

@property (retain, nonatomic) UIGestureRecognizer *exclusiveTouchGesture;
@property (retain, nonatomic) UIGestureRecognizer *pendingSwipeGesture;
@property (retain, nonatomic) UIGestureRecognizer *catchEdgeSwipeFailureGesture;
@property (nonatomic) _Bool achievedMaximumMovement;
@property (nonatomic) _Bool didSeeExclusiveTouchBegan;
@property (nonatomic) _Bool didProcessPendingSwipeBegan;
@property (retain, nonatomic) BKSTouchStream *touchStream;
@property (copy, nonatomic, readonly) NSSet *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)exclusiveTouchGestureRecognizer:(id)arg1 achievedMaximumAbsoluteAccumulatedMovement:(_Bool)arg2 timestamp:(double)arg3;
- (void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2;
- (id)windowForSystemGestures;
- (void)clearTransform;
- (id)initWithRootDisplayIdentity:(id)arg1;
- (void)_exclusiveTouchGestureChanged:(id)arg1;
- (void)_pendingSwipeGestureChanged:(id)arg1;
- (void)_catchSwipeFailureGestureChanged:(id)arg1;
- (void)_removeInternalGestures;
- (void)_addInternalGesturesToView:(id)arg1;
- (void)_externalGestureRecognizerChanged:(id)arg1;
- (void)_handleTooMuchMovementWithLastTouchTimestamp:(double)arg1;
- (unsigned char)_dispatchModeForExternalGestureCompletion;
- (void)_exclusiveTouchGestureDidTerminate:(id)arg1;
- (void)_pendingSwipeGestureDidBegin:(id)arg1;
- (void)_pendingSwipeGestureDidTerminate:(id)arg1;
- (void)_failedPendingSwipe;

@end
