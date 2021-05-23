/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HKQuantityType, NSArray, NSDateInterval, NSString, _HKDateIntervalCollection;

@protocol HDStatisticsCollectionCalculatorDataSource, HDStatisticsCollectionCalculatorSourceOrderProvider;

@interface HDStatisticsCollectionCalculator : NSObject <Swift>

{
    struct unique_ptr<_HDStatisticsCollectionCalculatorImplementation, std::__1::default_delete<_HDStatisticsCollectionCalculatorImplementation>> _implementation;
    CDUnknownBlockType _statisticsHandler;
    long long _computationMethod;
    NSArray *_maskedIntervals;
    id <HDStatisticsCollectionCalculatorSourceOrderProvider> _sourceOrderProvider;
}

@property (copy, nonatomic, readonly) HKQuantityType *quantityType;
@property (copy, nonatomic, readonly) _HKDateIntervalCollection *intervalCollection;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) unsigned long long mergeStrategy;
@property (nonatomic, readonly) long long computationMethod;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) double mergeGranularity;
@property (copy, nonatomic, readonly) NSArray *maskedIntervals;
@property (copy, nonatomic) CDUnknownBlockType statisticsHandler;
@property (weak, nonatomic) id <HDStatisticsCollectionCalculatorDataSource> dataSource;
@property (weak, nonatomic) id <HDStatisticsCollectionCalculatorSourceOrderProvider> sourceOrderProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)calculatorForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4;
+ (id)calculatorForArchivedRepresentation:(id)arg1 error:(id *)arg2;
+ (id)calculatorForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 computationMethod:(long long)arg5;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (id).cxx_construct;
- (_Bool)queryForInitialStatisticsWithError:(id *)arg1;
- (id)currentStatistics;
- (_Bool)setMaskedIntervals:(id)arg1 error:(id *)arg2;
- (_Bool)invalidateInterval:(id)arg1 error:(id *)arg2;
- (id)archivedRepresentationWithError:(id *)arg1;
- (_Bool)addSampleValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4 error:(id *)arg5;
- (_Bool)performAddSampleTransaction:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)sourceForSourceID:(long long)arg1;
- (id)initForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 computationMethod:(long long)arg5;
- (void)orderSourceIDs:(vector_d87a6415 *)arg1;
- (id)bundleIdentifierForSourceID:(long long)arg1;
- (void)configureMergeAnchor:(id)arg1;

@end
