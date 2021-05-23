/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSString, NSURL;

@interface CalDAVModifyCalendarSharingLevelTaskGroup : CoreDAVTaskGroup

{
    int _action;
    int _state;
    NSURL *_publishedURL;
    NSURL *_url;
}

@property (nonatomic) int action;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) int state;
@property (retain, nonatomic) NSURL *publishedURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)finishWithError:(id)arg1;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)initWithSharingAction:(int)arg1 atCalendarURL:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;

@end
