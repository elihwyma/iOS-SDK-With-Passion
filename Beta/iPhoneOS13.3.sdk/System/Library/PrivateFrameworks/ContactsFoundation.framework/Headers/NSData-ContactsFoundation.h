/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSData.h>

@interface NSData (ContactsFoundation)

+ (id)_cn_dataFromHexString:(id)arg1;

- (id)_cn_md5Hash;
- (_Bool)_cn_containsData:(id)arg1;
- (id)_cn_decodeBase64;
- (id)_cn_decodeBase64IgnoringWhitespace;
- (id)_cn_SHA256HashDataWithSalt:(id)arg1;
- (id)_cn_hexString;
- (id)_cn_SHA1String;
- (id)_cn_writeToURL:(id)arg1 options:(unsigned long long)arg2;

@end
