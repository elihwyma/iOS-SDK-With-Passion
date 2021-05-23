/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSData.h>

@interface NSData (OFNSDataCryptoExtensions)

+ (id)AES128GenerateVerifierWithPassword:(id)arg1;
+ (_Bool)AES128CheckVerifier:(id)arg1 withPassword:(id)arg2;

- (id)sha1Hash;
- (id)md5Hash;
- (id)AES128EncryptWithPassword:(id)arg1;
- (id)hmacSha1Hash:(id)arg1;
- (id)hexaStringRepresentation;
- (id)AES128DecryptWithPassword:(id)arg1;
- (id)dictionaryFromNode:(struct _xmlNode *)arg1 parentResult:(id)arg2 isParentContent:(_Bool)arg3;
- (id)searchDataByXPathQuery:(struct _xmlDoc *)arg1 query:(id)arg2;
- (id)stringWithEncoding:(unsigned long long)arg1;
- (id)searchHTMLContentByXPathQuery:(id)arg1;

@end
