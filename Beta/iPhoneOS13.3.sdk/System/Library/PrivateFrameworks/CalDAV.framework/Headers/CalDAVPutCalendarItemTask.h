/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVPutTask.h>

@class NSString;

@protocol CalDAVPutCalendarItemTaskDelegate;

@interface CalDAVPutCalendarItemTask : CoreDAVPutTask

{
    NSString *_previousScheduleTag;
}

@property (nonatomic) id <CalDAVPutCalendarItemTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousScheduleTag;

- (id)description;
- (id)additionalHeaderValues;

@end
