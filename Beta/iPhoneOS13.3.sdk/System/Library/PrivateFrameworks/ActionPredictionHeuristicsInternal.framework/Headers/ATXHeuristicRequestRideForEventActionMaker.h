/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <ActionPredictionHeuristicsInternal/ATXHeuristicActionMaker.h>

@class ATXHeuristicObjectHandle, CLLocation, NSString;

@interface ATXHeuristicRequestRideForEventActionMaker : ATXHeuristicActionMaker

{
    CLLocation *_pickupLocation;
    ATXHeuristicObjectHandle *_dropoffEvent;
    NSString *_preferredAppBundleID;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_makeAction;
- (id)actionTypeName;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 pickupLocation:(id)arg3 dropoffEvent:(id)arg4 preferredAppBundleID:(id)arg5;
- (id)dropOffLocationFromEKEvent:(id)arg1;
- (_Bool)shouldPredictDropOffLocationGivenPickupLocation:(id)arg1 andDropOffLocation:(id)arg2;

@end
