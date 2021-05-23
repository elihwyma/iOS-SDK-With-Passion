/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <CalDAV/CalDAVCalendarServerUserItem.h>

@interface CalDAVCalendarServerUserItem (ShareeConversion)

- (_Bool)updateCalSharee:(void *)arg1;
- (void *)createCalShareeInDatabase:(struct CalDatabase *)arg1 andCalendar:(void *)arg2;
- (id)initWithCalSharee:(void *)arg1;

@end
