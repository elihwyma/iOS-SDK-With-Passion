/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSString.h>

#import <EmailFoundation/Swift-Protocol.h>

@class EFSQLBinding, NSData;

@interface NSString (EmailFoundationAdditions) <Swift>

@property (copy, readonly) NSString *ef_SQLEscapedString;
@property (copy, readonly) NSString *ef_quotedSQLEscapedString;
@property (copy, readonly) NSData *ef_md5Digest;
@property (copy, readonly) NSData *ef_sha256Digest;
@property (readonly) _Bool ef_firstStrongDirectionalityIsLeftToRight;
@property (readonly) _Bool ef_lastStrongDirectionalityIsLeftToRight;
@property (readonly) _Bool ef_conformsToMarkupUTType;
@property (readonly) _Bool ef_conformsToIWorkUTType;
@property (readonly) _Bool ef_conformsToRFC822UTType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) EFSQLBinding *ef_SQLBinding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;

+ (id)ef_UUID;
+ (id)ef_stringByIsolatingDirectionalityForString:(id)arg1;

- (id)ef_stringByRemovingQuotesForLanguages:(id)arg1;
- (const void *)ef_lossyDefaultCStringBytes;
- (_Bool)ef_caseInsensitiveIsEqualToString:(id)arg1;
- (_Bool)ef_conformsToUTType:(struct __CFString *)arg1;
- (id)ef_stringByEscapingForXML;
- (id)_ef_sqliteFormattedWithFormatSpecifier:(const char *)arg1;
- (id)ef_stringByRemovingUnbalancedOpenQuote:(id)arg1 closeQuote:(id)arg2;
- (id)ef_wordComponentsForLocale:(id)arg1 minimumWordLength:(long long)arg2;
- (id)ef_wordComponentsForLocale:(id)arg1;
- (const char *)ef_sqliteAllocatedStringWithHexFromUTF8;
- (id)ef_stringByRemovingQuotedSubstringsForLocales:(id)arg1 tokenizationHandler:(CDUnknownBlockType)arg2;
- (id)ef_stringByRemovingUnbalancedQuotesForLanguages:(id)arg1;
- (id)ef_stringByRemovingTokenizedLinksUsingTokenizationHandler:(CDUnknownBlockType)arg1;
- (id)ef_stringByRemovingCharactersInSet:(id)arg1;
- (id)ef_quotedWordComponentsForLanguages:(id)arg1;
- (id)ef_stringByEscapingSQLLikeSpecialCharactersWithEscapeCharater:(unsigned short)arg1;
- (id)ef_substringWithIndexes:(id)arg1;
- (_Bool)ef_hasCaseInsensitivePrefix:(id)arg1;
- (id)ef_stringWithNoExtraSpaces;
- (id)ef_stringByAddingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)ef_stringByReplacingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (_Bool)ef_isWebAddress;
- (_Bool)ef_isUnsignedIntegerString;
- (id)ef_stringByEscapingSingleQuotes;

@end
