/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFStorageServiceInputAction.h>

@interface WFGetFileLinkAction : WFStorageServiceInputAction

- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;
- (void)uploadInput:(id)arg1 storageService:(id)arg2 useShortURL:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)uploadWorkflowRecords:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
