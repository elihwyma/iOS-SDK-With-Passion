/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableArray, NSString, geo_isolater;

@protocol _GEONetworkDefaultsServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _GEONetworkDefaultsLocalProxy : NSObject

{
    id <_GEONetworkDefaultsServerProxyDelegate> _delegate;
    geo_isolater *_isolation;
    NSMutableArray *_updateCompletionHandlers;
    unsigned long long _stateCaptureHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <_GEONetworkDefaultsServerProxyDelegate> delegate;

- (id)init;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;
- (void)updateNetworkDefaults:(CDUnknownBlockType)arg1;
- (void)_updateNetworkDefaults;
- (id)_urlRequestForNetworkDefaults;
- (void)_processNetworkDefaultsResponse:(id)arg1 data:(id)arg2 error:(id)arg3 request:(id)arg4;
- (void)_updateWithNewConfig:(id)arg1 error:(id)arg2 request:(id)arg3 response:(id)arg4;

@end
