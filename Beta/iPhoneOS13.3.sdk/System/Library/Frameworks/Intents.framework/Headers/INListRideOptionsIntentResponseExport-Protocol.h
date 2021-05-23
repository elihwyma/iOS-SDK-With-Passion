/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSDate;

@protocol INListRideOptionsIntentResponseExport <Swift>

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) NSArray *rideOptions;
@property (copy, nonatomic) NSArray *paymentMethods;
@property (copy, nonatomic) NSDate *expirationDate;

@end
