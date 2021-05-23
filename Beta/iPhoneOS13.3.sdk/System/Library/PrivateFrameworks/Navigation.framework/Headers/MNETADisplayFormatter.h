/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNWeakTimer, NSDate, NSTimeZone;

@protocol MNETADisplayFormatterDelegate;

@interface MNETADisplayFormatter : NSObject

{
    id <MNETADisplayFormatterDelegate> _delegate;
    double _remainingTime;
    NSTimeZone *_timeZone;
    MNWeakTimer *_updateTimer;
    double _displayRemainingTime;
    NSDate *_displayETA;
}

@property (weak, nonatomic) id <MNETADisplayFormatterDelegate> delegate;
@property (nonatomic) double remainingTime;
@property (nonatomic, readonly) double displayRemainingTime;
@property (nonatomic, readonly) NSDate *displayETA;

- (void)dealloc;
- (void)_updateTimerFired;
- (void)_updateDisplayETA;
- (double)_displayTimeIntervalForTimeInterval:(double)arg1;
- (id)_displayDateWithRemainingTime:(double)arg1;
- (void)_scheduleUpdateTimer;
- (id)initWithTimeZone:(id)arg1;

@end
