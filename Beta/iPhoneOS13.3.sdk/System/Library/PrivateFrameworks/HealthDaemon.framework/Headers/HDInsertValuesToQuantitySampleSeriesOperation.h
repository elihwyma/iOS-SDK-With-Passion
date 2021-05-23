/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalableOperation.h>

@class HKQuantitySample, NSArray, NSUUID;

@interface HDInsertValuesToQuantitySampleSeriesOperation : HDJournalableOperation

{
    NSUUID *_legacySeriesIdentifier;
    _Bool _didAwakeFromJournal;
    HKQuantitySample *_series;
    NSArray *_values;
}

@property (copy, nonatomic, readonly) HKQuantitySample *series;
@property (copy, nonatomic, readonly) NSArray *values;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)initWithSeries:(id)arg1 values:(id)arg2;

@end
