/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class AXPIFingerController;

@interface CACSpokenCommandGestureManager : NSObject

{
    AXPIFingerController *_fingerController;
    _Bool _didStartDrag;
    _Bool _shouldHoldStartPointForDrag;
    _Bool _didStart3DTouch;
    struct CGPoint _defaultPortraitUpPointForGestures;
    struct CGPoint _startPointForDrag;
    struct CGPoint _startPointFor3DTouch;
}

@property (nonatomic, readonly) AXPIFingerController *fingerController;
@property (nonatomic) _Bool didStartDrag;
@property (nonatomic) struct CGPoint startPointForDrag;
@property (nonatomic) _Bool shouldHoldStartPointForDrag;
@property (nonatomic) _Bool didStart3DTouch;
@property (nonatomic) struct CGPoint startPointFor3DTouch;
@property (nonatomic, readonly) _Bool isInDragGesture;
@property (nonatomic, readonly) _Bool isIn3DTouchGesture;
@property (nonatomic, readonly) _Bool isInGesture;
@property (nonatomic) struct CGPoint defaultPortraitUpPointForGestures;

+ (id)sharedManager;

- (void)resetState;
- (void)performGesture:(id)arg1;
- (void)performPinchOutGestureAtPoint:(struct CGPoint)arg1;
- (void)performPinchInGestureAtPoint:(struct CGPoint)arg1;
- (void)performRotateRightGestureAtPoint:(struct CGPoint)arg1;
- (void)performRotateLeftGestureAtPoint:(struct CGPoint)arg1;
- (void)reveal3DTouchActions;
- (void)performSwipeGestureAtPoint:(struct CGPoint)arg1 inDirection:(long long)arg2 fast:(_Bool)arg3 numberOfFingers:(unsigned long long)arg4;
- (void)performDoubleTapAtPoint:(struct CGPoint)arg1 numberOfFingers:(unsigned long long)arg2;
- (void)performTapAtPoint:(struct CGPoint)arg1 numberOfFingers:(unsigned long long)arg2;
- (void)startDragAtPoint:(struct CGPoint)arg1;
- (void)startHoldAndDragAtPoint:(struct CGPoint)arg1;
- (void)endDragAtPoint:(struct CGPoint)arg1;
- (void)performLongPressAtPoint:(struct CGPoint)arg1 numberOfFingers:(unsigned long long)arg2;
- (void)maximize3DTouch;
- (void)_performGesture:(id)arg1;
- (struct CGPoint)_pointForGestureGivenPortraitUpPoint:(struct CGPoint)arg1;
- (struct CGPoint)_pointForGestureGivenPortraitUpPoint:(struct CGPoint)arg1 shouldToggleSelectionOptions:(_Bool)arg2;
- (struct CGPoint)_fingerControllerPointForPortraitUpPoint:(struct CGPoint)arg1;
- (void)_startDragWithHold:(_Bool)arg1 atPoint:(struct CGPoint)arg2;
- (void)_clearStateFlags;
- (void)_adjust3DTouchToForce:(double)arg1;
- (void)start3DTouchAtPoint:(struct CGPoint)arg1;

@end
