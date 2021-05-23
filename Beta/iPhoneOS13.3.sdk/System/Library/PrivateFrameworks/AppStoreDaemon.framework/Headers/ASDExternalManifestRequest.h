/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@class ASDExternalManifestRequestOptions;

@interface ASDExternalManifestRequest : ASDEphemeralRequest

@property (copy, nonatomic, readonly) ASDExternalManifestRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
