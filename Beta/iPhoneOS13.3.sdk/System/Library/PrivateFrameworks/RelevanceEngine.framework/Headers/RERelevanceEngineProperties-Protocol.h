/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@class NSArray, NSString, REDataSourceManager, REFeatureSet, RELiveElementCoordinator, REMLModelManager, RERelevanceEngineConfiguration;

@protocol RERelevanceEngineProperties <Swift>

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) RERelevanceEngineConfiguration *configuration;
@property (nonatomic, readonly) REFeatureSet *rootFeatures;
@property (nonatomic, readonly) REFeatureSet *mlFeatures;
@property (nonatomic, readonly) NSArray *subsystems;
@property (nonatomic, readonly) RELiveElementCoordinator *coordinator;
@property (nonatomic, readonly) REDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) REMLModelManager *modelManager;

@end
