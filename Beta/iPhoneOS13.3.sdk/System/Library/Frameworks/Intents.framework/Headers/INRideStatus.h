/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class CLPlacemark, INDateComponentsRange, INRideCompletionStatus, INRideDriver, INRideOption, INRideVehicle, NSArray, NSDate, NSString, NSUserActivity;

@interface INRideStatus : NSObject <Swift>

{
    NSArray *_waypoints;
    NSString *_rideIdentifier;
    long long _phase;
    INRideCompletionStatus *_completionStatus;
    INRideVehicle *_vehicle;
    INRideDriver *_driver;
    NSDate *_estimatedPickupDate;
    NSDate *_estimatedDropOffDate;
    NSDate *_estimatedPickupEndDate;
    INDateComponentsRange *_scheduledPickupTime;
    CLPlacemark *_pickupLocation;
    CLPlacemark *_dropOffLocation;
    INRideOption *_rideOption;
    NSUserActivity *_userActivityForCancelingInApplication;
    NSArray *_additionalActionActivities;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *rideIdentifier;
@property (nonatomic) long long phase;
@property (copy, nonatomic) INRideCompletionStatus *completionStatus;
@property (copy, nonatomic) INRideVehicle *vehicle;
@property (copy, nonatomic) INRideDriver *driver;
@property (copy, nonatomic) NSDate *estimatedPickupDate;
@property (copy, nonatomic) NSDate *estimatedDropOffDate;
@property (copy, nonatomic) NSDate *estimatedPickupEndDate;
@property (copy, nonatomic) INDateComponentsRange *scheduledPickupTime;
@property (copy, nonatomic) CLPlacemark *pickupLocation;
@property (copy, nonatomic) NSArray *waypoints;
@property (copy, nonatomic) CLPlacemark *dropOffLocation;
@property (copy, nonatomic) INRideOption *rideOption;
@property (retain, nonatomic) NSUserActivity *userActivityForCancelingInApplication;
@property (copy, nonatomic) NSArray *additionalActionActivities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;

@end
