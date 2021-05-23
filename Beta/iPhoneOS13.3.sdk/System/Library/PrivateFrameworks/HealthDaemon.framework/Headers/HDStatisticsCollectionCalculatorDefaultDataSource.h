/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, HDSQLitePredicate, HKQuantityType, NSNumber, NSSet, NSString, _HKFilter;

@interface HDStatisticsCollectionCalculatorDefaultDataSource : NSObject

{
    HDSQLitePredicate *_fullPredicate;
    _Bool _isRealQuantityType;
    _Bool _includeUnfrozenSeries;
    HDProfile *_profile;
    HKQuantityType *_quantityType;
    HDSQLitePredicate *_predicate;
    NSSet *_restrictedSourceEntities;
    _HKFilter *_filter;
    NSNumber *_anchor;
    long long _shouldContinueFrequency;
    CDUnknownBlockType _shouldContinueHandler;
}

@property (weak, nonatomic, readonly) HDProfile *profile;
@property (copy, nonatomic, readonly) HKQuantityType *quantityType;
@property (copy, nonatomic) HDSQLitePredicate *predicate;
@property (copy, nonatomic) NSSet *restrictedSourceEntities;
@property (copy, nonatomic) _HKFilter *filter;
@property (nonatomic) _Bool includeUnfrozenSeries;
@property (copy, nonatomic) NSNumber *anchor;
@property (nonatomic) long long shouldContinueFrequency;
@property (copy, nonatomic) CDUnknownBlockType shouldContinueHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_enumerateWithProfile:(id)arg1 quantityType:(id)arg2 predicate:(id)arg3 filter:(id)arg4 isQuantityType:(_Bool)arg5 includeUnfrozenSeries:(_Bool)arg6 error:(id *)arg7 block:(CDUnknownBlockType)arg8;
+ (_Bool)_enumerateSampleTypeWithProfile:(id)arg1 quantityType:(id)arg2 predicate:(id)arg3 error:(id *)arg4 block:(CDUnknownBlockType)arg5;
+ (_Bool)_addValueForQuantitySeriesSample:(id)arg1 calculator:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (_Bool)_addValueForQuantitySample:(id)arg1 calculator:(id)arg2 error:(id *)arg3;

- (id)initForProfile:(id)arg1 quantityType:(id)arg2 predicate:(id)arg3 restrictedSourceEntities:(id)arg4;
- (_Bool)collectionCalculator:(id)arg1 queryForInterval:(id)arg2 error:(id *)arg3 sampleHandler:(CDUnknownBlockType)arg4;
- (_Bool)_addValuesForQuantitySamples:(id)arg1 calculator:(id)arg2 requiresSeriesValues:(_Bool)arg3 transaction:(id)arg4 error:(id *)arg5;
- (_Bool)addValuesForQuantitySamples:(id)arg1 calculator:(id)arg2 includeSeries:(_Bool)arg3 error:(id *)arg4;

@end
