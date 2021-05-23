/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDQueuedFetch.h>

__attribute__((visibility("hidden")))
@interface CKDQueuedZoneFetch : CKDQueuedFetch

- (void)createFetchOperationForItemIDs:(id)arg1 operationQueue:(id)arg2 operationConfigurationBlock:(CDUnknownBlockType)arg3;
- (void)addRequestForZoneID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
