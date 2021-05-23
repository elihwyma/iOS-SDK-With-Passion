/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <Foundation/NSString.h>

@interface NSString (SFExtras)

+ (void)_parsec_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)parsec_stringByBase64EncodingData:(id)arg1;

- (id)parsec_base64DecodedData;
- (int)sf_asResultPlacement;
- (int)sf_asTextAlignment;
- (int)sf_asButtonAlignment;
- (int)sf_asImageAlignment;
- (int)sf_asColumnAlignment;
- (int)sf_cardSectionType;
- (_Bool)parsec_hasCaseInsensitiveSuffix:(id)arg1;
- (_Bool)parsec_caseInsensitiveContainsString:(id)arg1;
- (_Bool)parsec_hasPrefix:(id)arg1;
- (id)parsec_readableURLStringAfterRemovingSubdomains;
- (id)_parsec_highLevelDomainFromHost;
- (id)_parsec_topLevelDomainUsingCFFromComponents:(id)arg1;
- (_Bool)parsec_isCaseInsensitiveEqualToString:(id)arg1;
- (_Bool)parsec_hasCaseInsensitivePrefix:(id)arg1;
- (_Bool)parsec_hasLocalizedCaseInsensitivePrefix:(id)arg1;

@end
