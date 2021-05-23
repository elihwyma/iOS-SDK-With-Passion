/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HMFoundation/HMFScheduler.h>

@class NSString;

@interface HMFScheduler (NAScheduler)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;

@end
