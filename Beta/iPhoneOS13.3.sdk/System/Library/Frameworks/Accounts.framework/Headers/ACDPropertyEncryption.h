/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

@interface ACDPropertyEncryption : NSObject

+ (struct __SecKey *)accountPropertyCryptoKeyCreatingIfNecessary:(_Bool)arg1;
+ (id)encryptProperty:(id)arg1;
+ (id)decryptProperty:(id)arg1;
+ (id)_decryptableDataForStoredProperty:(id)arg1;

@end
