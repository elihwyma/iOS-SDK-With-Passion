/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResponse.h>

@class INRestaurantReservationUserBooking, NSString;

@interface INBookRestaurantReservationIntentResponse : INIntentResponse

{
    INRestaurantReservationUserBooking *_userBooking;
}

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) INRestaurantReservationUserBooking *userBooking;
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

@end
