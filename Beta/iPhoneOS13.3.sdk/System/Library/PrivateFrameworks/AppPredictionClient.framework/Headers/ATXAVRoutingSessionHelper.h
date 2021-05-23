/*
 Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

#import <Foundation/NSObject.h>

@class ATXAVRouteInfo, AVRoutingSessionManager;

@interface ATXAVRoutingSessionHelper : NSObject

{
    float _threshold;
    AVRoutingSessionManager *_avRoutingSessionManager;
    ATXAVRouteInfo *_internalPredictedRouteInfo;
}

@property (nonatomic, readonly) float acceptThreshod;
@property (nonatomic, readonly) ATXAVRouteInfo *predictedRouteInfo;

- (id)init;
- (id)initWithAcceptThreshold:(float)arg1 avRoutingSessionManager:(id)arg2;
- (id)_predictedRouteInfoWithAcceptThreshold:(float)arg1 prefersLikelyDestinationsOverCurrentRoutingSession:(_Bool)arg2;
- (id)_predictedRouteWithAcceptThreshold:(float)arg1;
- (id)_selectedOrPendingRoute;
- (id)_filterTopRouteFromRoutes:(id)arg1 withAcceptThreshold:(float)arg2;
- (id)_atxAVRouteInfoWithRoute:(id)arg1;

@end
