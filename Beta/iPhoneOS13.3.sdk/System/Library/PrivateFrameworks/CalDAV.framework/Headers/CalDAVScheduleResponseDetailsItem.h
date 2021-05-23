/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, CoreDAVLeafItem, ICSDocument, NSString;

@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem

{
    CoreDAVItemWithHrefChildItem *_recipientHREF;
    CoreDAVLeafItem *_requestStatus;
    ICSDocument *_calendarData;
    CoreDAVErrorItem *_topLevelErrorItem;
    NSString *_responseDescription;
}

@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *recipientHREF;
@property (nonatomic, readonly) NSString *recipientString;
@property (retain, nonatomic) CoreDAVLeafItem *requestStatus;
@property (retain, nonatomic) ICSDocument *calendarData;
@property (retain, nonatomic) CoreDAVErrorItem *topLevelErrorItem;
@property (retain, nonatomic) NSString *responseDescription;

- (id)description;
- (id)copyParseRules;
- (void)_setCalendarDataWithLeafItem:(id)arg1;

@end
