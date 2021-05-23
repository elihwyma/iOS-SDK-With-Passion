/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/KonaClip.h>

@class PVEffect;

__attribute__((visibility("hidden")))
@interface MotionGeneratorClip : KonaClip

{
    PVEffect *_generatorEffect;
}

@property (retain, nonatomic) PVEffect *generatorEffect;

- (int)maxDuration;
- (int)clipType;
- (_Bool)isFreezeFrame;
- (_Bool)hasVisualCharacteristic;
- (_Bool)hasAudioCharacteristic;
- (id)plistRepresentationFromProject:(id)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)validateEffectRange:(CDStruct_e83c9415)arg1 inProject:(id)arg2;

@end
