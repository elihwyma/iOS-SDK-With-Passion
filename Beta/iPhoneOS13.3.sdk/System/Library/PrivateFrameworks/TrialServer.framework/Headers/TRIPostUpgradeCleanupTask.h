/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@class NSMutableSet;

@interface TRIPostUpgradeCleanupTask

{
    NSMutableSet *_invalidExperimentIds;
}

+ (id)task;

- (int)run;
- (id)nextTasksForRunStatus:(int)arg1;
- (_Bool)validateRolloutDescriptorsWithNamespaceCompatibilityVersions:(id)arg1;
- (_Bool)validateExperimentDescriptorsWithNamespaceCompatibilityVersions:(id)arg1;

@end
