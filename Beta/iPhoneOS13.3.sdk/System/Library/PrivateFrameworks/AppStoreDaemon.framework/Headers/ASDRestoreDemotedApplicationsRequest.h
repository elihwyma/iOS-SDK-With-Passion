/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@class ASDRestoreDemotedApplicationsRequestOptions;

@interface ASDRestoreDemotedApplicationsRequest : ASDEphemeralRequest

@property (copy, nonatomic, readonly) ASDRestoreDemotedApplicationsRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
