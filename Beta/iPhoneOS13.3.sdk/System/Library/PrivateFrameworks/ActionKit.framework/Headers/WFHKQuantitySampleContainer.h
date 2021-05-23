/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class HKQuantitySample, HKUnit, NSArray, NSString;

@interface WFHKQuantitySampleContainer : NSObject <Swift>

{
    _Bool _canProvideDataSamples;
    HKUnit *_unit;
    double _value;
    NSArray *_subsamples;
    HKQuantitySample *_quantitySample;
    NSArray *_subcontainers;
}

@property (retain, nonatomic) HKQuantitySample *quantitySample;
@property (retain, nonatomic) NSArray *subcontainers;
@property (retain, nonatomic) NSArray *subsamples;
@property (retain, nonatomic) HKUnit *unit;
@property (nonatomic, readonly) _Bool hasValue;
@property (nonatomic, readonly) double value;
@property (nonatomic, readonly) _Bool hasSubsamples;
@property (copy, nonatomic, readonly) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool canProvideDataSamples;
@property (nonatomic, readonly) NSArray *dataSamples;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)normalizedValue;
- (void)updateValue:(id)arg1 fromStatisticsOperation:(long long)arg2;
- (id)initWithSample:(id)arg1 unit:(id)arg2;
- (id)initWithSubsamples:(id)arg1 unit:(id)arg2;

@end
