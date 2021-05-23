/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@interface ASDRestoreApplicationsRequest : ASDEphemeralRequest

+ (long long)requestType;

- (id)initWithOptions:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
