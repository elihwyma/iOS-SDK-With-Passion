/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSString;

@interface CNPostalAddress : NSObject <Swift>

{
    NSString *_street;
    NSString *_subLocality;
    NSString *_city;
    NSString *_subAdministrativeArea;
    NSString *_state;
    NSString *_postalCode;
    NSString *_country;
    NSString *_ISOCountryCode;
    NSString *_formattedAddress;
}

@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *subLocality;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *ISOCountryCode;
@property (copy, nonatomic) NSString *formattedAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)postalAddressWithDictionaryRepresentation:(id)arg1;
+ (id)localizedStringForKey:(id)arg1;
+ (id)postalAddressWithAddressBookDictionaryRepresentation:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)isValid:(id *)arg1;
- (id)initWithPostalAddress:(id)arg1;
- (id)addressBookDictionaryRepresentation;

@end
