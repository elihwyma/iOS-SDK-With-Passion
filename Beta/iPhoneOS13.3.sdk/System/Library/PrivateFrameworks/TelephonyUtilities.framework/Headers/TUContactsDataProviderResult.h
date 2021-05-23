/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TUContactsDataProviderResult : NSObject

{
    int _legacyAddressBookIdentifier;
    NSString *_localizedName;
    NSString *_companyName;
    NSString *_contactLabel;
    NSArray *_contacts;
}

@property (copy, nonatomic) NSArray *contacts;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *companyName;
@property (copy, nonatomic) NSString *contactLabel;
@property (nonatomic) int legacyAddressBookIdentifier;

- (id)description;

@end
