/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNClustererOptions.h>

@interface VNClustererBuilderOptions : VNClustererOptions

{
    float _ageClassifierBabyThreshold;
    float _ageClassifierKidThreshold;
}

@property (nonatomic) float ageClassifierBabyThreshold;
@property (nonatomic) float ageClassifierKidThreshold;

+ (_Bool)_defaultAgeClassifierKidThreshold:(float *)arg1 forFaceprintRequestRevision:(unsigned long long)arg2 error:(id *)arg3;
+ (_Bool)_defaultAgeClassifierBabyThreshold:(float *)arg1 forFaceprintRequestRevision:(unsigned long long)arg2 error:(id *)arg3;

- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5;

@end
