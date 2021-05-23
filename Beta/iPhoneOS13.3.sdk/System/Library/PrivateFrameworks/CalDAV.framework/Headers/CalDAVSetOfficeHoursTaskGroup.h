/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class ICSDocument, NSString, NSURL;

@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVSetOfficeHoursTaskGroup : CoreDAVTaskGroup

{
    NSURL *_inboxURL;
    ICSDocument *_calendarAvailability;
}

@property (retain, nonatomic) NSURL *inboxURL;
@property (retain, nonatomic) ICSDocument *calendarAvailability;
@property (nonatomic) id <CoreDAVTaskGroupDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startTaskGroup;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 calendarAvailability:(id)arg3 taskManager:(id)arg4;

@end
