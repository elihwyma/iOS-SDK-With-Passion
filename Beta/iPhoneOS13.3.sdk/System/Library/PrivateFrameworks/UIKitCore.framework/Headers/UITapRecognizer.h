/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet;

@protocol UITapRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UITapRecognizer : NSObject <Swift>

{
    unsigned long long _numberOfTouchesRequired;
    unsigned long long _numberOfTapsRequired;
    NSMutableSet *_activeTouches;
    int _currentNumberOfTouches;
    int _currentNumberOfTaps;
    int _numberOfTouchesForCurrentTap;
    struct CGPoint _location;
    struct CGPoint _startPoint;
    struct CGPoint _digitizerLocation;
    double _allowableMovement;
    double _allowableSeparation;
    double _allowableTouchTimeSeparation;
    double _maximumSingleTapDuration;
    double _maximumTapDuration;
    double _maximumIntervalBetweenSuccessiveTaps;
    NSMutableArray *_touches;
    long long _strongestDirectionalAxis;
    double _strongestDirectionalForce;
    unsigned int _timerOn:1;
    unsigned int _multitouchTimerOn:1;
    unsigned int _noNewTouches:1;
    id <UITapRecognizerDelegate> _delegate;
    long long _exclusiveDirectionalAxis;
}

@property (weak, nonatomic) id <UITapRecognizerDelegate> delegate;
@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) double allowableMovement;
@property (nonatomic) double allowableSeparation;
@property (nonatomic) double allowableTouchTimeSeparation;
@property (nonatomic) double maximumSingleTapDuration;
@property (nonatomic) double maximumTapDuration;
@property (nonatomic) double maximumIntervalBetweenSuccessiveTaps;
@property (nonatomic) long long exclusiveDirectionalAxis;
@property (nonatomic, readonly) NSArray *touches;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_reset;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)_digitizerLocation;
- (struct CGPoint)_locationInSceneReferenceSpace;
- (_Bool)activeTouchesExceedAllowableSeparation;
- (void)clearMultitouchTimer;
- (void)multitouchExpired:(id)arg1;
- (void)startMultitouchTimer:(double)arg1;
- (void)clearTapTimer;
- (void)tooSlow:(id)arg1;
- (void)_updateDigitizerLocationForEvent:(id)arg1;
- (void)_beginInteraction;
- (double)_effectiveAllowableMovement;
- (void)_interactionEndedTouch:(_Bool)arg1;
- (void)startTapTimer:(double)arg1;
- (struct CGPoint)locationInView:(id)arg1 focusSystem:(id)arg2;

@end
