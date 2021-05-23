/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFGranularAccessResource.h>

@class NSArray;

@interface WFRemoteServerAccessResource : WFGranularAccessResource

{
    NSArray *_requestedURLs;
}

@property (copy, nonatomic) NSArray *requestedURLs;

+ (_Bool)isSystemResource;
+ (Class)perWorkflowStateClass;

- (id)name;
- (id)icon;
- (unsigned long long)globalLevelStatus;
- (id)localizedWorkflowLevelNotDeterminedStatusMessage;
- (id)localizedWorkflowLevelDeniedStatusMessage;
- (id)localizedWorkflowLevelPromptTemplate;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)requestedEntries;

@end
