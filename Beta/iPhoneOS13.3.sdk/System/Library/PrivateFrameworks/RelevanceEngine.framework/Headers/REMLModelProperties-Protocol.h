/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@class NSString;

@protocol REMLModelProperties <Swift>

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) _Bool allowsExploreExploit;
@property (nonatomic, readonly) float exploreExploitModulator;
@property (nonatomic, readonly) float priorMean;
@property (nonatomic, readonly) float simulationExploreExploitModulator;
@property (nonatomic, readonly) unsigned long long featureBitWidth;
@property (nonatomic, readonly) unsigned long long maxFeatureCount;
@property (nonatomic, readonly) long long getNumberOfCoordinates;
@property (nonatomic, readonly) float averagePrediction;
@property (nonatomic, readonly) float normalizedEntropy;
@property (nonatomic, readonly) unsigned long long totalExampleCount;
@property (nonatomic, readonly) unsigned long long totalPositiveCount;

@end
