/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSCalendar;

@protocol OS_dispatch_queue;

@interface WBSHistorySessionIntervalCache : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSCalendar *_calendar;
    struct Vector<double, 0, WTF::CrashOnOverflow, 16> _intervalCache;
}

- (id)init;
- (id).cxx_construct;
- (id)initWithCalendar:(id)arg1;
- (double)beginningOfSessionContainingTime:(double)arg1;
- (double)_beginningOfSessionContainingTime:(double)arg1;
- (void)_getSessionIntervalForTime:(double)arg1 beginningOfDay:(double *)arg2 beginningOfNextDay:(double *)arg3;

@end
