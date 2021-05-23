/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDProfile, HDXPCClient, NSString;

@protocol OS_dispatch_queue;

@interface HDHealthExtensionsServer : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    HDXPCClient *_client;
    HDProfile *_profile;
}

@property (retain, nonatomic) HDXPCClient *client;
@property (retain, nonatomic) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverWithClient:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)_shouldAcceptConnectionForClient:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)diagnosticDescription;
- (id)initWithClient:(id)arg1 profile:(id)arg2;

@end
