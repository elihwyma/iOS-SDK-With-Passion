/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem

{
    NSMutableSet *_changedProperties;
}

@property (retain, nonatomic) NSMutableSet *changedProperties;

- (id)init;
- (void)addChangedProperty:(id)arg1;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)copyParseRules;

@end
