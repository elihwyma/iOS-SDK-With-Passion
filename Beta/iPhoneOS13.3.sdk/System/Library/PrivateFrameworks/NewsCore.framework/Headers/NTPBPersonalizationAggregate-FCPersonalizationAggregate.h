/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsTransport/NTPBPersonalizationAggregate.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDate, NSString;

@interface NTPBPersonalizationAggregate (FCPersonalizationAggregate) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *featureKey;
@property (nonatomic, readonly) double clicks;
@property (nonatomic, readonly) double impressions;
@property (nonatomic, readonly) unsigned long long eventCount;
@property (nonatomic, readonly) NSDate *lastModified;
@property (nonatomic, readonly) double confidence;
@property (nonatomic) double timestamp;

- (double)personalizationValueWithCorrelatedAggregate:(id)arg1 baseline:(id)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4;
- (double)relativePersonalizationValueWithCorrelatedAggregate:(id)arg1 baseline:(id)arg2 decayFactor:(double)arg3 baselineClicksMultiplier:(double)arg4;
- (double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2;
- (double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2 baselineClicksMultiplier:(double)arg3;
- (double)_personalizationValueWithBaselineClicks:(double)arg1 baselineImpressions:(double)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4;
- (double)powerWithDecayFactor:(double)arg1;

@end
