/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSTimer, NSMutableArray, SBPressSequenceValidator, SBPressTuple;

@protocol SBPressSequenceRecognizerDelegate;

@interface SBPressSequenceRecognizer : NSObject

{
    double _lastPressDownEvent;
    double _lastPressUpEvent;
    BSTimer *_watchdogTimer;
    SBPressTuple *_currentPressTuple;
    NSMutableArray *_currentSequence;
    id <SBPressSequenceRecognizerDelegate> _delegate;
    SBPressSequenceValidator *_validator;
    unsigned long long _numberOfPresses;
}

@property (weak, nonatomic) id <SBPressSequenceRecognizerDelegate> delegate;
@property (nonatomic, readonly) SBPressSequenceValidator *validator;
@property (nonatomic, readonly) unsigned long long numberOfPresses;

- (id)init;
- (void)_reset;
- (void)_complete;
- (void)registerPressDownWithTimestamp:(double)arg1;
- (void)registerPressUpWithTimestamp:(double)arg1;
- (void)resetWithNewValidator:(id)arg1 numberOfPresses:(unsigned long long)arg2;
- (id)initWithValidator:(id)arg1 numberOfPresses:(unsigned long long)arg2;
- (void)_handlePressDownWithTimestamp:(double)arg1;
- (void)_handlePressUpWithTimestamp:(double)arg1;
- (void)_resetAndNotify;
- (void)_resetWatchdogIfNecessary;
- (void)_resetAfterDelay:(double)arg1;
- (double)_watchdogTimeIntervalFromDelay:(double)arg1;

@end
