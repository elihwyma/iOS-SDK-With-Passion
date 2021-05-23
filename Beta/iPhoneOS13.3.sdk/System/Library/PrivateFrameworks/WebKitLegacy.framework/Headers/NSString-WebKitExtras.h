/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSString.h>

@interface NSString (WebKitExtras)

+ (id)_webkit_localCacheDirectoryWithBundleIdentifier:(id)arg1;

- (id)_web_decodeHostName;
- (_Bool)_webkit_isCaseInsensitiveEqualToString:(id)arg1;
- (id)_web_stringByAbbreviatingWithTildeInPath;
- (_Bool)_webkit_hasCaseInsensitivePrefix:(id)arg1;
- (_Bool)_webkit_hasCaseInsensitiveSuffix:(id)arg1;
- (id)_webkit_filenameByFixingIllegalCharacters;
- (id)_webkit_stringByTrimmingWhitespace;
- (id)_web_capitalizeRFC822HeaderFieldName;
- (id)_web_possibleURLsForForUserTypedString:(_Bool)arg1;
- (id)_web_possibleURLsForUserTypedString;
- (id)_web_possibleURLPrefixesForUserTypedString;
- (id)_web_bestURLForUserTypedString;
- (_Bool)_webkit_isJavaScriptURL;
- (id)_webkit_scriptIfJavaScriptURL;
- (_Bool)_webkit_isFileURL;
- (id)_webkit_stringByReplacingValidPercentEscapes;
- (struct _NSRange)_webkit_rangeOfURLScheme;
- (_Bool)_web_isUserVisibleURL;
- (id)_web_encodeHostName;
- (id)_webkit_decodeHostName;
- (id)_webkit_encodeHostName;
- (_Bool)_webkit_looksLikeAbsoluteURL;

@end
