/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSCalendar, NSMutableDictionary;

@interface SBUIPreciseClockTimer : NSObject

{
    CADisplayLink *_displayLink;
    NSMutableDictionary *_minuteUpdateHandlers;
    unsigned long long _nextToken;
    NSCalendar *_calendar;
    long long _lastHour;
    long long _lastMinute;
}

+ (id)sharedInstance;
+ (id)now;

- (id)init;
- (void)dealloc;
- (void)_updateDisplayLink;
- (void)_onDisplayLink:(id)arg1;
- (void)_handleTimePassed;
- (void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)arg1;
- (struct NSNumber *)startMinuteUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)stopMinuteUpdatesForToken:(struct NSNumber *)arg1;

@end
