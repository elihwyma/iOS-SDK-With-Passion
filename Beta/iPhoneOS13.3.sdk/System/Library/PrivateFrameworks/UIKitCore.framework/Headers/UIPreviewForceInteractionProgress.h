/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInteractionProgress.h>

@class NSObservation, NSString, _UIForceLevelClassifier, _UITouchForceObservable;

@interface UIPreviewForceInteractionProgress : UIInteractionProgress

{
    _UITouchForceObservable *_observable;
    long long _targetState;
    long long _minimumState;
    _Bool _updateMinimumStateWithTargetState;
    _UIForceLevelClassifier *_classifier;
    NSObservation *_classifierObservation;
    _Bool _enteredMinimumState;
    _Bool _didEnd;
    NSObservation *_progressObservation;
    NSObservation *_targetStateUpdateObservation;
    NSObservation *_gestureBeganObservation;
    _Bool _completesAtTargetState;
}

@property (nonatomic, setter=_setTargetState:) long long _targetState;
@property (nonatomic, setter=_setClassifierShouldRespectSystemGestureTouchFiltering:) _Bool _classifierShouldRespectSystemGestureTouchFiltering;
@property (nonatomic) _Bool completesAtTargetState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)didEnd;
- (_Bool)enteredMinimumState;
- (id)initWithView:(id)arg1 targetState:(long long)arg2;
- (void)_setGestureBeginObservable:(id)arg1;
- (void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(long long)arg2;
- (void)_forceLevelClassifierDidReset:(id)arg1;
- (id)initWithGestureRecognizer:(id)arg1;
- (id)initWithView:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3;
- (id)_initWithObservable:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3;
- (id)initWithGestureRecognizer:(id)arg1 minimumRequiredState:(long long)arg2;
- (void)_gestureRecognizerBegan:(_Bool)arg1;
- (id)_initWithObservable:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3 useLinearClassifier:(_Bool)arg4;
- (void)_installProgressObserver;
- (id)_initWithView:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3 useLinearClassifier:(_Bool)arg4;

@end
