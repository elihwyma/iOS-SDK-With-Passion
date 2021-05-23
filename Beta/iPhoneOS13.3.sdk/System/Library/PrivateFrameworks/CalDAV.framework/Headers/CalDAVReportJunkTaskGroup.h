/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSArray;

@interface CalDAVReportJunkTaskGroup : CoreDAVTaskGroup

{
    NSArray *_resourceURLs;
}

- (void)startTaskGroup;
- (id)initWithResourceURLs:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3;

@end
