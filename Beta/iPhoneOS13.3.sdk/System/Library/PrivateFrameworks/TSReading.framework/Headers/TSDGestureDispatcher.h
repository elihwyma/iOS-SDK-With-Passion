/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, TSDInteractiveCanvasController, TSUNoCopyDictionary;

@interface TSDGestureDispatcher : NSObject

{
    TSDInteractiveCanvasController *_interactiveCanvasController;
    NSMutableArray *_simultaneitySets;
    TSUNoCopyDictionary *_priorityMap;
    _Bool _runningTargetHandleGesture;
    NSMutableArray *_gesturesInFlight;
    NSMutableArray *_targetsInFlight;
    _Bool _gestureDidFire;
}

@property (nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)teardown;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleGesture:(id)arg1;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (void)didReset:(id)arg1;
- (void)gestureRemovedFromView:(id)arg1;
- (_Bool)gestureActionShouldBegin:(id)arg1;
- (id)p_getGestureTarget:(id)arg1;
- (void)p_gestureNoLongerInFlight:(id)arg1;
- (_Bool)handleGesture:(id)arg1 withTarget:(id)arg2;
- (void)allowSimultaneousRecognitionByRecognizers:(id)arg1;
- (void)prioritizeRecognizer:(id)arg1 overRecognizer:(id)arg2;

@end
