/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOPNRUtils : NSObject

+ (id)_cacheDirectoryPath;
+ (id)_stringByStrippingFormattingAndNotVisiblyAllowable:(id)arg1;
+ (id)_preferredLanguages;
+ (id)_internationalCodeForCountryCode:(id)arg1;
+ (id)_currentLocale;
+ (id)_countryCodeForInternationalCode:(id)arg1;
+ (id)_currentCountry;
+ (_Bool)_isValidPhoneNumber:(id)arg1;
+ (id)PNRTrieSuffix;
+ (id)_frameworkPathForFileBaseName:(id)arg1 fileExtension:(id)arg2;
+ (id)versionFilePath;
+ (id)_cachesPathForFileBaseName:(id)arg1 fileExtension:(id)arg2;
+ (_Bool)_createCachesDirectory;
+ (id)PNRZippedTrieSuffix;
+ (id)PNRZippedStringsSuffix;
+ (id)PNRStringsSuffix;
+ (id)alePackDirectory;

@end
