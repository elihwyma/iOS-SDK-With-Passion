/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@class NSDictionary, REFeatureSet;

@protocol RERelevanceProviderEnvironmentProperties <Swift>

@property (nonatomic, readonly) REFeatureSet *supportedFeatures;
@property (nonatomic, readonly) NSDictionary *allProviderValues;

@end
