/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem

{
    CoreDAVItemWithNoChildren *_transparent;
}

@property (retain, nonatomic) CoreDAVItemWithNoChildren *transparent;
@property (nonatomic, readonly) _Bool isScheduleTransparent;

- (id)copyParseRules;

@end
