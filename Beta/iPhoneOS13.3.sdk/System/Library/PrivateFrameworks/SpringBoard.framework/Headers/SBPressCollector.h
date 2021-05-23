/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSTimer, NSMutableArray, SBPressTuple;

@protocol SBPressCollectorDelegate;

@interface SBPressCollector : NSObject

{
    BSTimer *_hardEndTimer;
    NSMutableArray *_currentSequence;
    SBPressTuple *_currentTuple;
    double _lastHandledDownEvent;
    double _lastHandledUpEvent;
    id <SBPressCollectorDelegate> _delegate;
    double _maxPressDownDuration;
    double _maxPressUpDuration;
}

@property (weak, nonatomic) id <SBPressCollectorDelegate> delegate;
@property (nonatomic) double maxPressDownDuration;
@property (nonatomic) double maxPressUpDuration;

+ (double)currentTimeStamp;

- (id)init;
- (void)_end;
- (void)_reset;
- (void)registerPressDownWithTimeStamp:(double)arg1;
- (void)registerPressUpWithTimeStamp:(double)arg1;
- (void)_resetTimersIfNecessary;
- (void)_handlePressUpWithTimeStamp:(double)arg1;
- (void)_handlePressDownWithTimeStamp:(double)arg1;
- (void)_fireEndTimerWithDelay:(double)arg1 isButtonDown:(_Bool)arg2;
- (void)endCurrentSequence;

@end
