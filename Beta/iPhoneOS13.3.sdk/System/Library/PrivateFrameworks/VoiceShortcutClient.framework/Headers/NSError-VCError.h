/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

#import <Foundation/NSError.h>

@interface NSError (VCError)

+ (id)_vc_voiceShortcutErrorWithCode:(long long)arg1 extraUserInfo:(id)arg2 reason:(id)arg3;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 reason:(id)arg2;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 extraUserInfo:(id)arg2 reason:(id)arg3;
+ (id)vc_persistenceErrorWithUnderlyingError:(id)arg1;
+ (id)vc_partialPersistenceErrorWithPartialErrors:(id)arg1;

- (_Bool)vc_isFileNotFound;
- (_Bool)vc_isFileAlreadyExists;

@end
