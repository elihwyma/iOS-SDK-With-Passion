/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVItemWithHrefChildItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem, NSString, NSURL;

@interface CalDAVCalendarServerInviteReplyItem : CoreDAVItem

{
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_inviteStatus;
    CoreDAVItemWithHrefChildItem *_hostURL;
    CoreDAVLeafItem *_inReplyTo;
    CoreDAVLeafItem *_summary;
    NSString *_firstName;
    NSString *_lastName;
    NSURL *_acceptedURL;
}

@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteStatus;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *hostURL;
@property (retain, nonatomic) CoreDAVLeafItem *inReplyTo;
@property (retain, nonatomic) CoreDAVLeafItem *summary;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSURL *acceptedURL;

- (id)init;
- (id)copyParseRules;
- (void)setFirstNameItem:(id)arg1;
- (void)setLastNameItem:(id)arg1;
- (void)setAcceptedURLItem:(id)arg1;

@end
