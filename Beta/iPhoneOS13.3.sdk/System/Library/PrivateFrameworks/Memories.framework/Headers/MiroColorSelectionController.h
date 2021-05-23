/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class MiroBlueprint, NSArray, NSDictionary, NSMutableArray, UIColor;

@protocol MiroTitleColorConfiguration;

__attribute__((visibility("hidden")))
@interface MiroColorSelectionController : NSObject

{
    _Bool _hasWarnedOnceNilTitleID;
    int _titleSnapshotAspect;
    NSDictionary *_colorTitlePresets;
    NSArray *_safeColorRanges;
    NSArray *_presetBackgroundColors;
    NSArray *_presetTextOnBlackColors;
    NSArray *_presetTextOnWhiteColors;
    NSArray *_presetTextOverImageColors;
    MiroBlueprint *_blueprint;
    UIColor *_backgroundColor;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_gapColor;
    NSArray *_randomNumbers;
    NSDictionary *_colorAnalysis;
    unsigned long long _analysisRegion;
    NSArray *_accentColors;
    NSArray *_safeAccentColors;
    NSArray *_imageDominantColors;
    NSArray *_centerDominantColors;
    NSArray *_lowerThirdDominantColors;
    id <MiroTitleColorConfiguration> _debugTitleConfiguration;
    NSMutableArray *_debugSafeAccentRanges;
    NSMutableArray *_debugFilteredImageDominantRanges;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *secondaryColor;
@property (retain, nonatomic) UIColor *gapColor;
@property (retain, nonatomic) NSArray *randomNumbers;
@property (nonatomic, readonly) NSDictionary *colorTitlePresets;
@property (nonatomic, readonly) NSArray *presetBackgroundColors;
@property (nonatomic, readonly) NSArray *presetTextOnBlackColors;
@property (nonatomic, readonly) NSArray *presetTextOnWhiteColors;
@property (nonatomic, readonly) NSArray *presetTextOverImageColors;
@property (nonatomic, readonly) NSArray *safeColorRanges;
@property (retain, nonatomic) NSDictionary *colorAnalysis;
@property (nonatomic) unsigned long long analysisRegion;
@property (retain, nonatomic) NSArray *accentColors;
@property (retain, nonatomic) NSArray *safeAccentColors;
@property (retain, nonatomic) NSArray *imageDominantColors;
@property (retain, nonatomic) NSArray *centerDominantColors;
@property (retain, nonatomic) NSArray *lowerThirdDominantColors;
@property (nonatomic) _Bool hasWarnedOnceNilTitleID;
@property (retain, nonatomic) id <MiroTitleColorConfiguration> debugTitleConfiguration;
@property (retain, nonatomic) NSMutableArray *debugSafeAccentRanges;
@property (retain, nonatomic) NSMutableArray *debugFilteredImageDominantRanges;
@property (retain, nonatomic) MiroBlueprint *blueprint;
@property (nonatomic) int titleSnapshotAspect;

+ (void)fetchColorAnalysisForAsset:(id)arg1 atTime:(int)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)colorIsDark:(id)arg1;
+ (_Bool)colorIsLight:(id)arg1;
+ (void)_fetchColorAnalysisDictionaryForAsset:(id)arg1 startTime:(int)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_colorAnalysisForStartTime:(int)arg1 asset:(id)arg2;
+ (_Bool)colorIsSaturated:(id)arg1;

- (id)init;
- (id)debugImageDominantColors;
- (id)debugCenterDominantColors;
- (id)debugLowerThirdDominantColors;
- (id)debugAccentColors;
- (id)debugBackgroundColor;
- (id)debugPrimaryColor;
- (id)debugSecondaryColor;
- (id)debugFilteredImageDominantColors;
- (id)initWithColorAnalysis:(id)arg1;
- (void)_generateRandomNumbersForRandomizerSeed:(unsigned int *)arg1;
- (void)_invalidateColors;
- (void)_setupColorsIfNecessary;
- (id)_randomPresetBackgroundColor;
- (id)_dominantColorsForAnalysisRegion:(unsigned long long)arg1;
- (id)_analysisColorsForKey:(id)arg1;
- (id)_filterDominantColorsForAnalysisRegion:(unsigned long long)arg1;
- (id)_presetColorsForKey:(id)arg1;
- (id)_selectSafeDominantColorForAnalysisRegion:(unsigned long long)arg1;
- (id)_selectSafeAccentColor;
- (id)_randomPresetColorOverWhiteColor;
- (id)_randomPresetColorOverBlackColor;
- (id)_selectSafeTextColorOverImageForAnalysisRegion:(unsigned long long)arg1;
- (id)_presetHSVValuesForKey:(id)arg1;
- (id)_colorsWithSimilarHue:(double)arg1 fromPresets:(id)arg2 usingHSVValues:(id)arg3;
- (id)_filterSafeBackgroundColorsForColors:(id)arg1 withDebugArray:(id)arg2;
- (id)_presetBackgroundColorWithSimilarHueForColor:(id)arg1;
- (id)_analysisHSVValuesForAnalysisRegion:(unsigned long long)arg1;
- (id)_presetTextOverImageColorWithSimilarHue:(double)arg1;

@end
