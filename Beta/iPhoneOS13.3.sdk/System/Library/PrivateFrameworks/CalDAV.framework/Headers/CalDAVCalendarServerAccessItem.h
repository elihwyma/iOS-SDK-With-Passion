/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem

{
    CoreDAVItemWithNoChildren *_accessLevel;
}

@property (retain, nonatomic) CoreDAVItemWithNoChildren *accessLevel;

- (id)init;
- (id)copyParseRules;
- (id)initWithAccess:(int)arg1;

@end
