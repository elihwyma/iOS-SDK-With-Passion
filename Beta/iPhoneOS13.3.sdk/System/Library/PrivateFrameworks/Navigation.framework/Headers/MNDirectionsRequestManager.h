/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEODirectionService, NSMutableDictionary, geo_isolater;

@interface MNDirectionsRequestManager : NSObject

{
    NSMutableDictionary *_pendingRequests;
    geo_isolater *_pendingRequestsIsolater;
    GEODirectionService *_directionsService;
}

- (id)init;
- (void)cancelDirectionsRequestWithIdentifier:(id)arg1;
- (void)_requestDirectionsFromTraceWithPath:(id)arg1 feedback:(id)arg2 auditToken:(id)arg3 finishedHandler:(CDUnknownBlockType)arg4;
- (void)_requestServerDirections:(id)arg1 withIdentifier:(id)arg2 auditToken:(id)arg3 finishedHandler:(CDUnknownBlockType)arg4;
- (void)requestDirections:(id)arg1 withIdentifier:(id)arg2 auditToken:(id)arg3 finishedHandler:(CDUnknownBlockType)arg4;

@end
