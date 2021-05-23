/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSData.h>

@interface NSData (WebKitExtras)

- (id)_webkit_guessedMIMETypeForXML;
- (id)_webkit_guessedMIMEType;
- (_Bool)_web_isCaseInsensitiveEqualToCString:(const char *)arg1;
- (id)_webkit_parseRFC822HeaderFields;
- (_Bool)_web_startsWithBlankLine;
- (long long)_web_locationAfterFirstBlankLine;

@end
