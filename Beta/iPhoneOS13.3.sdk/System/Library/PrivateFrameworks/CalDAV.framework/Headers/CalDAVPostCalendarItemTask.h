/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVPostTask.h>

@class NSString;

@protocol CalDAVPostCalendarItemTaskDelegate;

@interface CalDAVPostCalendarItemTask : CoreDAVPostTask

{
    NSString *_previousScheduleTag;
}

@property (nonatomic) id <CalDAVPostCalendarItemTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousScheduleTag;

- (id)description;
- (id)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(id)arg1;

@end
