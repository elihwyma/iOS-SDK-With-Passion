/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBRideStatus;

@protocol _INPBRequestRideIntentResponse <Swift>

@property (retain, nonatomic) _INPBRideStatus *rideStatus;
@property (nonatomic, readonly) _Bool hasRideStatus;

@end
