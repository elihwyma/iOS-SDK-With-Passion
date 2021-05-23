/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSMutableSet, NSSet, NSString, NSURL;

@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup

{
    NSMutableSet *_invalidSharees;
    NSSet *_shareesToRemove;
    NSSet *_shareesToSet;
    NSURL *_calendarURL;
    NSString *_summary;
}

@property (retain, nonatomic) NSSet *shareesToRemove;
@property (retain, nonatomic) NSSet *shareesToSet;
@property (retain, nonatomic) NSURL *calendarURL;
@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) NSMutableSet *invalidSharees;
@property (nonatomic) id <CoreDAVTaskGroupDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)generateModificationMessageBody;
- (id)initWithShareesToSet:(id)arg1 shareesToRemove:(id)arg2 summary:(id)arg3 atCalendarURL:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6;

@end
