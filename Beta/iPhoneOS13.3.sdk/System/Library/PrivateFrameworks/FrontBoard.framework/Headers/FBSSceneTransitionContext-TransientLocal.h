/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoardServices/FBSSceneTransitionContext.h>

@class BSMutableSettings, FBSceneUpdateContext, FBWatchdogTransitionContext;

@interface FBSSceneTransitionContext (TransientLocal)

@property (nonatomic, readonly) FBSceneUpdateContext *updateContext;
@property (nonatomic, readonly) FBWatchdogTransitionContext *watchdogTransitionContext;
@property (copy, nonatomic, readonly) BSMutableSettings *transientLocalClientSettings;
@property (nonatomic) _Bool allowCPUThrottling;

+ (long long)_mapOldPolicyFromNewPolicy:(long long)arg1;
+ (long long)_mapNewPolicyFromOldPolicy:(long long)arg1;

- (void)setUpdateContext:(id)arg1;
- (void)setWatchdogTransitionContext:(id)arg1;
- (double)watchdogExtension;
- (void)setWatchdogExtension:(double)arg1;
- (double)watchdogScaleFactor;
- (void)setWatchdogScaleFactor:(double)arg1;
- (_Bool)runWatchdogIndependently;
- (void)setRunWatchdogIndependently:(_Bool)arg1;
- (long long)watchdogPolicy;
- (void)setWatchdogPolicy:(long long)arg1;

@end
