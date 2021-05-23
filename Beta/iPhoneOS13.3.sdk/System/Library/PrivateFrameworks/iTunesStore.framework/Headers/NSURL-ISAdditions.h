/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSURL.h>

@interface NSURL (ISAdditions)

+ (id)queryStringForDictionary:(id)arg1 escapedValues:(_Bool)arg2;
+ (id)copyDictionaryForQueryString:(id)arg1 unescapedValues:(_Bool)arg2;
+ (id)unescapedStringForString:(id)arg1;
+ (id)_URLQueryParameterValueAllowedCharacterSet;
+ (id)escapedStringForString:(id)arg1;

- (id)sanitizedURL;
- (id)URLByAppendingQueryParameter:(id)arg1 value:(id)arg2;
- (id)copyQueryStringDictionaryWithUnescapedValues:(_Bool)arg1;
- (id)urlBySettingQueryStringDictionary:(id)arg1;
- (_Bool)isSafeExternalURL;
- (id)schemeSwizzledURL;
- (id)urlByReplacingSchemeWithScheme:(id)arg1;
- (void)enumerateQueryWithBlock:(CDUnknownBlockType)arg1;

@end
