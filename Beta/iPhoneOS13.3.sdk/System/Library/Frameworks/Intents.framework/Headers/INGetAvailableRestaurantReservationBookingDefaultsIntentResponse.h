/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResponse.h>

@class INImage, NSDate, NSNumber, NSString;

@interface INGetAvailableRestaurantReservationBookingDefaultsIntentResponse : INIntentResponse

{
    unsigned long long _defaultPartySize;
    NSDate *_defaultBookingDate;
    NSNumber *_maximumPartySize;
    NSNumber *_minimumPartySize;
    INImage *_providerImage;
}

@property (nonatomic, readonly) unsigned long long defaultPartySize;
@property (copy, nonatomic, readonly) NSDate *defaultBookingDate;
@property (copy, nonatomic) NSNumber *maximumPartySize;
@property (copy, nonatomic) NSNumber *minimumPartySize;
@property (copy, nonatomic) INImage *providerImage;
@property (nonatomic, readonly) long long code;
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
- (id)initWithDefaultPartySize:(unsigned long long)arg1 defaultBookingDate:(id)arg2 code:(long long)arg3 userActivity:(id)arg4;

@end
