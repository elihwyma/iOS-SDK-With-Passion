/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <NSObject.h>

@class NSLock;

@interface RMPolicyStore : NSObject

{
    NSLock *_policyChangeLock;
}

- (id)init;
- (struct NSDictionary *)currentPolicyByKey;
- (void)_setCurrentPolicyByKey:(struct NSDictionary *)arg1;
- (void)addOrUpdatePolicy:(id)arg1;
- (void)removePolicyWithKey:(id)arg1;
- (id)policyWithKey:(id)arg1;

@end
