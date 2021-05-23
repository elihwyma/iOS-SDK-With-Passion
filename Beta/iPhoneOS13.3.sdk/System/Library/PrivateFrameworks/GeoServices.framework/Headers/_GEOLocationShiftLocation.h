/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOApplicationAuditToken, GEOLatLng;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOLocationShiftLocation : NSObject

{
    GEOLatLng *_latLng;
    GEOApplicationAuditToken *_auditToken;
    double _accuracy;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _mustGoToNetworkCallback;
    CDUnknownBlockType _functionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _recordCacheInfo;
}

@property (nonatomic, readonly) GEOLatLng *latLng;
@property (nonatomic, readonly) double accuracy;
@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;

- (void)performErrorHandler:(id)arg1;
- (void)performCompletionHandlerWithShiftedCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 function:(id)arg3 wasFunctionCached:(_Bool)arg4;
- (id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 mustGoToNetworkCallback:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6 auditToken:(id)arg7;
- (id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 mustGoToNetworkCallback:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (id)initWithLatLng:(id)arg1 auditToken:(id)arg2 functionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)performMustGoToNetwork;
- (id)_initWithLatLng:(id)arg1 accuracy:(double)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5 mustGoToNetworkCallback:(CDUnknownBlockType)arg6;
- (void)_performOnCallbackQueue:(CDUnknownBlockType)arg1;

@end
