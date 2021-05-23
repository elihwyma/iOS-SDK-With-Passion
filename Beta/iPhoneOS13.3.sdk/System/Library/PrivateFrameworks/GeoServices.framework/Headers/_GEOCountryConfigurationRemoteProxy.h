/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, _GEOCountryConfigurationServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _GEOCountryConfigurationRemoteProxy : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <_GEOCountryConfigurationServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _providersChangedToken;
    id _countryCodeChangeListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)updateCountryCodeWithCallbackQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
