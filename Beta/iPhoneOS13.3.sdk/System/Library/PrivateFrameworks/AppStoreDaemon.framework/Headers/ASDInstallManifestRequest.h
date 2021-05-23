/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@class ASDInstallManifestRequestOptions;

@interface ASDInstallManifestRequest : ASDEphemeralRequest

@property (copy, nonatomic, readonly) ASDInstallManifestRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
