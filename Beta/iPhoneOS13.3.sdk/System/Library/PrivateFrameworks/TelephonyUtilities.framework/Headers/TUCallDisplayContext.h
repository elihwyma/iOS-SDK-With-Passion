/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSPersonNameComponents, NSString;

@interface TUCallDisplayContext : NSObject <Swift>

{
    int _legacyAddressBookIdentifier;
    NSPersonNameComponents *_personNameComponents;
    NSString *_suggestedName;
    NSString *_label;
    NSString *_companyName;
    NSString *_mapName;
    NSString *_location;
    NSString *_contactName;
    NSString *_contactLabel;
    NSString *_callDirectoryLabel;
    NSString *_callDirectoryLocalizedExtensionContainingAppName;
    NSString *_callDirectoryExtensionIdentifier;
    NSString *_contactIdentifier;
    NSString *_name;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSPersonNameComponents *personNameComponents;
@property (copy, nonatomic) NSString *suggestedName;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *companyName;
@property (copy, nonatomic) NSString *mapName;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *contactName;
@property (copy, nonatomic) NSString *contactLabel;
@property (copy, nonatomic) NSString *callDirectoryLabel;
@property (copy, nonatomic) NSString *callDirectoryLocalizedExtensionContainingAppName;
@property (copy, nonatomic) NSString *callDirectoryExtensionIdentifier;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (nonatomic) int legacyAddressBookIdentifier;
@property (copy, nonatomic, readonly) NSString *firstName;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)displayContextByMergingWithDisplayContext:(id)arg1;

@end
