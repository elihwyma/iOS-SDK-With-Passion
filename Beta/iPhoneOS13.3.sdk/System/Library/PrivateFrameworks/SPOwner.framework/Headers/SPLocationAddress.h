/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SPLocationAddress : NSObject

{
    NSString *_formattedAddressLines;
    NSString *_country;
    NSString *_countryCode;
    NSString *_streetName;
    NSString *_streetAddress;
    NSString *_locality;
    NSString *_stateCode;
    NSString *_administrativeArea;
    NSString *_placemark;
}

@property (copy, nonatomic) NSString *formattedAddressLines;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *streetName;
@property (copy, nonatomic) NSString *streetAddress;
@property (copy, nonatomic) NSString *locality;
@property (copy, nonatomic) NSString *stateCode;
@property (copy, nonatomic) NSString *administrativeArea;
@property (copy, nonatomic) NSString *placemark;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormattedAddressLines:(id)arg1 country:(id)arg2 countryCode:(id)arg3 streetName:(id)arg4 streetAddress:(id)arg5 locality:(id)arg6 stateCode:(id)arg7 administrativeArea:(id)arg8 placemark:(id)arg9;
- (id)initWithFormattedAddressLines:(id)arg1 country:(id)arg2 countryCode:(id)arg3 streetName:(id)arg4 streetAddress:(id)arg5 locality:(id)arg6 stateCode:(id)arg7 administrativeArea:(id)arg8;

@end
