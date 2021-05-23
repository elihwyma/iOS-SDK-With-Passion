/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface CNAutocompleteFetchContext : NSObject

{
    _Bool _predictsBasedOnOutgoingInteraction;
    NSString *_sendingAddress;
    NSString *_sendingAddressAccountIdentifier;
    NSString *_domainIdentifier;
    NSArray *_relatedContacts;
    NSArray *_otherAddressesAlreadyChosen;
    NSDate *_date;
    NSString *_locationUUID;
    NSString *_title;
    NSArray *_bundleIdentifiers;
}

@property (copy) NSString *sendingAddress;
@property (copy) NSString *sendingAddressAccountIdentifier;
@property (copy) NSString *domainIdentifier;
@property (copy) NSArray *relatedContacts;
@property (copy) NSArray *otherAddressesAlreadyChosen;
@property (copy) NSDate *date;
@property (copy) NSString *locationUUID;
@property (copy) NSString *title;
@property (copy) NSArray *bundleIdentifiers;
@property _Bool predictsBasedOnOutgoingInteraction;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValid:(id *)arg1;

@end
