/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/KonaClip.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TransitionClip : KonaClip

{
    _Bool _forcedNoOverlap;
    NSDictionary *_transitionEffectSettings;
}

@property (retain, nonatomic) NSString *transitionName;
@property (nonatomic) int transitionDirection;
@property (nonatomic, readonly) int overlapType;
@property (nonatomic) int type;
@property (nonatomic) _Bool forcedNoOverlap;
@property (nonatomic) int audioEnabledType;
@property (nonatomic) float effectRangeBias;
@property (copy, nonatomic) NSDictionary *transitionEffectSettings;
@property (nonatomic, readonly) CDStruct_e83c9415 effectRange;

+ (int)overlapTypeForName:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)audioEnabled;
- (int)clipType;
- (int)transitionEatLeft;
- (int)transitionEatRight;
- (int)biasedDuration;
- (id)plistRepresentationFromProject:(id)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (_Bool)overlapIsCurrentlyForced;
- (void)setTransitionEatLeft:(int)arg1;
- (void)setTransitionEatRight:(int)arg1;
- (int)biasedStartOffset;
- (id)transitionIDFromName:(id)arg1;

@end
