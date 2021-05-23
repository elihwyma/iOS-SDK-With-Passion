/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

@class CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem, NSString;

@protocol CalDAVCalendarItemProtocol

@property (retain, nonatomic) NSString *scheduleTag;
@property (retain, nonatomic) CalDAVCalendarServerScheduleChangesItem *scheduleChanges;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *createdBy;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *updatedBy;

@end
