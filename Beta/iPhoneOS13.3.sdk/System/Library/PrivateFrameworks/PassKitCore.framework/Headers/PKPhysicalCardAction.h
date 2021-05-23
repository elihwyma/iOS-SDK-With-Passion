/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class CNPostalAddress, NSString, PKPhysicalCardPriceOption;

@interface PKPhysicalCardAction : NSObject <Swift>

{
    unsigned long long _actionType;
    NSString *_activationCode;
    unsigned long long _reason;
    NSString *_artworkIdentifier;
    CNPostalAddress *_shippingAddress;
    NSString *_nameOnCard;
    PKPhysicalCardPriceOption *_priceOption;
}

@property (nonatomic, readonly) unsigned long long actionType;
@property (copy, nonatomic) NSString *activationCode;
@property (nonatomic) unsigned long long reason;
@property (copy, nonatomic) NSString *artworkIdentifier;
@property (copy, nonatomic) CNPostalAddress *shippingAddress;
@property (copy, nonatomic) NSString *nameOnCard;
@property (retain, nonatomic) PKPhysicalCardPriceOption *priceOption;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPhysicalCardAction:(id)arg1;
- (id)_shippingAddressJSONRepresentation;
- (id)initWithActionType:(unsigned long long)arg1;
- (id)jsonRepresentation;

@end
