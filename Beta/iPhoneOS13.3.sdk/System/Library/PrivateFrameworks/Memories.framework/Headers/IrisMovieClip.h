/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MovieClip.h>

@class KenBurnsInfo, PVEffect;

__attribute__((visibility("hidden")))
@interface IrisMovieClip : MovieClip

{
    _Bool _front;
    PVEffect *_frameBlendEffect;
    IrisMovieClip *_shiftedClip;
    KenBurnsInfo *_kenBurnsInfo;
    PVEffect *_kenBurnsEffect;
}

@property (nonatomic, getter=isFront) _Bool front;
@property (retain, nonatomic) KenBurnsInfo *kenBurnsInfo;
@property (retain, nonatomic) PVEffect *kenBurnsEffect;
@property (retain, nonatomic) PVEffect *frameBlendEffect;
@property (nonatomic, readonly) IrisMovieClip *shiftedClip;

+ (id)irisMovieClipWithURL:(id)arg1 asset:(id)arg2 front:(_Bool)arg3;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)maxDuration;
- (struct CGAffineTransform)transform:(struct CGSize)arg1 fillDest:(_Bool)arg2;
- (void)validateEffectRange:(CDStruct_e83c9415)arg1 inProject:(id)arg2;

@end
