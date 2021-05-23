/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBAssistantController, SBHomeGestureSettings, SBModalUIFluidDismissGestureWorkspaceTransaction, SBModalUIFluidDismissPanGestureRecognizer, SBTransientOverlayPresentationManager;

@interface SBModalUIFluidDismissGestureManager : NSObject <Swift>

{
    SBTransientOverlayPresentationManager *_transientOverlayPresentationManager;
    SBAssistantController *_assistantController;
    SBHomeGestureSettings *_homeGestureSettings;
    SBModalUIFluidDismissPanGestureRecognizer *_bottomEdgeRecognizer;
    SBModalUIFluidDismissGestureWorkspaceTransaction *_currentTransaction;
}

@property (nonatomic, readonly) SBTransientOverlayPresentationManager *transientOverlayPresentationManager;
@property (nonatomic, readonly) SBAssistantController *assistantController;
@property (retain, nonatomic) SBHomeGestureSettings *homeGestureSettings;
@property (retain, nonatomic) SBModalUIFluidDismissPanGestureRecognizer *bottomEdgeRecognizer;
@property (retain, nonatomic) SBModalUIFluidDismissGestureWorkspaceTransaction *currentTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)transactionDidComplete:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)_handleBottomEdgeGestureBegan:(id)arg1;
- (void)_handleBottomEdgeGestureChanged:(id)arg1;
- (void)_handleBottomEdgeGestureEnded:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (id)initWithTransientOverlayPresentationManager:(id)arg1 assistantController:(id)arg2;
- (void)_handleBottomEdgeGesture:(id)arg1;
- (long long)touchInterfaceOrientationForRecognizer:(id)arg1;
- (long long)_dismissalTypeForCurrentContext;

@end
