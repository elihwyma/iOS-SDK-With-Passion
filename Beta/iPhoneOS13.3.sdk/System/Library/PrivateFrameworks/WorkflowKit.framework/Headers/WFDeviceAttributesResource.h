/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFResource.h>

@interface WFDeviceAttributesResource : WFResource

+ (_Bool)mustBeAvailableForDisplay;

- (void)refreshAvailability;

@end
