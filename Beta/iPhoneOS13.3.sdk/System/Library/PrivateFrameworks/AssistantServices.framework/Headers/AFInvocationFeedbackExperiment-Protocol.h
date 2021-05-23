/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/Swift-Protocol.h>

@protocol AFInvocationFeedbackExperiment <Swift>

@property (nonatomic, readonly) unsigned long long featureGroups;

- (unsigned short)logExperimentExposureForInvocationFeedbacks;
- (unsigned short)isFeatureGroupOneEnabled;
- (unsigned short)isFeatureGroupTwoEnabled;
- (unsigned short)isFeatureGroupThreeEnabled;
- (unsigned short)isFeatureGroupFourEnabled;

@end
