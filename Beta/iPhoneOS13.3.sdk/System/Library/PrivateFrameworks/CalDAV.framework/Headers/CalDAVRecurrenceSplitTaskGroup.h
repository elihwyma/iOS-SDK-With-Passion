/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSArray, NSURL;

@protocol CalDAVRecurrenceSplitTaskGroupDelegate;

@interface CalDAVRecurrenceSplitTaskGroup : CoreDAVTaskGroup

{
    NSURL *_folderURL;
    NSArray *_actions;
}

@property (weak, nonatomic) id <CalDAVRecurrenceSplitTaskGroupDelegate> delegate;

- (void)startTaskGroup;
- (id)initWithCalendar:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3;

@end
