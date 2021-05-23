/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFStorageServiceInputAction.h>

@interface WFDeleteFileAction : WFStorageServiceInputAction

- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;
- (void)confirmDeletionAtLevel:(unsigned long long)arg1 withService:(id)arg2 input:(id)arg3;

@end
