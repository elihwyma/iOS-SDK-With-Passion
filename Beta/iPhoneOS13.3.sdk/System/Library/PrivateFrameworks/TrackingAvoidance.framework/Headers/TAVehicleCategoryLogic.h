/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@interface TAVehicleCategoryLogic : NSObject

+ (id)extractPrivateVehicleHintsFromTAStore:(id)arg1 since:(id)arg2 to:(id)arg3;
+ (id)accumulatedTAVehicleCategoryHistoryFromVehicleStateNotificationInTAStore:(id)arg1 since:(id)arg2 to:(id)arg3;
+ (id)accumulatedTAVehicleCategoryHistoryFromGeoNavigationNotificationInTAStore:(id)arg1 since:(id)arg2 to:(id)arg3;

@end
