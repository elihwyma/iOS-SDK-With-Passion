//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

#import <RelevanceEngine/REAppUsagePredictorProperties-Protocol.h>

@class RETimeline;

@interface REAppUsagePredictor : REPredictor <REAppUsagePredictorProperties>
{
    RETimeline *_timeline;
}

+ (double)updateInterval;
+ (id)supportedFeatures;
// - (void).cxx_destruct;
@property(readonly, nonatomic) RETimeline *timeline;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)update;

@end

