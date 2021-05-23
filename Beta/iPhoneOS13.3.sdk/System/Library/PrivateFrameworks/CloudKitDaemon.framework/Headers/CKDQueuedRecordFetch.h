/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDQueuedFetch.h>

__attribute__((visibility("hidden")))
@interface CKDQueuedRecordFetch : CKDQueuedFetch

- (void)addRequestForRecordID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)createFetchOperationForItemIDs:(id)arg1 operationQueue:(id)arg2 operationConfigurationBlock:(CDUnknownBlockType)arg3;

@end
