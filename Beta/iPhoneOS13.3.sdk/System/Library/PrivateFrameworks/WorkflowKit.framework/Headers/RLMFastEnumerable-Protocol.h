/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@class RLMRealm;

@protocol RLMFastEnumerable

@property (nonatomic, readonly) RLMRealm *realm;
@property (nonatomic, readonly) struct RLMClassInfo *objectInfo;
@property (nonatomic, readonly) unsigned long long count;

- (unsigned short)tableView;
- (unsigned short)fastEnumerator;

@end
