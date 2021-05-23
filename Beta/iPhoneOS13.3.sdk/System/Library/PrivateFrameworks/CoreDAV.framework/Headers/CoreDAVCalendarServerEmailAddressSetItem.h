/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem

{
    NSMutableSet *_emailAddresses;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

@property (retain, nonatomic) NSMutableSet *emailAddresses;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (void)addEmailAddress:(id)arg1;

@end
