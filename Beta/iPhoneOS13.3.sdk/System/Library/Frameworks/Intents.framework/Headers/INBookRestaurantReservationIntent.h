/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

#import <Intents/Swift-Protocol.h>

@class INRestaurant, INRestaurantGuest, INRestaurantOffer, NSDate, NSDateComponents, NSString;

@interface INBookRestaurantReservationIntent : INIntent <Swift>

{
    INRestaurant *_restaurant;
    NSDateComponents *_bookingDateComponents;
    unsigned long long _partySize;
    NSString *_bookingIdentifier;
    INRestaurantGuest *_guest;
    INRestaurantOffer *_selectedOffer;
    NSString *_guestProvidedSpecialRequestText;
    NSDate *_bookingDate;
}

@property (copy, nonatomic) NSDate *bookingDate;
@property (copy, nonatomic) INRestaurant *restaurant;
@property (copy, nonatomic) NSDateComponents *bookingDateComponents;
@property (nonatomic) unsigned long long partySize;
@property (copy, nonatomic) NSString *bookingIdentifier;
@property (copy, nonatomic) INRestaurantGuest *guest;
@property (copy, nonatomic) INRestaurantOffer *selectedOffer;
@property (copy, nonatomic) NSString *guestProvidedSpecialRequestText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)intentDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)initWithRestaurant:(id)arg1 bookingDateComponents:(id)arg2 partySize:(unsigned long long)arg3 bookingIdentifier:(id)arg4 guest:(id)arg5 selectedOffer:(id)arg6 guestProvidedSpecialRequestText:(id)arg7;

@end
