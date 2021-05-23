/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

#import <MPSCore/Swift-Protocol.h>

@interface MPSParallelRandomDistributionDescriptor : NSObject <Swift>

{
    float _minimum;
    float _maximum;
    float _mean;
    float _standardDeviation;
    unsigned long long _distributionType;
}

@property (nonatomic) unsigned long long distributionType;
@property (nonatomic) float minimum;
@property (nonatomic) float maximum;
@property (nonatomic) float mean;
@property (nonatomic) float standardDeviation;

+ (id)uniformDistributionDescriptorWithMinimum:(float)arg1 maximum:(float)arg2;
+ (id)defaultDistributionDescriptor;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
