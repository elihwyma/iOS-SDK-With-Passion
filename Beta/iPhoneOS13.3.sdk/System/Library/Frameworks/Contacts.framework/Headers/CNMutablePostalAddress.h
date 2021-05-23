/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPostalAddress.h>

@class NSString;

@interface CNMutablePostalAddress : CNPostalAddress

@property (copy, nonatomic) NSString *formattedAddress;
@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *subLocality;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *ISOCountryCode;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)freeze;

@end
