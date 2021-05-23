/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INRestaurantReservationBooking.h>

#import <Intents/Swift-Protocol.h>

@class INRestaurantGuest, INRestaurantOffer, NSDate, NSString;

@interface INRestaurantReservationUserBooking : INRestaurantReservationBooking <Swift>

{
    INRestaurantGuest *_guest;
    NSString *_advisementText;
    INRestaurantOffer *_selectedOffer;
    NSString *_guestProvidedSpecialRequestText;
    unsigned long long _status;
    NSDate *_dateStatusModified;
}

@property (copy, nonatomic) INRestaurantGuest *guest;
@property (copy, nonatomic) NSString *advisementText;
@property (copy, nonatomic) INRestaurantOffer *selectedOffer;
@property (copy, nonatomic) NSString *guestProvidedSpecialRequestText;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSDate *dateStatusModified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)initWithRestaurant:(id)arg1 bookingDate:(id)arg2 partySize:(unsigned long long)arg3 bookingIdentifier:(id)arg4 guest:(id)arg5 status:(unsigned long long)arg6 dateStatusModified:(id)arg7;

@end
