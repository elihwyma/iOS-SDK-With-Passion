/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <Foundation/NSObject.h>

#import <MetricMeasurement/Swift-Protocol.h>

@class NSArray, NSMutableDictionary, NSSet;

@interface MXMSampleData : NSObject <Swift>

{
    NSArray *_enumSet;
    NSMutableDictionary *_tagsToSampleSets;
}

@property (retain) NSArray *enumSet;
@property (retain, nonatomic) NSMutableDictionary *tagsToSampleSets;
@property (copy, nonatomic, readonly) NSSet *tags;
@property (copy, nonatomic, readonly) NSArray *samples;
@property (nonatomic, readonly) unsigned long long numberOfSets;
@property (nonatomic, readonly) unsigned long long numberOfSamples;

+ (_Bool)supportsSecureCoding;
+ (id)data;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)mutableCopy;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSet:(id)arg1;
- (void)_appendData:(id)arg1;
- (id)dataMatchingFilter:(id)arg1;
- (void)_appendAttribute:(id)arg1;
- (void)_appendSet:(id)arg1;
- (id)initWithSets:(id)arg1;
- (id)sampleSetsWithTag:(id)arg1;
- (id)_sampleSetsWithTag:(id)arg1;
- (id)sampleSetWithTag:(id)arg1 attributes:(id)arg2;
- (id)_dataMatchingFilter:(id)arg1;
- (id)sampleSetWithTag:(id)arg1 attribute:(id)arg2;

@end
