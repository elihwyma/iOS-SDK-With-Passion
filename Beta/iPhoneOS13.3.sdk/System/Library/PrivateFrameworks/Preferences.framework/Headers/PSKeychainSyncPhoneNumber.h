/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class KeychainSyncCountryInfo, NSString;

@interface PSKeychainSyncPhoneNumber : NSObject

{
    NSString *_digits;
    KeychainSyncCountryInfo *_countryInfo;
}

@property (retain, nonatomic) NSString *digits;
@property (retain, nonatomic) KeychainSyncCountryInfo *countryInfo;

- (id)formattedString;
- (id)_stringByAddingDialingPrefixToString:(id)arg1;
- (id)formattedStringWithDialingPrefix;
- (id)formattedAndObfuscatedString;

@end
