/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@interface NSObject (AppSupportMessagingProxy)

- (id)pep_onMainThread;
- (id)pep_onThread:(id)arg1;
- (id)pep_onThread:(id)arg1 immediateForMatchingThread:(_Bool)arg2;
- (id)pep_onOperationQueue:(id)arg1 priority:(long long)arg2;
- (id)pep_onMainThreadIfNecessary;
- (id)pep_onDetachedThread;
- (id)pep_afterDelay:(double)arg1;
- (id)pep_onOperationQueue:(id)arg1;
- (id)pep_getInvocation:(id *)arg1;

@end
