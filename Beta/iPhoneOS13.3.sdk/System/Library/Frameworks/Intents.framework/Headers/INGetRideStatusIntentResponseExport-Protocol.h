/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INRideStatus;

@protocol INGetRideStatusIntentResponseExport <Swift>

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) INRideStatus *rideStatus;

@end
