/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFContentItemFilterAction.h>

@class NSString;

@interface WFFindHealthSamplesAction : WFContentItemFilterAction

@property (nonatomic, readonly) NSString *readableSampleType;

- (id)query;
- (id)configurationData;
- (void)initializeParameters;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)finishRunningWithError:(id)arg1;
- (id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2;
- (id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;
- (id)parameterDefinitions;
- (void)resourceAvailabilityChanged;
- (void)updateParameterVisibility;
- (id)sampleTypeName;
- (void)updateSourcesForSampleType:(id)arg1;
- (void)finishRunningWithNoSamples;

@end
