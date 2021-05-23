/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/TUCallDisplayContext.h>

@class NSPersonNameComponents, NSString;

@interface TUMutableCallDisplayContext : TUCallDisplayContext

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSPersonNameComponents *personNameComponents;
@property (copy, nonatomic) NSString *firstName;
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

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)mergeValuesFromDisplayContext:(id)arg1;

@end
