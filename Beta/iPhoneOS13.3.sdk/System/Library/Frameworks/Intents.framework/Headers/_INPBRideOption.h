/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBImageValue, _INPBPriceRangeValue, _INPBTimestamp, _INPBUserActivity;

@interface _INPBRideOption : PBCodable <Swift>

{
    struct {
        unsigned int usesMeteredFare:1;
    } _has;
    _Bool _usesMeteredFare;
    _Bool __encodeLegacyGloryData;
    NSArray *_availablePartySizeOptions;
    NSString *_availablePartySizeOptionsSelectionPrompt;
    NSString *_disclaimerMessage;
    _INPBTimestamp *_estimatedPickupDate;
    NSArray *_fareLineItems;
    NSString *_name;
    _INPBPriceRangeValue *_priceRange;
    NSString *_specialPricing;
    _INPBImageValue *_specialPricingBadgeImage;
    NSString *_subtitle;
    _INPBUserActivity *_userActivityForBookingInApplication;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *availablePartySizeOptions;
@property (nonatomic, readonly) unsigned long long availablePartySizeOptionsCount;
@property (copy, nonatomic) NSString *availablePartySizeOptionsSelectionPrompt;
@property (nonatomic, readonly) _Bool hasAvailablePartySizeOptionsSelectionPrompt;
@property (copy, nonatomic) NSString *disclaimerMessage;
@property (nonatomic, readonly) _Bool hasDisclaimerMessage;
@property (retain, nonatomic) _INPBTimestamp *estimatedPickupDate;
@property (nonatomic, readonly) _Bool hasEstimatedPickupDate;
@property (copy, nonatomic) NSArray *fareLineItems;
@property (nonatomic, readonly) unsigned long long fareLineItemsCount;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) _INPBPriceRangeValue *priceRange;
@property (nonatomic, readonly) _Bool hasPriceRange;
@property (copy, nonatomic) NSString *specialPricing;
@property (nonatomic, readonly) _Bool hasSpecialPricing;
@property (retain, nonatomic) _INPBImageValue *specialPricingBadgeImage;
@property (nonatomic, readonly) _Bool hasSpecialPricingBadgeImage;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic, readonly) _Bool hasSubtitle;
@property (retain, nonatomic) _INPBUserActivity *userActivityForBookingInApplication;
@property (nonatomic, readonly) _Bool hasUserActivityForBookingInApplication;
@property (nonatomic) _Bool usesMeteredFare;
@property (nonatomic) _Bool hasUsesMeteredFare;

+ (_Bool)supportsSecureCoding;
+ (Class)availablePartySizeOptionsType;
+ (Class)fareLineItemsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearAvailablePartySizeOptions;
- (void)addAvailablePartySizeOptions:(id)arg1;
- (id)availablePartySizeOptionsAtIndex:(unsigned long long)arg1;
- (void)clearFareLineItems;
- (void)addFareLineItems:(id)arg1;
- (id)fareLineItemsAtIndex:(unsigned long long)arg1;

@end
