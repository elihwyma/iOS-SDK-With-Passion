/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSTimeZone;

__attribute__((visibility("hidden")))
@interface EKOfficeHour : NSObject

{
    _Bool _enabled;
    long long _weekday;
    NSDate *_startTime;
    NSDate *_endTime;
    NSTimeZone *_timeZone;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic) long long weekday;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSTimeZone *timeZone;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEnabled:(_Bool)arg1 weekday:(long long)arg2 startTime:(id)arg3 endTime:(id)arg4 timeZone:(id)arg5;

@end
