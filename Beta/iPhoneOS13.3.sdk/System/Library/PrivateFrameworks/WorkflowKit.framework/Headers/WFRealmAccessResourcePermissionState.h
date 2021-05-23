/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/RLMObject.h>

@class NSData, NSString, RLMLinkingObjects;

@interface WFRealmAccessResourcePermissionState : RLMObject

{
    NSString *_identifier;
    NSData *_data;
    RLMLinkingObjects *_trustedResources;
}

@property (copy) NSString *identifier;
@property (copy) NSData *data;
@property (readonly) RLMLinkingObjects *trustedResources;

+ (id)requiredProperties;
+ (id)linkingObjectsProperties;

@end
