/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSUnit;

@interface SRKeyboardProbabilityMetric : NSObject

{
    NSUnit *_unitType;
    long long _totalDataSamples;
    NSMutableArray *_mutableSampleValues;
}

@property (copy) NSUnit *unitType;
@property (nonatomic) long long totalDataSamples;
@property (retain) NSMutableArray *mutableSampleValues;
@property (copy, readonly) NSArray *distributionSampleValues;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
