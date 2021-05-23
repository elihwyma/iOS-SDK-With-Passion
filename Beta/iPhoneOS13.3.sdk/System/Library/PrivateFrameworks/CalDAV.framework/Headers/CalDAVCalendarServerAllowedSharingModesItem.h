/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem

{
    CoreDAVItemWithNoChildren *_canBePublished;
    CoreDAVItemWithNoChildren *_canBeShared;
    CoreDAVItemWithNoChildren *_isMarkedUndeletable;
    CoreDAVItemWithNoChildren *_isMarkedImmutableSharees;
}

@property (retain, nonatomic) CoreDAVItemWithNoChildren *canBePublished;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *canBeShared;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *isMarkedUndeletable;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *isMarkedImmutableSharees;

- (id)init;
- (id)copyParseRules;

@end
