/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDateComponentsFormatter, NSMapTable, NSString;

@protocol HFStringGenerator;

@interface HFFormattedTimeRemainingValue : NSObject

{
    NSMapTable *_observationBlocks;
    NSDate *_value;
    NSDateComponentsFormatter *_formatter;
    id <HFStringGenerator> _currentFormattedValue;
}

@property (nonatomic, readonly) NSMapTable *observationBlocks;
@property (retain, nonatomic) id <HFStringGenerator> currentFormattedValue;
@property (nonatomic, readonly) NSDate *value;
@property (nonatomic, readonly) NSDateComponentsFormatter *formatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultFormatter;
+ (id)valueWithRemainingDuration:(double)arg1 relativeToDate:(id)arg2;

- (void)_stopTimer;
- (double)_timeRemaining;
- (id)initWithFireDate:(id)arg1;
- (id)initWithFireDate:(id)arg1 formatter:(id)arg2;
- (id)_generateFormattedValue;
- (void)_updateTimerState;
- (void)countdownTimerDidFire:(id)arg1;
- (id)observeFormattedValueChangesWithBlock:(CDUnknownBlockType)arg1;

@end
