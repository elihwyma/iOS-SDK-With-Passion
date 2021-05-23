/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSSet, NSString, NSURL;

@interface CalDAVRetrieveSharedCalendarShareesTaskGroup : CoreDAVTaskGroup

{
    NSSet *_sharees;
    NSURL *_url;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSSet *sharees;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)initWithCalendarURL:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3;

@end
