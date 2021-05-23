/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMapTable, NSMutableArray;

@protocol UIWebTouchEventsGestureRecognizerDelegate;

@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer

{
    id _touchTarget;
    SEL _touchAction;
    id <UIWebTouchEventsGestureRecognizerDelegate> _webTouchDelegate;
    _Bool _passedHitTest;
    _Bool _defaultPrevented;
    _Bool _dispatchingTouchEvents;
    _Bool _isPotentialTap;
    _Bool _wasExplicitlyCancelled;
    double _originalGestureDistance;
    double _originalGestureAngle;
    struct _UIWebTouchEvent _lastTouchEvent;
    NSMapTable *_activeTouchesByIdentifier;
}

@property (nonatomic, getter=isDefaultPrevented) _Bool defaultPrevented;
@property (nonatomic, readonly) const struct _UIWebTouchEvent *lastTouchEvent;
@property (nonatomic, readonly, getter=isDispatchingTouchEvents) _Bool dispatchingTouchEvents;
@property (nonatomic, readonly) NSMapTable *activeTouchesByIdentifier;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) struct CGPoint locationInWindow;
@property (nonatomic, readonly) NSMutableArray *touchLocations;
@property (nonatomic, readonly) NSMutableArray *touchIdentifiers;
@property (nonatomic, readonly) NSMutableArray *touchPhases;
@property (nonatomic, readonly) _Bool inJavaScriptGesture;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) double rotation;

+ (void)initialize;
+ (_Bool)_shouldDefaultToTouches;

- (void)dealloc;
- (void)cancel;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)performAction;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 touchDelegate:(id)arg3;
- (void)_updateTapStateWithTouches:(id)arg1;
- (void)_updateTapStateWithTouches:(id)arg1 type:(int)arg2;
- (void)_recordTouches:(id)arg1 type:(int)arg2;
- (void)_processTouches:(id)arg1 withEvent:(id)arg2 type:(int)arg3;

@end
