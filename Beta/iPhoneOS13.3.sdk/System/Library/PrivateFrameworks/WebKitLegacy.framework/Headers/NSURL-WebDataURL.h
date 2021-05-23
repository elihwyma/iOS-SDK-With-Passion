/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSURL.h>

@interface NSURL (WebDataURL)

+ (id)_web_uniqueWebDataURL;
+ (id)_web_URLWithUserTypedString:(id)arg1;
+ (id)_webkit_URLWithUserTypedString:(id)arg1;
+ (id)_web_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_webkit_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithDataAsString:(id)arg1;
+ (id)_web_URLWithData:(id)arg1;
+ (id)_web_URLWithData:(id)arg1 relativeToURL:(id)arg2;

- (id)_web_userVisibleString;
- (id)_webkit_URLByRemovingFragment;
- (id)_web_originalDataAsString;
- (id)_webkit_URLFromURLOrSchemelessFileURL;
- (id)_webkit_canonicalize;
- (_Bool)_webkit_isJavaScriptURL;
- (id)_webkit_scriptIfJavaScriptURL;
- (_Bool)_webkit_isFileURL;
- (id)_web_schemeData;
- (id)_web_hostData;
- (id)_web_originalData;
- (_Bool)_web_isEmpty;
- (const char *)_web_URLCString;
- (id)_webkit_canonicalize_with_wtf;
- (id)_web_URLByRemovingUserInfo;
- (id)_web_schemeSeparatorWithoutColon;
- (id)_web_dataForURLComponentType:(long long)arg1;
- (id)_web_hostString;
- (id)_webkit_suggestedFilenameWithMIMEType:(id)arg1;

@end
