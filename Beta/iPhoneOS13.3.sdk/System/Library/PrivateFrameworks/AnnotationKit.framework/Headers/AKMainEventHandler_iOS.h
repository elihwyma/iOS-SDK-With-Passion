/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKMainEventHandler.h>

@class AKPanGestureRecognizer, AKRotationGestureRecognizer, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface AKMainEventHandler_iOS : AKMainEventHandler

{
    UITapGestureRecognizer *_tapRecognizer;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UILongPressGestureRecognizer *_pressRecognizer;
    AKPanGestureRecognizer *_panRecognizer;
    AKRotationGestureRecognizer *_rotationRecognizer;
    double _lastRotationAngleInRotationGesture;
}

@property (retain) UITapGestureRecognizer *tapRecognizer;
@property (retain) UITapGestureRecognizer *doubleTapRecognizer;
@property (retain) UILongPressGestureRecognizer *pressRecognizer;
@property (retain) AKPanGestureRecognizer *panRecognizer;
@property (retain) AKRotationGestureRecognizer *rotationRecognizer;
@property double lastRotationAngleInRotationGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)teardown;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithController:(id)arg1;
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)forwardRecognizerToMainHandleEvent:(id)arg1;
- (void)_penDrawingQuiesced;

@end
