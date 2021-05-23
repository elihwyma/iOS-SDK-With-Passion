/*
 Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

#import <NSData.h>

@interface NSData (RCAdditions)

+ (id)rc_randomDataWithLength:(unsigned long long)arg1;

- (id)rc_gzipInflate;
- (id)rc_gzipDeflate;
- (id)rc_zlibInflate;
- (id)rc_zlibDeflate;
- (id)rc_encryptAESSIVWithKey:(id)arg1 additionalData:(id)arg2;
- (id)rc_decryptAESSIVWithKey:(id)arg1 additionalData:(id)arg2;
- (id)rc_sha256;
- (id)rc_URLSafeBase64EncodedStringWithOptions:(unsigned long long)arg1;

@end
