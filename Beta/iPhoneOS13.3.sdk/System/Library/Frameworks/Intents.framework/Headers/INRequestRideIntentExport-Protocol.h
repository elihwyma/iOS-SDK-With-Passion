/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class CLPlacemark, INDateComponentsRange, INPaymentMethod, INSpeakableString, NSNumber;

@protocol INRequestRideIntentExport <Swift>

@property (copy, nonatomic) CLPlacemark *pickupLocation;
@property (copy, nonatomic) CLPlacemark *dropOffLocation;
@property (copy, nonatomic) INSpeakableString *rideOptionName;
@property (copy, nonatomic) NSNumber *partySize;
@property (copy, nonatomic) INPaymentMethod *paymentMethod;
@property (copy, nonatomic) INDateComponentsRange *scheduledPickupTime;

- (unsigned short)init;

@end
