/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@class NSArray, REContentRanker, REMLModel;

@protocol REMLModelManagerProperties <Swift>

@property (nonatomic, readonly) unsigned long long modelVersionNumber;
@property (nonatomic, readonly) REMLModel *model;
@property (nonatomic, readonly) REContentRanker *contentRanker;
@property (nonatomic, readonly) _Bool supportsContentRanking;
@property (nonatomic, readonly) NSArray *orderedFeatures;

@end
