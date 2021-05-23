/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIDeveloperInfo : NSObject <Swift>

{
    NSArray *_addressLines;
    NSString *_administrativeArea;
    NSString *_businessRegistrationIdentifier;
    NSString *_country;
    NSString *_ecommerceRegistrationIdentifier;
    NSString *_emailAddress;
    NSString *_isoCountryCode;
    NSString *_locality;
    NSString *_phoneNumber;
    NSString *_tradeName;
    NSString *_tradeRepresentativeName;
    NSString *_postalCode;
}

@property (copy, nonatomic) NSString *businessRegistrationIdentifier;
@property (copy, nonatomic) NSString *ECommerceRegistrationIdentifier;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *tradeName;
@property (copy, nonatomic) NSString *tradeRepresentativeName;
@property (copy, nonatomic) NSArray *addressLines;
@property (copy, nonatomic) NSString *administrativeArea;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *ISOCountryCode;
@property (copy, nonatomic) NSString *locality;
@property (copy, nonatomic) NSString *postalCode;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)formattedAddressString;
- (id)initWithDeveloperDictionary:(id)arg1;

@end
