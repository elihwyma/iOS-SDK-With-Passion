/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUtilitarianScene.h>

@interface NTKUtilitarianNumbersScene : NTKUtilitarianScene

- (id)initWithSize:(struct CGSize)arg1 forDevice:(id)arg2;
- (void)applyDensity:(unsigned long long)arg1;
- (double)getRelativeFractionFromOverallFraction:(double)arg1 forIntervalStart:(double)arg2 andIntervalEnd:(double)arg3;
- (id)scrubbingObscuredCollectionNodes;
- (void)setAlpha:(double)arg1 element:(id)arg2 index:(int)arg3;
- (void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3;

@end
