/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class CLPlacemark, CNPostalAddress, NSString;

@interface WFStreetAddress : NSObject

{
    NSString *_addressString;
    NSString *_street;
    CNPostalAddress *_postalAddress;
    CLPlacemark *_placemark;
    NSString *_subLocality;
    NSString *_city;
    NSString *_subAdministrativeArea;
    NSString *_state;
    NSString *_postalCode;
    NSString *_country;
    NSString *_isoCountryCode;
    NSString *_label;
}

@property (nonatomic, readonly) CNPostalAddress *postalAddress;
@property (nonatomic, readonly) NSString *addressString;
@property (nonatomic, readonly) NSString *shortAddressString;
@property (nonatomic, readonly) CLPlacemark *placemark;
@property (nonatomic, readonly) NSString *street;
@property (nonatomic, readonly) NSString *subLocality;
@property (nonatomic, readonly) NSString *city;
@property (nonatomic, readonly) NSString *subAdministrativeArea;
@property (nonatomic, readonly) NSString *state;
@property (nonatomic, readonly) NSString *postalCode;
@property (nonatomic, readonly) NSString *country;
@property (nonatomic, readonly) NSString *isoCountryCode;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *localizedLabel;
@property (copy, nonatomic, readonly) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)streetAddressesInString:(id)arg1 error:(id *)arg2;
+ (_Bool)stringContainsStreetAddresses:(id)arg1;
+ (id)streetAddressWithTextCheckingResult:(id)arg1;
+ (id)streetAddressWithStreet:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8 label:(id)arg9;
+ (id)streetAddressWithPlacemark:(id)arg1 label:(id)arg2;
+ (id)streetAddressWithPostalAddress:(id)arg1 label:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)wfSerializedRepresentation;
- (id)initWithPostalAddress:(id)arg1 placemark:(id)arg2 formattedAddress:(id)arg3 label:(id)arg4;
- (id)initWithStreet:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8 placemark:(id)arg9 formattedAddress:(id)arg10 label:(id)arg11;

@end
