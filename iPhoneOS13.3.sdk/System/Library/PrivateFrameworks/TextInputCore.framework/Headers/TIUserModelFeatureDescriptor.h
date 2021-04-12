//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIUserModelMetricsDescriptor.h>

@class NSArray, NSString;

@interface TIUserModelFeatureDescriptor : TIUserModelMetricsDescriptor
{
    long long _discoveryThreshold;
    NSString *_discoveryCounterName;
    NSString *_configString;
    NSArray *_thresholds;
}

+ (id)configureFeatureDescriptors;
@property(readonly, nonatomic) NSArray *thresholds; // @synthesize thresholds=_thresholds;
@property(readonly, nonatomic) NSString *configString; // @synthesize configString=_configString;
@property(readonly, nonatomic) NSString *discoveryCounterName; // @synthesize discoveryCounterName=_discoveryCounterName;
@property(readonly, nonatomic) long long discoveryThreshold; // @synthesize discoveryThreshold=_discoveryThreshold;
// - (void).cxx_destruct;
- (id)initWithFeatureName:(id)arg1 discoveryThreshold:(long long)arg2 discoveryCounterName:(id)arg3 configString:(id)arg4 counterNames:(id)arg5 thresholds:(id)arg6;

@end

