/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVDeleteTask.h>

@class NSString;

@interface CalDAVDeleteCalendarItemTask : CoreDAVDeleteTask

{
    NSString *_previousScheduleTag;
}

@property (retain, nonatomic) NSString *previousScheduleTag;

- (id)description;
- (id)additionalHeaderValues;

@end
