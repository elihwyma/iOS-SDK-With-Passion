/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSDate, NSString;

@protocol FCPersonalizationAggregate <Swift>

@property (nonatomic, readonly) NSString *featureKey;
@property (nonatomic, readonly) double clicks;
@property (nonatomic, readonly) double impressions;
@property (nonatomic, readonly) unsigned long long eventCount;
@property (nonatomic, readonly) NSDate *lastModified;
@property (nonatomic, readonly) double confidence;

- (unsigned short)personalizationValueWithCorrelatedAggregate:baseline:decayRate:baselineClicksMultiplier: /* Error: Ran out of types for this method. */;
- (unsigned short)relativePersonalizationValueWithCorrelatedAggregate:baseline:decayFactor:baselineClicksMultiplier: /* Error: Ran out of types for this method. */;
- (unsigned short)personalizationValueWithBaseline:decayRate: /* Error: Ran out of types for this method. */;
- (unsigned short)personalizationValueWithBaseline:decayRate:baselineClicksMultiplier: /* Error: Ran out of types for this method. */;
- (unsigned short)powerWithDecayFactor: /* Error: Ran out of types for this method. */;

@end
