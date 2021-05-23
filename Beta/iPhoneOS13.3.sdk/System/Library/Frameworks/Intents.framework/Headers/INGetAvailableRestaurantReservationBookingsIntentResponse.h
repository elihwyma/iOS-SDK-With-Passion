/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResponse.h>

@class INTermsAndConditions, NSArray, NSString;

@interface INGetAvailableRestaurantReservationBookingsIntentResponse : INIntentResponse

{
    NSString *_localizedRestaurantDescriptionText;
    NSString *_localizedBookingAdvisementText;
    INTermsAndConditions *_termsAndConditions;
    NSArray *_availableBookings;
}

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) NSString *localizedRestaurantDescriptionText;
@property (copy, nonatomic) NSString *localizedBookingAdvisementText;
@property (copy, nonatomic) INTermsAndConditions *termsAndConditions;
@property (nonatomic, readonly) NSArray *availableBookings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryRepresentation;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithAvailableBookings:(id)arg1 code:(long long)arg2 userActivity:(id)arg3;

@end
