/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class CLPlacemark, INRideCompletionStatus, INRideDriver, INRideOption, INRideVehicle, NSArray, NSDate, NSString, NSUserActivity;

@protocol INRideStatusExport <Swift>

@property (copy, nonatomic) NSString *rideIdentifier;
@property (nonatomic) long long phase;
@property (copy, nonatomic) INRideCompletionStatus *completionStatus;
@property (copy, nonatomic) INRideVehicle *vehicle;
@property (copy, nonatomic) INRideDriver *driver;
@property (copy, nonatomic) NSDate *estimatedPickupDate;
@property (copy, nonatomic) NSDate *estimatedDropOffDate;
@property (copy, nonatomic) NSDate *estimatedPickupEndDate;
@property (copy, nonatomic) CLPlacemark *pickupLocation;
@property (copy, nonatomic) NSArray *waypoints;
@property (copy, nonatomic) CLPlacemark *dropOffLocation;
@property (copy, nonatomic) INRideOption *rideOption;
@property (retain, nonatomic) NSUserActivity *userActivityForCancelingInApplication;
@property (copy, nonatomic) NSArray *additionalActionActivities;

- (unsigned short)init;

@end
