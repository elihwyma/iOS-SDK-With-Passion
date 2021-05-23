/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFAppInstalledResource.h>

@class INCIntentExecutionInfo;

@interface WFIntentAvailableResource : WFAppInstalledResource

{
    INCIntentExecutionInfo *_executionInfo;
}

@property (nonatomic, readonly) INCIntentExecutionInfo *executionInfo;

- (id)appIdentifier;
- (void)refreshAvailability;
- (void)updateAvailabilityWithUpdatedVersionRequirementError:(id)arg1;

@end
