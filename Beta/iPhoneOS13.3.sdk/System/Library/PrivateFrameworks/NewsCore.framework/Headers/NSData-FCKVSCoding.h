/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSData.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface NSData (FCKVSCoding) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (id)fc_randomDataWithLength:(unsigned long long)arg1;

- (void)writeToKeyValuePair:(id)arg1;
- (id)fc_encryptAESSIVWithKey:(id)arg1 additionalData:(id)arg2;
- (id)fc_decryptAESSIVWithKey:(id)arg1 additionalData:(id)arg2;
- (id)fc_sha256;
- (id)fc_URLSafeBase64EncodedStringWithOptions:(unsigned long long)arg1;
- (id)fc_gzipDeflate;
- (_Bool)fc_anefKeyIsValid:(id)arg1;
- (id)fc_anefEncryptWithKey:(id)arg1;
- (id)fc_anefDecryptWithKey:(id)arg1;
- (id)fc_gzipInflate;
- (id)fc_zlibInflate;
- (id)fc_zlibDeflate;

@end
