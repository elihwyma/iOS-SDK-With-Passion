/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (AppleMediaServices)

@property (nonatomic, readonly) NSData *ams_compressedData;
@property (nonatomic, readonly) NSData *ams_decompressedData;
@property (nonatomic, readonly) NSString *ams_hexAddressDescription;
@property (nonatomic, readonly) NSString *ams_nvramDescription;
@property (nonatomic, readonly) NSData *ams_SHA1;

+ (id)_AESKeyForDataProtectionClass:(unsigned long long)arg1 error:(id *)arg2;
+ (id)_generateInitializationVectorDataWithError:(id *)arg1;
+ (id)_labelForDataProtectionClass:(unsigned long long)arg1;
+ (const struct __CFString *)_accessibleAttributeForDataProtectionClass:(unsigned long long)arg1;
+ (id)ams_generateEncryptionKey;

- (id)ams_decryptUsingKey:(id)arg1 initializationVectorData:(id)arg2 tagData:(id)arg3 error:(id *)arg4;
- (CDStruct_0f015c83)ams_encryptDataUsingKey:(id)arg1 error:(id *)arg2;
- (id)ams_decryptUsingDataProtectionClass:(unsigned long long)arg1 initializationVectorData:(id)arg2 tagData:(id)arg3 error:(id *)arg4;
- (CDStruct_0f015c83)ams_encryptDataUsingDataProtectionClass:(unsigned long long)arg1 error:(id *)arg2;

@end
