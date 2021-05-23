/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOServiceRequester.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEODirectionsRequesterServerLocalProxy : GEOServiceRequester

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancelRequest:(id)arg1;
- (id)_validateResponse:(id)arg1;
- (void)startRequest:(id)arg1 auditToken:(id)arg2 isDoomRequest:(_Bool)arg3 requestPriority:(id)arg4 callbackQueue:(id)arg5 finished:(CDUnknownBlockType)arg6 networkActivity:(CDUnknownBlockType)arg7 error:(CDUnknownBlockType)arg8;

@end
