/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/KonaClip.h>

__attribute__((visibility("hidden")))
@interface MovieClip : KonaClip

+ (id)movieClipWithURL:(id)arg1;
+ (id)movieClipWithURL:(id)arg1 avAsset:(id)arg2;
+ (_Bool)audioEnabledByDefault;

- (double)aspectRatio;
- (float)speed;
- (int)clipType;
- (_Bool)isFreezeFrame;
- (_Bool)hasVisualCharacteristic;
- (struct CGAffineTransform)transform:(struct CGSize)arg1 fillDest:(_Bool)arg2;
- (_Bool)hasAudioCharacteristic;
- (int)rawSourceDuration;
- (struct CGAffineTransform)transform:(struct CGSize)arg1 fillDest:(_Bool)arg2 applyAnamorphic:(_Bool)arg3;
- (void)clearFreezeFrame;
- (void)initializeFromURL:(id)arg1 asset:(id)arg2;

@end
