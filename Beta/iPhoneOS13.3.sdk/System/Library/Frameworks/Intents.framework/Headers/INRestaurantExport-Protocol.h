/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class CLLocation, NSString;

@protocol INRestaurantExport <Swift>

@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *vendorIdentifier;
@property (copy, nonatomic) NSString *restaurantIdentifier;

- (unsigned short)init;

@end
