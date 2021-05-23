/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@interface NUDataSet : NSObject <Swift>

{
    struct {
        double sum;
        double min;
        double max;
        double mean;
        double geomean;
        double median;
        double variance;
        double stddev;
        double stderr;
        double ci95;
        double cv;
        double mad;
    } _stats;
    struct {
        unsigned int sum:1;
        unsigned int min:1;
        unsigned int max:1;
        unsigned int mean:1;
        unsigned int geomean:1;
        unsigned int median:1;
        unsigned int variance:1;
        unsigned int stddev:1;
        unsigned int stderr:1;
        unsigned int ci95:1;
        unsigned int cv:1;
        unsigned int mad:1;
    } _flags;
    struct DataSet _data;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) double sum;
@property (nonatomic, readonly) double min;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double mean;
@property (nonatomic, readonly) double geometricMean;
@property (nonatomic, readonly) double median;
@property (nonatomic, readonly) double variance;
@property (nonatomic, readonly) double standardDeviation;
@property (nonatomic, readonly) double standardError;
@property (nonatomic, readonly) double confidenceInterval95;
@property (nonatomic, readonly) double coefficientOfVariation;
@property (nonatomic, readonly) double medianAbsoluteDeviation;
@property (nonatomic, readonly) double estimatedStandardDeviation;
@property (nonatomic, readonly) double estimatedStandardError;
@property (nonatomic, readonly) double estimatedConfidenceInterval95;
@property (nonatomic, readonly) double estimatedCoefficientOfVariation;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (double)valueAtIndex:(long long)arg1;
- (id)initWithValues:(const double *)arg1 count:(long long)arg2;
- (id)initWithValue:(double)arg1;
- (id)map:(CDUnknownBlockType)arg1;
- (id)filter:(CDUnknownBlockType)arg1;
- (double)percentile:(double)arg1;
- (const struct DataSet *)_const_data;
- (id)initWithDataSet:(id)arg1;
- (void)enumerateValues:(CDUnknownBlockType)arg1;
- (_Bool)isEqualToDataSet:(id)arg1;
- (void)_resetStats;

@end
