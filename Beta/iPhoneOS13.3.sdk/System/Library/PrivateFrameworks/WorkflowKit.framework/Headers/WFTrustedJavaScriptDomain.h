/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/RLMObject.h>

@class NSString;

@interface WFTrustedJavaScriptDomain : RLMObject

{
    NSString *_domain;
}

@property (copy) NSString *domain;

+ (id)requiredProperties;

@end
