/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSCalendar, NSMutableDictionary, NSString, NSTimer;

@interface SBFDefaultDateProvider : NSObject

{
    NSMutableDictionary *_minuteHandlers;
    unsigned long long _nextToken;
    NSTimer *_minuteTimer;
    NSCalendar *_calendar;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)date;
- (void)_updateMinuteTimer;
- (void)_scheduleNextMinuteTimer;
- (void)_minuteTimerFired;
- (id)observeMinuteUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)removeMinuteUpdateHandler:(id)arg1;

@end
