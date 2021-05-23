/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/KonaClip.h>

@class KenBurnsInfo, NSString, PVEffect;

__attribute__((visibility("hidden")))
@interface KenBurnsClip : KonaClip

{
    unsigned long long _animationStyle;
    _Bool _originalIsHEIF;
    PVEffect *_kbGeneratorEffect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PVEffect *kbGeneratorEffect;
@property (retain, nonatomic) KenBurnsInfo *kbInfo;
@property (nonatomic, readonly) PVEffect *kbEffect;
@property (nonatomic) unsigned long long animationStyle;
@property (nonatomic) _Bool originalIsHEIF;

+ (id)kenBurnsClipWithURL:(id)arg1;
+ (id)kenBurnsClipWithAssetRepresentation:(id)arg1;
+ (id)kenBurnsClipWithMovie:(id)arg1;
+ (id)kenBurnsClipWithPath:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isPortrait;
- (double)aspectRatio;
- (_Bool)isLandscape;
- (_Bool)isSquare;
- (_Bool)isTall;
- (_Bool)isPano;
- (int)clipType;
- (_Bool)hasVisualCharacteristic;
- (_Bool)hasPhotoCharacteristic;
- (struct CGAffineTransform)transform:(struct CGSize)arg1 fillDest:(_Bool)arg2;
- (double)autoEditShortestDurationWithBlueprint:(id)arg1;
- (double)autoEditShortestIdealDurationWithBlueprint:(id)arg1;
- (double)autoEditLongestDurationWithBlueprint:(id)arg1;
- (double)panoDurationMultiplier;
- (id)animationEffectID;
- (id)plistRepresentationFromProject:(id)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)validateEffectRange:(CDStruct_e83c9415)arg1 inProject:(id)arg2;
- (double)mediaAspectRatio;

@end
