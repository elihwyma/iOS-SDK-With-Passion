/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVLeafDataPayload.h>

@class CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem, NSString;

@interface CalDAVCalendarItemData : CoreDAVLeafDataPayload

{
    NSString *_scheduleTag;
    CalDAVCalendarServerScheduleChangesItem *_scheduleChanges;
    CalDAVUpdateOwnerItem *_createdBy;
    CalDAVUpdateOwnerItem *_updatedBy;
}

@property (retain, nonatomic) NSString *scheduleTag;
@property (retain, nonatomic) CalDAVCalendarServerScheduleChangesItem *scheduleChanges;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *createdBy;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *updatedBy;

@end
