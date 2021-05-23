/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFResource.h>

@interface WFHealthKitResource : WFResource

+ (_Bool)isSingleton;
+ (_Bool)mustBeAvailableForDisplay;

- (void)refreshAvailability;

@end
