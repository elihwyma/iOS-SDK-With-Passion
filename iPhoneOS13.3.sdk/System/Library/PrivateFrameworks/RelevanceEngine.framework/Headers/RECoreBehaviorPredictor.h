//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

#import <RelevanceEngine/REPredictorObserver-Protocol.h>

@class NSMapTable;

@interface RECoreBehaviorPredictor : REPredictor <REPredictorObserver>
{
    NSMapTable *_locations;
    NSUInteger _dayValue;
    NSUInteger _hourValue;
}

+ (id)supportedFeatures;
+ (double)updateInterval;
// - (void).cxx_destruct;
- (void)predictorDidUpdate:(id)arg1;
- (void)pause;
- (void)resume;
- (void)update;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)_init;

@end
