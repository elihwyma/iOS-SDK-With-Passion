/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSAESKeyManager : NSObject

+ (id)generateIfNecessaryVoiceTriggerProfilesAESKey;
+ (id)getVoiceTriggerProfilesAESKey;
+ (id)generateIfNecessaryAESKeyWithKeySizeInBits:(unsigned long long)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3 shouldGenerateIfNecessary:(_Bool)arg4;
+ (id)generateAESKeyWithKeySizeInBits:(unsigned long long)arg1;
+ (_Bool)storeAESKeyInKeychain:(id)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3;
+ (id)getAESKeyFromKeychainWithApplicationTag:(id)arg1 keyLabel:(id)arg2;
+ (_Bool)deleteAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2;
+ (id)getKeychainAttributesForAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2;

@end
