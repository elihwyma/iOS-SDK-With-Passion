/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MovieClip.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CutawayClip : MovieClip

{
    _Bool startOffsetValidated;
    _Bool forcedNoFadeIn;
    _Bool forcedNoFadeOut;
    int forcedDuration;
}

@property (retain, nonatomic) NSString *cutawayName;
@property (nonatomic) int cutawayDirection;
@property (nonatomic) _Bool startOffsetValidated;
@property (nonatomic) struct CGRect pipRect;
@property (nonatomic, readonly) struct CGRect pipRectWithAspectRatio;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) struct CGPoint cutawayOffset;
@property (nonatomic) struct CGPoint underlayOffset;
@property (nonatomic, readonly) int animateInDuration;
@property (nonatomic, readonly) int animateOutDuration;
@property (nonatomic) int cutawayType;
@property (nonatomic) int forcedDuration;
@property (nonatomic) _Bool forcedNoFadeIn;
@property (nonatomic) _Bool forcedNoFadeOut;

+ (id)cutawayWithClip:(id)arg1 type:(int)arg2;

- (int)duration;
- (double)aspectRatio;
- (float)scaleFactor;
- (int)startOffset;
- (void)setStartOffset:(int)arg1;
- (int)clipType;
- (float)translateY;
- (float)translateX;
- (float)maxTranslateX;
- (float)clipValue:(float)arg1 toMax:(float)arg2;
- (float)maxTranslateY;
- (struct CGRect)defaultPIPRect;
- (void)didFinishTrimming;
- (struct CGRect)rectInRect:(struct CGRect)arg1;

@end
