/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INRestaurant, NSString;

@interface INGetAvailableRestaurantReservationBookingDefaultsIntent : INIntent

{
    INRestaurant *_restaurant;
}

@property (copy, nonatomic) INRestaurant *restaurant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)intentDescription;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)initWithRestaurant:(id)arg1;

@end
