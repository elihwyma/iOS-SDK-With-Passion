/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSString.h>

@interface NSString (ContactsUnitTesting)

@property (readonly) _Bool _cn_requiresPhoneNumberSanitizing;

+ (id)_cn_stringByRepeatingCharacter:(BOOL)arg1 length:(unsigned long long)arg2;
+ (_Bool)_cn_isBlank:(id)arg1;
+ (id)_cn_LTRControlCharacters;
+ (id)_cn_whitespaceExceptAscii32CharacterSet;
+ (id)_cn_phoneNumberInvalidCharacters;

- (id)_cn_take:(unsigned long long)arg1;
- (id)_cn_flatMap:(CDUnknownBlockType)arg1;
- (id)_cn_tokens;
- (_Bool)_cn_hasPrefix:(id)arg1;
- (id)_cn_stringBySanitizingPhoneNumber;
- (id)_cn_SHA256HashStringWithSalt:(id)arg1;
- (_Bool)_cn_containsSubstring:(id)arg1;
- (_Bool)_cn_caseInsensitiveIsEqual:(id)arg1;
- (_Bool)_cn_hasPrefix:(id)arg1 options:(unsigned long long)arg2;
- (id)_cn_resultWithAllCharacters:(CDUnknownBlockType)arg1;
- (id)_cn_stringByReplacingStrings:(id)arg1;
- (void)_cn_eachCharacter:(CDUnknownBlockType)arg1;
- (struct _NSRange)_cn_rangeFromIndex:(unsigned long long)arg1;
- (id)_cn_nameComponentTokensUsingLocale:(id)arg1 inferredNameOrder:(long long *)arg2;
- (id)_cn_trimmedString;
- (_Bool)_cn_hasSuffix:(id)arg1;
- (id)_cn_stringByNormalizingCase;
- (_Bool)_cn_isBlank;
- (_Bool)_cn_containsSubstring:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)_cn_hasSuffix:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)_cn_containsCharacterInSet:(id)arg1;
- (struct _NSRange)_cn_rangeOfCommonPrefixWithString:(id)arg1 options:(unsigned long long)arg2;
- (id)_cn_stringByAddingPercentEscapesToEntireURL;
- (_Bool)_cn_hasCaseAndDiacriticInsensitivePrefix:(id)arg1;
- (id)_cn_stringByDeletingCharactersInSet:(id)arg1;
- (struct _NSRange)_cn_rangeOfCommonPrefixWithString:(id)arg1;
- (id)_cn_stringByAddingPercentEscapesIfNecessary;
- (id)_cn_stringByDeletingNumberOfPathComponents:(unsigned long long)arg1;
- (id)_cn_nameComponentTokens;
- (id)_cn_truncateAtLength:(unsigned long long)arg1 addEllipsisIfTrunctated:(_Bool)arg2;
- (id)_cn_stringByNormalizingWhitespace;

@end
