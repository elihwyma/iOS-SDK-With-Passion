//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKMainEventHandler.h>


@class AKPanGestureRecognizer, AKRotationGestureRecognizer, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface AKMainEventHandler_iOS : AKMainEventHandler <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_tapRecognizer;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UILongPressGestureRecognizer *_pressRecognizer;
    AKPanGestureRecognizer *_panRecognizer;
    AKRotationGestureRecognizer *_rotationRecognizer;
    double _lastRotationAngleInRotationGesture;
}

@property double lastRotationAngleInRotationGesture; // @synthesize lastRotationAngleInRotationGesture=_lastRotationAngleInRotationGesture;
@property(retain) AKRotationGestureRecognizer *rotationRecognizer; // @synthesize rotationRecognizer=_rotationRecognizer;
@property(retain) AKPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(retain) UILongPressGestureRecognizer *pressRecognizer; // @synthesize pressRecognizer=_pressRecognizer;
@property(retain) UITapGestureRecognizer *doubleTapRecognizer; // @synthesize doubleTapRecognizer=_doubleTapRecognizer;
@property(retain) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
// - (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)arg1 orRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_penDrawingQuiesced;
- (void)forwardRecognizerToMainHandleEvent:(id)arg1;
- (void)teardown;
- (id)initWithController:(id)arg1;

@end

