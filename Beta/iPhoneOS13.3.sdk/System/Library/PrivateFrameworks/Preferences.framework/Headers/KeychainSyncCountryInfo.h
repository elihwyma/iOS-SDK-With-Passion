/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface KeychainSyncCountryInfo : NSObject

{
    NSString *_countryCode;
    NSString *_countryName;
    NSString *_localizedCountryName;
    NSString *_dialingPrefix;
}

@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *countryName;
@property (retain, nonatomic) NSString *dialingPrefix;
@property (retain, nonatomic) NSString *localizedCountryName;

+ (id)countryInfoWithDictionary:(id)arg1;
+ (void)_loadCountriesIfNeeded;
+ (id)allCountries;
+ (id)countryInfoForCountryCode:(id)arg1 dialingPrefix:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
