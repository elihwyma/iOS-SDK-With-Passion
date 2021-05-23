/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNClassicGuidanceManager.h>

__attribute__((visibility("hidden")))
@interface MNWalkGuidanceManager : MNClassicGuidanceManager

- (int)transportType;
- (void)updateGuidanceForProceedToRouteAtLocation:(CDStruct_c3b9c2ee)arg1 routeMatch:(id)arg2 remainingTime:(double)arg3 distanceUntilDestination:(double)arg4;
- (void)_updatePrepareForNextStep;
- (_Bool)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2;
- (id)_combinedGuidanceForStep:(id)arg1 withType:(int)arg2;
- (double)_adjustedVehicleSpeed:(id)arg1;

@end
