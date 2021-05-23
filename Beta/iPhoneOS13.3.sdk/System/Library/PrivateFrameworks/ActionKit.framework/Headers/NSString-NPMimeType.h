/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSString.h>

@interface NSString (NPMimeType)

+ (id)uniqueString;
+ (id)stringWithData:(id)arg1 encoding:(unsigned long long)arg2;

- (id)mimeType;
- (id)stringByRemovingNewLinesAndWhitespace;
- (id)stringByConvertingHTMLToPlainText;
- (id)stringByEncodingHTMLEntities;
- (id)stringByEncodingHTMLEntities:(_Bool)arg1;
- (id)stringWithNewLinesAsBRs;
- (id)stringByLinkifyingURLs;
- (id)stringByStrippingTags;
- (id)stringByDecodingHTMLEntities;
- (id)en_scrubUsingRegex:(id)arg1 withMinLength:(unsigned short)arg2 maxLength:(unsigned short)arg3 invalidCharacterReplacement:(id)arg4;
- (id)en_scrubUsingRegex:(id)arg1 withMinLength:(unsigned short)arg2 maxLength:(unsigned short)arg3;
- (id)pcen;
- (id)stringByEscapingCriticalXMLEntities;
- (id)stringByUnescapingCrititcalXMLEntities;
- (id)IFUnicodeURL_splitAfterString:(id)arg1;
- (id)IFUnicodeURL_splitBeforeCharactersInSet:(id)arg1;
- (id)en_stringByUrlEncoding;
- (id)en_stringByUrlDecoding;
- (id)ik_URLEncodedString;
- (_Bool)enIsEqualToStringOrNil:(id)arg1;
- (_Bool)enIsEqualToStringWithEmptyEqualToNull:(id)arg1;

@end
