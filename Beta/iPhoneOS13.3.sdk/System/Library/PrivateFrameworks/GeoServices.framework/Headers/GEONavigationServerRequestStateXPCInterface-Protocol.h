/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@protocol GEONavigationServerRequestStateXPCInterface <Swift>

- (unsigned short)requestRouteSummary;
- (unsigned short)requestTransitSummary;
- (unsigned short)requestGuidanceState;
- (unsigned short)requestActiveRouteDetailsData;
- (unsigned short)requestStepIndex;
- (unsigned short)requestStepNameInfo;
- (unsigned short)requestRideSelections;
- (unsigned short)requestPositionFromSign;
- (unsigned short)requestPositionFromManeuver;
- (unsigned short)requestPositionFromDestination;
- (unsigned short)requestTrafficIncidentDetailsData;
- (unsigned short)requestNavigationVoiceVolume;
- (unsigned short)requestUpdates;

@end
