/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyStatistic.h>

@class TITypologyTimer;

@interface TITypologyStatisticTimeElapsed : TITypologyStatistic

{
    TITypologyTimer *_timer;
    TITypologyTimer *_adjustedTimer;
}

@property (retain, nonatomic) TITypologyTimer *timer;
@property (retain, nonatomic) TITypologyTimer *adjustedTimer;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, readonly) double adjustedElapsedTime;

- (id)init;
- (void)visitRecordKeyboardInput:(id)arg1;
- (id)structuredReport;
- (id)aggregateReport;

@end
