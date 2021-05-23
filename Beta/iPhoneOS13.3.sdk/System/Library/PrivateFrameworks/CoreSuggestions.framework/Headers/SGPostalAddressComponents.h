/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SGPostalAddressComponents : NSObject

{
    NSString *_street;
    NSString *_subLocality;
    NSString *_city;
    NSString *_subAdministrativeArea;
    NSString *_state;
    NSString *_postalCode;
    NSString *_country;
    NSString *_isoCountryCode;
}

@property (nonatomic, readonly) NSString *street;
@property (nonatomic, readonly) NSString *subLocality;
@property (nonatomic, readonly) NSString *city;
@property (nonatomic, readonly) NSString *subAdministrativeArea;
@property (nonatomic, readonly) NSString *state;
@property (nonatomic, readonly) NSString *postalCode;
@property (nonatomic, readonly) NSString *country;
@property (nonatomic, readonly) NSString *isoCountryCode;

+ (_Bool)supportsSecureCoding;
+ (id)components:(id)arg1 city:(id)arg2 state:(id)arg3 postalCode:(id)arg4 country:(id)arg5;
+ (id)components:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStreet:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8;
- (_Bool)isEqualToPostalAddressComponents:(id)arg1;

@end
