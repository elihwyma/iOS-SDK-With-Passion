/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVContainerSyncTaskGroup.h>

@class NSSet;

@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup

{
    NSSet *_notificationTypeNamesToFetch;
}

@property (retain, nonatomic) NSSet *notificationTypeNamesToFetch;

- (id)copyGetTaskWithURL:(id)arg1;
- (_Bool)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;
- (id)copyAdditionalResourcePropertiesToFetch;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;

@end
