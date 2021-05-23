/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem

{
    NSMutableSet *_componentSets;
}

+ (_Bool)allowedCalendars:(id)arg1 contains:(id)arg2;

- (id)init;
- (id)description;
- (id)componentsAsString;
- (id)copyParseRules;
- (id)childrenToWrite;
- (void)addCompSet:(id)arg1;

@end
