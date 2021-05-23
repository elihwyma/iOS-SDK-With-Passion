/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/KonaClip.h>

__attribute__((visibility("hidden")))
@interface AudioClip : KonaClip

{
    _Bool startOffsetValidated;
    _Bool cachedFades;
    int cachedFadeIn;
    int cachedFadeOut;
}

@property (nonatomic) int cachedFadeIn;
@property (nonatomic) int cachedFadeOut;
@property (nonatomic) _Bool cachedFades;
@property (nonatomic) int audioType;
@property (nonatomic) _Bool startOffsetValidated;

+ (int)defaultAudioTypeForClipType:(int)arg1;
+ (_Bool)audioEnabledByDefault;
+ (int)defaultClipTypeForAudioType:(int)arg1;
+ (id)backgroundClip;
+ (id)soundEffectClip;

- (id)init;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setDuration:(int)arg1;
- (int)startOffset;
- (void)setStartOffset:(int)arg1;
- (int)clipType;
- (_Bool)hasAudioCharacteristic;
- (void)setAudioFadeOutDuration:(int)arg1;
- (void)setAudioFadeInDuration:(int)arg1;
- (int)audioFadeInDuration;
- (int)audioFadeOutDuration;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (id)themeID;
- (void)setThemeID:(id)arg1;
- (_Bool)isBackgroundAudio;
- (void)validateFades;
- (id)asBackgroundAudioClip;
- (id)asForegroundAudioClip;

@end
