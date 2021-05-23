/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem, NSString;

@protocol CalDAVCalendarItemProtocol

@property (retain, nonatomic) NSString *scheduleTag;
@property (retain, nonatomic) CalDAVCalendarServerScheduleChangesItem *scheduleChanges;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *createdBy;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *updatedBy;

@end
