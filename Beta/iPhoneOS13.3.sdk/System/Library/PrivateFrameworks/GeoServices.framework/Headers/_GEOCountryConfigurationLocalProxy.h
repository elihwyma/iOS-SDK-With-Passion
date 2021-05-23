/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class CoreTelephonyClient, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source, _GEOCountryConfigurationServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _GEOCountryConfigurationLocalProxy : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <_GEOCountryConfigurationServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_source> *_scheduledUpdateTimer;
    id _countryCodeOverrideChangeListener;
    CoreTelephonyClient *_telephonyClient;
    struct __CTServerConnection *_telephonyServerConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)servingNetworkChanged:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)updateCountryCodeWithCallbackQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_reachabilityChanged:(id)arg1;
- (void)_scheduleUpdate;
- (void)_updateCountryCodeWithCallbackQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_determineCurrentCountryCode:(CDUnknownBlockType)arg1;

@end
