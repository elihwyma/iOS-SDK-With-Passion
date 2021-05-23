/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class FIUIWorkoutLapLengthIndexTranslator, NSTimer, UIButton;

@interface FIUIValueAdjustmentButtonController : NSObject

{
    NSTimer *_plusMinusActionTimer;
    long long _plusMinusActionRepeatCount;
    _Bool _didUserUpdatevalue;
    double _value;
    double _valueStepIncremement;
    double _minumumStepValueIncrement;
    double _maxValue;
    double _minValue;
    CDUnknownBlockType _valueUpdateHandler;
    FIUIWorkoutLapLengthIndexTranslator *_lapLengthIndexTranslator;
    CDUnknownBlockType _buttonStateUpdateHandler;
    UIButton *_incrementButton;
    UIButton *_decrementButton;
}

@property (nonatomic) double value;
@property (nonatomic) double valueStepIncremement;
@property (nonatomic) double minumumStepValueIncrement;
@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (copy, nonatomic) CDUnknownBlockType valueUpdateHandler;
@property (retain, nonatomic) FIUIWorkoutLapLengthIndexTranslator *lapLengthIndexTranslator;
@property (copy, nonatomic) CDUnknownBlockType buttonStateUpdateHandler;
@property (nonatomic) _Bool didUserUpdatevalue;
@property (weak, nonatomic, readonly) UIButton *incrementButton;
@property (weak, nonatomic, readonly) UIButton *decrementButton;

- (void)_plusMinusButtonTouchDown:(id)arg1;
- (void)_plusMinusButtonTouchUpInside:(id)arg1;
- (void)_plusMinusButtonTouchCancel:(id)arg1;
- (void)_updateButton:(id)arg1 forPressedState:(_Bool)arg2;
- (void)_plusMinusActionTimerDidFire:(id)arg1;
- (void)_performPlusMinusActionWithButton:(id)arg1;
- (void)_performPlusMinusActionWithIndexTranslationForButton:(id)arg1;
- (void)_incrementRepeatCount;
- (void)_notifyValueChanged;
- (void)_updatePlusMinusButtonStates;
- (void)setIncrementButton:(id)arg1 decrementButton:(id)arg2;

@end
