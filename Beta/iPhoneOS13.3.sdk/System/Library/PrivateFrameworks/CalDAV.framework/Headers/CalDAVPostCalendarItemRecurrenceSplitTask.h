/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class CoreDAVResponseItem, NSDate, NSString, NSURL;

@interface CalDAVPostCalendarItemRecurrenceSplitTask : CoreDAVPropertyFindBaseTask

{
    _Bool _isFloating;
    _Bool _isAllDay;
    NSURL *_resourceURL;
    NSDate *_recurrenceDate;
    NSString *_uidForCreatedSeries;
    NSString *_previousScheduleTag;
    NSString *_previousETag;
    NSURL *_postURLWithQuery;
    CoreDAVResponseItem *_updatedResponseItem;
    CoreDAVResponseItem *_createdResponseItem;
}

@property (retain, nonatomic) NSURL *postURLWithQuery;
@property (retain, nonatomic) CoreDAVResponseItem *updatedResponseItem;
@property (retain, nonatomic) CoreDAVResponseItem *createdResponseItem;
@property (retain, nonatomic) NSURL *resourceURL;
@property (retain, nonatomic) NSDate *recurrenceDate;
@property (retain, nonatomic) NSString *uidForCreatedSeries;
@property (retain, nonatomic) NSString *previousScheduleTag;
@property (retain, nonatomic) NSString *previousETag;
@property (nonatomic) _Bool isFloating;
@property (nonatomic) _Bool isAllDay;

- (id)description;
- (id)url;
- (id)httpMethod;
- (id)requestBody;
- (id)additionalHeaderValues;
- (id)updatedETag;
- (id)updatedScheduleTag;
- (id)_recurrenceDateString;
- (id)urlWithQuery;
- (void)_updateBothResponseItems;
- (id)_dataForItem:(id)arg1;
- (id)_etagForItem:(id)arg1;
- (id)_scheduleTagForItem:(id)arg1;
- (id)_documentForItem:(id)arg1;
- (id)initWithResourceURL:(id)arg1 recurrenceDate:(id)arg2 floating:(_Bool)arg3 allday:(_Bool)arg4;
- (id)updatedICSDocument;
- (id)createdURL;
- (id)createdETag;
- (id)createdScheduleTag;
- (id)createdICSDocument;
- (id)createdICSData;

@end
