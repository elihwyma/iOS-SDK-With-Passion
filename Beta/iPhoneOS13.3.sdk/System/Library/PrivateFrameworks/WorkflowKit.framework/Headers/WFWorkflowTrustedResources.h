/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/RLMObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class RLMArray, RLMLinkingObjects;

@protocol WFRealmAccessResourcePermissionState, WFTrustedJavaScriptDomain;

@interface WFWorkflowTrustedResources : RLMObject <Swift>

{
    RLMArray<WFTrustedJavaScriptDomain> *_trustedDomains;
    RLMArray<WFRealmAccessResourcePermissionState> *_accessResourcePermissionStates;
    RLMLinkingObjects *_workflows;
}

@property (retain) RLMArray<WFTrustedJavaScriptDomain> *trustedDomains;
@property (retain) RLMArray<WFRealmAccessResourcePermissionState> *accessResourcePermissionStates;
@property (readonly) RLMLinkingObjects *workflows;

+ (id)requiredProperties;
+ (id)linkingObjectsProperties;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
