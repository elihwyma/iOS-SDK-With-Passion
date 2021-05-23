/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIEnhancementCalculation.h>

__attribute__((visibility("hidden")))
@interface CIEnhancementCalculator : CIEnhancementCalculation

{
    _Bool faceBalanceEnabled;
    _Bool vibranceEnabled;
    _Bool curvesEnabled;
    _Bool shadowsEnabled;
}

@property _Bool faceBalanceEnabled;
@property _Bool vibranceEnabled;
@property _Bool curvesEnabled;
@property _Bool shadowsEnabled;

- (id)init;
- (void)dealloc;
- (void)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 features:(id)arg3;
- (void)setupHistogramsUsing:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4;
- (void)analyzeFeatures:(id)arg1 usingContext:(id)arg2 baseImage:(id)arg3;
- (id)histogramFromRows:(id)arg1 componentOffset:(unsigned int)arg2;
- (id)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 detectorOpts:(id)arg3;

@end
