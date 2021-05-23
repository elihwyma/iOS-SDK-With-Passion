/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWInferenceConfiguration.h>

@class NSNumber;

@interface BWLandmarksInferenceConfiguration : BWInferenceConfiguration

{
    _Bool _refinesMouthLandmarks;
    _Bool _refinesLeftEyeLandmarks;
    _Bool _refinesRightEyeLandmarks;
    _Bool _detectsBlinking;
    _Bool _detectLandmarksInFullSizeInput;
    NSNumber *_cascadeStepCount;
    unsigned long long _maximumNumberOfFaces;
    _Bool _alwaysExecuteForRedEyeReduction;
    unsigned long long _constellationPointCount;
}

@property (nonatomic) _Bool refinesMouthLandmarks;
@property (nonatomic) _Bool refinesLeftEyeLandmarks;
@property (nonatomic) _Bool refinesRightEyeLandmarks;
@property (nonatomic) _Bool detectsBlinking;
@property (retain, nonatomic) NSNumber *cascadeStepCount;
@property (nonatomic) unsigned long long maximumNumberOfFaces;
@property (nonatomic) _Bool alwaysExecuteForRedEyeReduction;
@property (nonatomic) _Bool detectLandmarksInFullSizeInput;
@property (nonatomic) unsigned long long constellationPointCount;

+ (id)configuration;
+ (CDStruct_08002bce)portraitVersion;
+ (unsigned long long)portraitMaximumNumberOfFaces;
+ (_Bool)isPortraitPrewarmingRequired;

- (void)dealloc;
- (id)initWithInferenceType:(int)arg1;

@end
