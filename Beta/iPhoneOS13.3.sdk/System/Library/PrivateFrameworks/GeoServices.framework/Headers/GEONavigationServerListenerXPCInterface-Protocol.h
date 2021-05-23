/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@protocol GEONavigationServerListenerXPCInterface <Swift>

- (unsigned short)navigationStateChanged:transportType: /* Error: Ran out of types for this method. */;
- (unsigned short)routeSummaryUpdatedWithNavigationRouteSummaryData: /* Error: Ran out of types for this method. */;
- (unsigned short)routeSummaryUpdatedWithTransitSummaryData: /* Error: Ran out of types for this method. */;
- (unsigned short)routeSummaryUpdatedWithGuidanceStateData: /* Error: Ran out of types for this method. */;
- (unsigned short)routeSummaryUpdatedWithActiveRouteDetailsData: /* Error: Ran out of types for this method. */;
- (unsigned short)routeSummaryUpdatedWithStepIndexData: /* Error: Ran out of types for this method. */;
- (unsigned short)routeSummaryUpdatedWithStepNameInfoData: /* Error: Ran out of types for this method. */;
- (unsigned short)routeSummaryUpdatedWithRideSelectionData: /* Error: Ran out of types for this method. */;
- (unsigned short)routeSummaryUpdatedWithPositionFromSignData: /* Error: Ran out of types for this method. */;
- (unsigned short)routeSummaryUpdatedWithPositionFromManeuverData: /* Error: Ran out of types for this method. */;
- (unsigned short)routeSummaryUpdatedWithPositionFromDestinationData: /* Error: Ran out of types for this method. */;
- (unsigned short)routeSummaryUpdatedWithTrafficIncidentAlertDetailsData: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationUpdatedWithVoiceVolumeData: /* Error: Ran out of types for this method. */;
- (unsigned short)currentRoadNameUpdated: /* Error: Ran out of types for this method. */;

@end
