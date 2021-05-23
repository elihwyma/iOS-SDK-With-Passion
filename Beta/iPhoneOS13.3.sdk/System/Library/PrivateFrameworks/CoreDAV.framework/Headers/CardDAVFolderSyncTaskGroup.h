/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVContainerSyncTaskGroup.h>

@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup

{
    _Bool _isInitialSync;
}

@property (nonatomic) _Bool isInitialSync;

- (id)copyGetTaskWithURL:(id)arg1;
- (id)dataContentType;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (Class)bulkChangeTaskClass;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(_Bool)arg5 context:(id)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 appSpecificDataItemClass:(Class)arg9;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 context:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7 appSpecificDataItemClass:(Class)arg8;

@end
