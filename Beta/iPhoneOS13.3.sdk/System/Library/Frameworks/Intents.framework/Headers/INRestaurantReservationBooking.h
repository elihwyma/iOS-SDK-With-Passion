/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INRestaurant, NSArray, NSDate, NSString;

@interface INRestaurantReservationBooking : NSObject <Swift>

{
    _Bool _bookingAvailable;
    _Bool _requiresManualRequest;
    _Bool _requiresEmailAddress;
    _Bool _requiresName;
    _Bool _requiresPhoneNumber;
    INRestaurant *_restaurant;
    NSString *_bookingDescription;
    NSDate *_bookingDate;
    unsigned long long _partySize;
    NSString *_bookingIdentifier;
    NSArray *_offers;
}

@property (copy, nonatomic) INRestaurant *restaurant;
@property (copy, nonatomic) NSString *bookingDescription;
@property (copy, nonatomic) NSDate *bookingDate;
@property (nonatomic) unsigned long long partySize;
@property (copy, nonatomic) NSString *bookingIdentifier;
@property (nonatomic, getter=isBookingAvailable) _Bool bookingAvailable;
@property (copy, nonatomic) NSArray *offers;
@property (nonatomic) _Bool requiresManualRequest;
@property (nonatomic) _Bool requiresEmailAddress;
@property (nonatomic) _Bool requiresName;
@property (nonatomic) _Bool requiresPhoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithRestaurant:(id)arg1 bookingDate:(id)arg2 partySize:(unsigned long long)arg3 bookingIdentifier:(id)arg4;

@end
