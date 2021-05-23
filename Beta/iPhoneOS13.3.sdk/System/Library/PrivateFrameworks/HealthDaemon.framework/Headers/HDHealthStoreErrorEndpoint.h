/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthStoreEndpoint.h>

@class NSError;

@interface HDHealthStoreErrorEndpoint : HDHealthStoreEndpoint

{
    NSError *_error;
}

@property (retain, nonatomic) NSError *error;

- (void)remote_serverForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithClient:(id)arg1 daemon:(id)arg2 error:(id)arg3;

@end
