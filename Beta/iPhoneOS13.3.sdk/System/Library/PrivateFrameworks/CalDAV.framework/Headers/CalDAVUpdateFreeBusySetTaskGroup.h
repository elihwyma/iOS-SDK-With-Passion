/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class CoreDAVPropFindTask, NSString, NSURL;

@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVUpdateFreeBusySetTaskGroup : CoreDAVTaskGroup

{
    int _state;
    NSURL *_inboxURL;
    NSURL *_urlToAdd;
    NSString *_suffixToFilterOut;
    CoreDAVPropFindTask *_fetchTask;
}

@property (retain, nonatomic) NSURL *inboxURL;
@property (retain, nonatomic) NSURL *urlToAdd;
@property (retain, nonatomic) NSString *suffixToFilterOut;
@property (retain, nonatomic) CoreDAVPropFindTask *fetchTask;
@property (nonatomic) int state;
@property (nonatomic) id <CoreDAVTaskGroupDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startTaskGroup;
- (void)_startFetchFreeBusySet;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)_startPropPatchWithURLs:(id)arg1;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 urlToAdd:(id)arg3 suffixToFilterOut:(id)arg4 taskManager:(id)arg5;
- (void)taskGroupWillCancelWithError:(id)arg1;

@end
