/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@interface NSObject (FezAdditions)

- (_Bool)isNull;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 ignoreMenuTracking:(_Bool)arg4;
- (id)__im_afterDelay:(double)arg1;
- (id)__im_afterDelay:(double)arg1 modes:(id)arg2;
- (id)__im_onThread:(id)arg1;
- (id)__im_onThread:(id)arg1 immediateForMatchingThread:(_Bool)arg2;
- (id)__im_onMainThread;
- (id)__im_onMainThreadIfNecessary;
- (id)__im_onDetachedThread;
- (id)__im_getInvocation:(id *)arg1;

@end
