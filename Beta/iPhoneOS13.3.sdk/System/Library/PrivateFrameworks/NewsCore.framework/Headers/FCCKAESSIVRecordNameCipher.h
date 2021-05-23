/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@interface FCCKAESSIVRecordNameCipher : NSObject

- (id)_derivedKeyFromKey:(id)arg1;
- (id)_encryptionSalt;
- (id)encryptRecordName:(id)arg1 withKey:(id)arg2;
- (id)decryptRecordName:(id)arg1 withKey:(id)arg2;

@end
