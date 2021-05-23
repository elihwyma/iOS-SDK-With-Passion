/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@interface ASDJobSchedulerRequest : ASDEphemeralRequest

+ (long long)requestType;

- (id)initWithOptions:(id)arg1;
- (void)findNextJobsWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
