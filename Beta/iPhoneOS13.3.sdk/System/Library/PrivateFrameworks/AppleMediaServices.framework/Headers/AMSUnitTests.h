/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@interface AMSUnitTests : NSObject

+ (_Bool)isRunningUnitTests;
+ (id)_encryptionKeys;
+ (void)_sync:(CDUnknownBlockType)arg1;
+ (id)encryptionKeyForDataProtectionClass:(unsigned long long)arg1;
+ (void)setEncryptionKey:(id)arg1 forDataProtectionClass:(unsigned long long)arg2;

@end
