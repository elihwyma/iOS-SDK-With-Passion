/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSString.h>

@interface NSString (VSSpeechService)

+ (id)vs_markerStringForContext:(id)arg1;
+ (unsigned long long)_vs_countPhoneticSyllables_lhp:(id)arg1;
+ (unsigned long long)_vs_countPhoneticSyllables_xsampa:(id)arg1;
+ (_Bool)vs_isCJKCharacter:(unsigned short)arg1;

- (id)vs_textifyEmojiWithLanguage:(id)arg1;
- (id)vs_substituteAudioWithLocalPath;
- (id)vs_insertContextInfo:(id)arg1;
- (double)vs_measurePauses;
- (unsigned long long)vs_countPhoneticSyllables;
- (id)vs_removePhonetics;
- (id)vs_removeSpeechTags;
- (_Bool)vs_hasCJKCharacter;
- (id)md5hash;
- (id)preinstalledAudioHashForLanguage:(id)arg1 gender:(long long)arg2;

@end
