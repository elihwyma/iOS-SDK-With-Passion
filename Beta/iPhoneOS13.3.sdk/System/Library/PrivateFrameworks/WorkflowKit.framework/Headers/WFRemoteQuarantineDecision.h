/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDictionary, NSString;

@interface WFRemoteQuarantineDecision : MTLModel

{
    unsigned long long _policy;
    NSString *_errorTitle;
    NSString *_errorMessage;
}

@property (nonatomic, readonly) unsigned long long policy;
@property (nonatomic, readonly) NSString *errorTitle;
@property (nonatomic, readonly) NSString *errorMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;

@end
