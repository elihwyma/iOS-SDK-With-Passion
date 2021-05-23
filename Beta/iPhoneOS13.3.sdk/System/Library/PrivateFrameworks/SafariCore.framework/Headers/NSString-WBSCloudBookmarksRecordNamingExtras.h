/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSString.h>

@interface NSString (WBSCloudBookmarksRecordNamingExtras)

@property (nonatomic, readonly) _Bool safari_isSpecialFolderRecordName;
@property (copy, nonatomic, readonly) NSString *safari_highLevelDomainFromHost;
@property (copy, nonatomic, readonly) NSString *safari_stringByReplacingHomoglyphForSpaceWithSpace;
@property (copy, nonatomic, readonly) NSString *safari_stringByNormalizingVersionString;
@property (copy, nonatomic, readonly) NSString *safari_userVisibleSafariBundleVersionFromFullVersion;
@property (nonatomic, readonly) _Bool safari_looksLikeEmailAddress;
@property (nonatomic, readonly) _Bool safari_looksLikeIPAddress;
@property (copy, nonatomic, readonly) NSString *safari_domainFromHost;
@property (copy, nonatomic, readonly) NSString *safari_suggestedFilenameFromTitleString;

+ (void)safari_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)safari_stringAsHexWithBuffer:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)safari_stringAsHexWithData:(id)arg1;

- (_Bool)safari_isCaseInsensitiveEqualToString:(id)arg1;
- (id)safari_simplifiedUserVisibleURLStringWithSimplifications:(unsigned long long)arg1 forDisplayOnly:(_Bool)arg2 simplifiedStringOffset:(unsigned long long *)arg3;
- (id)safari_simplifiedSiteNameForCredentialLookup;
- (id)safari_stringByRemovingCharactersInSet:(id)arg1;
- (_Bool)safari_looksLikeWillRedirectToURLStringAfterLogin:(id)arg1;
- (id)safari_simplifiedUserVisibleURLString;
- (_Bool)safari_hasCaseInsensitivePrefix:(id)arg1;
- (id)safari_stringByTrimmingWhitespace;
- (_Bool)safari_hasCaseInsensitiveSuffix:(id)arg1;
- (_Bool)safari_hasPrefix:(id)arg1;
- (id)safari_stringByRemovingWwwDotPrefix;
- (_Bool)safari_containsAllCharactersInString:(id)arg1;
- (id)safari_setOfAllSubstringsWithMinimumLength:(unsigned long long)arg1;
- (id)safari_filenameByFixingIllegalCharacters;
- (id)safari_topLevelDomainUsingCFFromComponents:(id)arg1;
- (id)safari_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (unsigned long long)safari_countOfString:(id)arg1;
- (_Bool)safari_containsInteriorWhitespace;
- (id)safari_base64DecodedData;
- (_Bool)safari_isCaseAndDiacriticInsensitiveEqualToString:(id)arg1;
- (_Bool)safari_hasLocalizedCaseInsensitivePrefix:(id)arg1;
- (_Bool)safari_anyComponentSeparatedByString:(id)arg1 hasLocalizedCaseInsensitivePrefix:(id)arg2;
- (_Bool)safari_containsPeriodOrHomoglyphForPeriod;
- (_Bool)safari_isVersionStringGreaterThanVersionString:(id)arg1;
- (_Bool)safari_isVersionStringBetweenVersionString:(id)arg1 andVersionString:(id)arg2;
- (id)safari_stringByRepeatingWithCount:(unsigned long long)arg1 joinedByString:(id)arg2;
- (id)safari_stringByRedactingBookmarkDAVServerID;
- (long long)safari_localizedCompareSortingEmptyStringAndNumericPrefixToEnd:(id)arg1;

@end
