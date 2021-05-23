/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEONavdPeer.h>

@class GEONavigationServer, NSString;

__attribute__((visibility("hidden")))
@interface GEONavigationServerPeer : GEONavdPeer

{
    GEONavigationServer *_delegate;
}

@property (weak, nonatomic) GEONavigationServer *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)requestRouteSummary;
- (void)requestTransitSummary;
- (void)requestGuidanceState;
- (void)requestActiveRouteDetailsData;
- (void)requestStepIndex;
- (void)requestStepNameInfo;
- (void)requestRideSelections;
- (void)requestPositionFromSign;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromDestination;
- (void)requestTrafficIncidentDetailsData;
- (void)requestNavigationVoiceVolume;
- (void)requestUpdates;

@end
