/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMAudioDataSource.h>

@class NSSet, NSString;

@interface AXMAudioDataSourceMixer : AXMAudioDataSource

{
    NSString *_name;
    double _panning;
    NSSet *_dataSources;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double panning;
@property (retain, nonatomic) NSSet *dataSources;
@property (nonatomic, readonly) _Bool isMonoOutput;

- (id)description;
- (id)initWithName:(id)arg1 sampleRate:(double)arg2 circular:(_Bool)arg3;
- (void)setCurrentSampleIndex:(unsigned long long)arg1;
- (void)addDataSource:(id)arg1;
- (void)removeDataSource:(id)arg1;
- (void)removeAllDataSources;
- (void)prepareNextSamples:(unsigned long long)arg1;

@end
