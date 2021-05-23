/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIEvent.h>

@class NSHashTable, NSMutableSet, NSSet, UIView, UIWindow, _UIDragEventSample, _UIDropSessionImpl, _UIInternalDraggingSessionDestination, _UIInternalDraggingSessionSource;

__attribute__((visibility("hidden")))
@interface UIDragEvent : UIEvent

{
    _UIDragEventSample *_currentSample;
    UIView *_previousEventView;
    UIView *_eventView;
    NSMutableSet *_beginningGestureRecognizers;
    NSMutableSet *_updatingGestureRecognizers;
    NSMutableSet *_exitingGestureRecognizers;
    NSMutableSet *_endingGestureRecognizers;
    NSMutableSet *_ignoredGestureRecognizers;
    NSMutableSet *_dynamicGestureRecognizers;
    NSHashTable *_viewsQueriedForDynamicGestures;
    NSMutableSet *_dynamicInteractions;
    _Bool _ignoreDragEnd;
    _Bool _needsHitTestReset;
    _Bool _dragFailed;
    CDUnknownBlockType _dragFailedCallback;
    unsigned int _dragSessionID;
    _UIInternalDraggingSessionDestination *_sessionDestination;
    _UIInternalDraggingSessionSource *_sessionSource;
}

@property (nonatomic, readonly, getter=_hitTestedView) UIView *hitTestedView;
@property (nonatomic, readonly, getter=_dynamicGestureRecognizers) NSSet *dynamicGestureRecognizers;
@property (nonatomic, readonly, getter=_sessionDestination) _UIInternalDraggingSessionDestination *sessionDestination;
@property (nonatomic, readonly, getter=_sessionSource) _UIInternalDraggingSessionSource *sessionSource;
@property (nonatomic, readonly, getter=_dropSession) _UIDropSessionImpl *dropSession;
@property (nonatomic, readonly) UIWindow *eventWindow;
@property (nonatomic, readonly) _Bool isPolicyDriven;
@property (nonatomic, readonly) _Bool hasActiveGestureRecognizers;
@property (nonatomic, readonly, getter=_touchRoutingPolicyContextID) unsigned int touchRoutingPolicyContextID;
@property (nonatomic, readonly, getter=_windowServerHitTestContextID) unsigned int windowServerHitTestContextID;
@property (nonatomic, readonly) unsigned int dragSessionID;
@property (nonatomic, readonly) struct CGPoint locationInSceneReferenceSpace;
@property (nonatomic, readonly) _Bool isFromAccessibilitySession;

+ (_Bool)_isSessionIDValid:(unsigned int)arg1;
+ (void)_invalidateSessionID:(unsigned int)arg1;

- (void)dealloc;
- (long long)type;
- (void)_reset;
- (struct CGPoint)locationInView:(id)arg1;
- (id)_windows;
- (void)_sendIfNeeded;
- (void)_setNeedsHitTestReset;
- (void)_dragFailedWithCallback:(CDUnknownBlockType)arg1;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (_Bool)_sendEventToGestureRecognizer:(id)arg1;
- (void)_wasDeliveredToGestureRecognizers;
- (void)_ignoreGestureRecognizer:(id)arg1;
- (void)_removeGestureRecognizer:(id)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_updateFromCurrentSample;
- (_Bool)_shouldSendEvent;
- (void)_updateGesturesFromCurrentSample;
- (id)_updatingDropGestureRecognizers;
- (void)_ignoreDragEnd;
- (_Bool)_isReadyForReset;
- (id)initWithDragSessionID:(unsigned int)arg1 environment:(id)arg2;
- (_Bool)_isTouchRoutingPolicyBased;

@end
