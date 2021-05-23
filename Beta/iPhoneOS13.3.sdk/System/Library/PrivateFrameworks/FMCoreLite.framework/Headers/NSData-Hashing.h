/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSData.h>

@interface NSData (Hashing)

@property (copy, nonatomic, readonly) NSData *fm_sha1Hash;
@property (copy, nonatomic, readonly) NSData *fm_sha256Hash;
@property (copy, nonatomic, readonly) NSData *fm_sha512Hash;

- (id)hexString;
- (id)fm_hmac_md5WithKey:(id)arg1;
- (id)fm_hmac_sha1WithKey:(id)arg1;
- (id)fm_hmac_sha256WithKey:(id)arg1;
- (id)fm_hmac_sha512WithKey:(id)arg1;
- (id)fm_hexString;
- (id)fm_MACAddressString;

@end
