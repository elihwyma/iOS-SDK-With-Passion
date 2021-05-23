/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HUQuickControlPanningContext, UIGestureRecognizer;

@protocol HUQuickControlSliderGestureTransformerDelegate;

@interface HUQuickControlSliderGestureTransformer : NSObject

{
    _Bool _ignoreTouches;
    _Bool _hasRecognizedSignificantSliderValueChange;
    id <HUQuickControlSliderGestureTransformerDelegate> _delegate;
    UIGestureRecognizer *_gestureRecognizer;
    HUQuickControlPanningContext *_context;
    double _referenceSliderValue;
    double _currentSliderValue;
    double _accumulatedDragDistance;
    struct CGPoint _referenceTouchLocation;
    struct CGPoint _lastTouchLocation;
}

@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property (nonatomic) double referenceSliderValue;
@property (nonatomic) double currentSliderValue;
@property (nonatomic) struct CGPoint referenceTouchLocation;
@property (nonatomic) struct CGPoint lastTouchLocation;
@property (nonatomic) double accumulatedDragDistance;
@property (nonatomic) _Bool hasRecognizedSignificantSliderValueChange;
@property (weak, nonatomic) id <HUQuickControlSliderGestureTransformerDelegate> delegate;
@property (nonatomic, readonly) HUQuickControlPanningContext *context;
@property (nonatomic) _Bool ignoreTouches;

- (void)dealloc;
- (id)initWithGestureRecognizer:(id)arg1 context:(id)arg2;
- (void)_handleGesturePan:(id)arg1;
- (_Bool)_shouldIgnoreAllGestures;
- (void)_handleSliderValuePan:(struct CGPoint)arg1;
- (double)_rawSliderValueForLocation:(struct CGPoint)arg1;

@end
