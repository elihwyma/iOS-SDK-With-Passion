/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class CoreDAVPropFindTask, ICSDocument, NSString, NSURL;

@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup

{
    ICSDocument *_calendarAvailability;
    NSURL *_inboxURL;
    CoreDAVPropFindTask *_fetchTask;
}

@property (retain, nonatomic) NSURL *inboxURL;
@property (retain, nonatomic) CoreDAVPropFindTask *fetchTask;
@property (retain, nonatomic) ICSDocument *calendarAvailability;
@property (nonatomic) id <CoreDAVTaskGroupDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_finishWithError:(id)arg1;
- (void)startTaskGroup;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 taskManager:(id)arg3;

@end
