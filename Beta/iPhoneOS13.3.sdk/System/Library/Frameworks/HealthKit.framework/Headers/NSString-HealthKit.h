/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSString.h>

@interface NSString (HealthKit)

+ (id)hk_randomStringOfLength:(long long)arg1;

- (_Bool)hk_isValidPurposeString;
- (id)hk_copyNonEmptyString;
- (_Bool)hk_isBase64;
- (id)hk_MD5HashAsUUID;
- (id)hk_MD5Hash;
- (long long)hk_compareBuildVersionWithString:(id)arg1;
- (id)hk_stringByUnescapingJSONCharactersForDisplay;
- (id)hk_stringByRemovingCharactersInSet:(id)arg1;
- (id)hk_stripLeadingTrailingWhitespace;
- (id)hk_trimWhitespaceAndNewlines;
- (id)hk_stringByAppendingKeyPathComponent:(id)arg1;
- (_Bool)hk_isCaseInsensitiveSubstringInString:(id)arg1;
- (_Bool)hk_isBetweenLowerBuildVersion:(id)arg1 upperBuildVersion:(id)arg2;
- (id)hk_SHA224Hash;
- (id)hk_SHA256Hash;
- (id)hk_SHA384Hash;
- (id)hk_SHA512Hash;

@end
