/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@interface HDDemoDataGeneratorConfiguration : NSObject

{
    _Bool _highFidelityGeneration;
    _Bool _shouldPresentNotifications;
    _Bool _shouldGenerateHealthDocuments;
    _Bool _shouldGenerateMedicalID;
    _Bool _shouldEnsureRecentWorkoutHasRoute;
    _Bool _shouldGenerateRecentLiquidsIntake;
    long long _profileType;
    long long _generationPeriodInDays;
    long long _biologicalSex;
    long long _sampleTrackingType;
    long long _nutritionTrackingType;
    long long _resultsTrackingType;
}

@property (nonatomic) long long profileType;
@property (nonatomic) long long generationPeriodInDays;
@property (nonatomic) _Bool highFidelityGeneration;
@property (nonatomic) _Bool shouldPresentNotifications;
@property (nonatomic) long long biologicalSex;
@property (nonatomic) long long sampleTrackingType;
@property (nonatomic) long long nutritionTrackingType;
@property (nonatomic) long long resultsTrackingType;
@property (nonatomic) _Bool shouldGenerateHealthDocuments;
@property (nonatomic) _Bool shouldGenerateMedicalID;
@property (nonatomic) _Bool shouldEnsureRecentWorkoutHasRoute;
@property (nonatomic) _Bool shouldGenerateRecentLiquidsIntake;

+ (id)configurationFromDefaults:(id)arg1;

- (id)init;
- (void)configureForProfileType:(long long)arg1;
- (void)persistToDefaults:(id)arg1;

@end
