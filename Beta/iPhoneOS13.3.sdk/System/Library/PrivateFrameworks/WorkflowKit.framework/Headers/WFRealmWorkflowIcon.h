/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/RLMObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSData, RLMLinkingObjects;

@interface WFRealmWorkflowIcon : RLMObject <Swift>

{
    long long _backgroundColorValue;
    long long _glyphNumber;
    NSData *_customImageData;
    RLMLinkingObjects *_workflows;
}

@property (nonatomic) long long backgroundColorValue;
@property (nonatomic) long long glyphNumber;
@property (copy, nonatomic) NSData *customImageData;
@property (readonly) RLMLinkingObjects *workflows;

+ (id)className;
+ (id)requiredProperties;
+ (id)defaultPropertyValues;
+ (id)linkingObjectsProperties;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
