/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <Foundation/NSObject.h>

@class CalDAVScheduleChangesProperty, ICSCalendar, ICSDocument, ICSEvent, NSArray, NSData, NSString;

@interface CaliTIPMessage : NSObject

{
    NSData *_data;
    CalDAVScheduleChangesProperty *_scheduleChanges;
    NSString *_filename;
    ICSDocument *_document;
    ICSEvent *_event;
}

@property (copy, nonatomic) NSData *data;
@property (retain, nonatomic) CalDAVScheduleChangesProperty *scheduleChanges;
@property (copy, nonatomic) NSString *filename;
@property (retain, nonatomic) ICSDocument *document;
@property (retain, nonatomic) ICSEvent *event;
@property (nonatomic, readonly) ICSCalendar *calendar;
@property (nonatomic, readonly) ICSEvent *masterEvent;
@property (nonatomic, readonly) NSArray *occurrences;
@property (nonatomic, readonly) NSArray *allOccurrences;

- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithData:(id)arg1 filename:(id)arg2 scheduleChanges:(id)arg3;
- (id)initWithData:(id)arg1 filename:(id)arg2;

@end
