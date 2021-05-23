/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSString.h>

@interface NSString (WBSFaviconProviderNSStringExtras)

@property (copy, nonatomic, readonly) NSString *safari_stringByRemovingParenthesizedDomain;
@property (copy, nonatomic, readonly) NSString *safari_userVisibleTitleIgnoringFullURLString;
@property (nonatomic, readonly) _Bool safari_isPDFMIMEType;
@property (copy, nonatomic, readonly) NSString *safari_stringByRemovingExcessWhitespace;

+ (id)safari_localizedStringFromComponents:(id)arg1 usingConjunctionForFinalJoiner:(_Bool)arg2;
+ (id)safari_stringWithJSValue:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2 nullStringPolicy:(long long)arg3;
+ (id)safari_stringWithJSValue:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2;
+ (id)safari_stringWithUTF8Bytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)safari_stringByBase64EncodingData:(id)arg1;

- (id)safari_bestURLForUserTypedString;
- (id)safari_containedURLs;
- (id)safari_bestURLStringForUserTypedString;
- (id)safari_normalizedParsecInputString;
- (id)_safari_variantsOfURLStringInFaviconFormat:(_Bool)arg1;
- (id)safari_stringByFormattingForFaviconDatabase;
- (id)safari_domainURLStringPrefixVariantsForFaviconDatabase;
- (id)safari_stringByFormattingForIconControllerDatabase;
- (id)safari_urlStringVariantsForFaviconDatabase;
- (id)safari_domainFaviconURLStringVariantsForFaviconDatabase;
- (id)safari_urlStringVariantsForIconControllerDatabase;
- (id)safari_bestLanguageTag;
- (_Bool)safari_looksLikeObscuredPassword;
- (id)safari_md5Hash;
- (id)safari_canonicalURLStringForFrequentlyVisitedSites;
- (id)safari_userVisibleURL;
- (id)safari_stringByFoldingWideCharactersAndNormalizing;
- (_Bool)safari_hasDirectionalPrefix;
- (_Bool)safari_isJavaScriptURLString;
- (id)safari_possibleTopLevelDomainCorrectionForUserTypedString;
- (id)safari_stringByRemovingTopLevelDomainFromHost;
- (id)safari_stringByRemovingUnnecessaryCharactersFromUserTypedURLString;
- (id)safari_fixedStringByExpandingTildeInPathToUserHomeDirectory;
- (id)safari_stringByDeletingStartingSlash;
- (id)safari_stringByDeletingTrailingSlash;
- (id)safari_stringEncodedAsURLQueryParameter;
- (id)safari_stringByRemovingDirectionalPrefix;
- (id)safari_stringBySubstitutingAmpersandAndAngleBracketsForHTMLEntities;
- (id)safari_stringBySubstitutingHTMLEntitiesForAmpersandAndAngleBrackets;
- (_Bool)safari_isPathExtensionAllowedForAnalytics;
- (id)safari_scriptIfJavaScriptURLString;
- (void)safari_enumerateSubdomainRangesInHostUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_canonicalURLForFrequentlyVisitedSites;
- (_Bool)safari_isVisualDuplicateOfURLString:(id)arg1;
- (id)safari_sha256Hash;
- (id)safari_stringWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;

@end
