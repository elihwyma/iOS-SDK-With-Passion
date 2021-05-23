/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVCalendarServerInviteItem : CoreDAVItem

{
    NSMutableSet *_users;
}

@property (retain, nonatomic) NSMutableSet *users;

- (id)init;
- (void)addUser:(id)arg1;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)copyParseRules;

@end
