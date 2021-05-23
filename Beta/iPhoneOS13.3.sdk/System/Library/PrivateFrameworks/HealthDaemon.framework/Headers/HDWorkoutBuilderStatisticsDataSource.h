/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, HDWorkoutBuilderEntity, HKQuantityType, NSString;

@interface HDWorkoutBuilderStatisticsDataSource : NSObject

{
    _Bool _enabled;
    HDProfile *_profile;
    HKQuantityType *_quantityType;
    HDWorkoutBuilderEntity *_builderEntity;
}

@property (weak, nonatomic, readonly) HDProfile *profile;
@property (copy, nonatomic, readonly) HKQuantityType *quantityType;
@property (nonatomic, readonly) HDWorkoutBuilderEntity *builderEntity;
@property (nonatomic) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)collectionCalculator:(id)arg1 queryForInterval:(id)arg2 error:(id *)arg3 sampleHandler:(CDUnknownBlockType)arg4;
- (id)initWithProfile:(id)arg1 quantityType:(id)arg2 builderEntity:(id)arg3;

@end
