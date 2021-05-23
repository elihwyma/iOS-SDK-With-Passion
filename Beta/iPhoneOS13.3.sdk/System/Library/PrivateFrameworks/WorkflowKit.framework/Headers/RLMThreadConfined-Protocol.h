/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/Swift-Protocol.h>

@class RLMRealm;

@protocol RLMThreadConfined <Swift>

@property (nonatomic, readonly) RLMRealm *realm;
@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;

@end
