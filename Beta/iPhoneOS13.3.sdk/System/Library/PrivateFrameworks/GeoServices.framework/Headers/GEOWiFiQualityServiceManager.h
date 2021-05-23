/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@protocol GEOWiFiQualityServiceProxy;

@interface GEOWiFiQualityServiceManager : NSObject

{
    id <GEOWiFiQualityServiceProxy> _proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (void)useProxyClass:(Class)arg1;

- (id)init;
- (void)submitWiFiQualityServiceRequest:(id)arg1 requestId:(id)arg2 auditToken:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)cancelRequestId:(id)arg1;
- (void)submitWiFiQualityTileLoadForKey:(id)arg1 eTag:(id)arg2 requestId:(id)arg3 auditToken:(id)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end
