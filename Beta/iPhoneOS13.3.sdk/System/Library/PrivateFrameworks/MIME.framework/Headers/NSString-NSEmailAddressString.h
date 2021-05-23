/*
 Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <Foundation/NSString.h>

@interface NSString (NSEmailAddressString)

+ (id)mf_formattedAddressWithName:(id)arg1 email:(id)arg2 useQuotes:(_Bool)arg3;
+ (id)mf_stringWithData:(id)arg1 encoding:(unsigned long long)arg2;

- (id)mf_encodedHeaderDataWithEncodingHint:(unsigned int)arg1;
- (id)mf_decodeMimeHeaderValueWithCharsetHint:(id)arg1;
- (id)mf_uncommentedAddress;
- (id)mf_addressDomain;
- (id)mf_addressComment;
- (id)mf_emailAddressesWithEquivalentDomains;
- (id)mf_dataUsingEncoding:(unsigned long long)arg1;
- (id)mf_bestMimeCharsetUsingHint:(unsigned int)arg1;
- (id)mf_bestMimeCharsetForMessageDeliveryUsingSubtype:(id)arg1;
- (id)mf_copyUncommentedAddress;
- (id)mf_copyIDNAEncodedEmailAddress;
- (id)mf_addressCommentPersonNameComponents;
- (_Bool)mf_isLegalEmailAddress;
- (id)mf_personNameComponents;
- (_Bool)mf_isEqualToAddress:(id)arg1;
- (_Bool)mf_isLegalCommentedEmailAddress;
- (id)mf_copyAddressComment;
- (struct _NSRange)mf_rangeOfAddressDomain;
- (id)mf_copyDisplayStringInRange:(struct _NSRange)arg1;
- (id)mf_uncommentedAddressRespectingGroups;
- (id)mf_copyDisplayEmailAddress;
- (id)mf_copyIDNADecodedEmailAddress;
- (_Bool)mf_hasSameNamesAs:(id)arg1;
- (id)mf_MD5Digest;
- (id)mf_dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(_Bool)arg2;
- (long long)mf_caseInsensitiveCompareExcludingXDash:(id)arg1;
- (id)mf_copyDisplayString;
- (id)_mf_bestMimeCharset:(id)arg1;
- (id)mf_bestMimeCharset;
- (id)mf_decodeMimeHeaderValueWithEncodingHint:(unsigned int)arg1;

@end
