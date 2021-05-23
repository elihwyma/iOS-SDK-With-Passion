/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOApplicationAuditToken;

@protocol GEORouteManagerDelegate;

@interface GEORouteManager : NSObject

{
    id <GEORouteManagerDelegate> _delegate;
    GEOApplicationAuditToken *_auditToken;
}

@property (weak, nonatomic) id <GEORouteManagerDelegate> delegate;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;

+ (void)setShouldRequestServerLatencyInfo:(_Bool)arg1;

- (void)didReceiveRoutes:(id)arg1 traffic:(id)arg2;
- (id)refineErrorFromServerError:(id)arg1 directionsError:(id)arg2;
- (void)handleResponse:(id)arg1 forTicket:(id)arg2;
- (void)handleError:(id)arg1 directionsError:(id)arg2 forTicket:(id)arg3;
- (void)fetchDirectionsForTicket:(id)arg1 networkActivity:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
