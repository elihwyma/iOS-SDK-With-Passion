/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFBaseRemoteQuarantineRequest.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface WFJavaScriptStringRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest

{
    unsigned long long _runtimeType;
    NSURL *_targetURL;
    NSDictionary *_preRuntimeJavaScriptSerializedRepresentation;
    NSString *_preRuntimeJavaScriptString;
    NSString *_runtimeJavaScriptString;
    NSArray *_actionList;
}

@property (nonatomic) unsigned long long runtimeType;
@property (retain, nonatomic) NSURL *targetURL;
@property (nonatomic, readonly) NSDictionary *preRuntimeJavaScriptSerializedRepresentation;
@property (nonatomic, readonly) NSString *preRuntimeJavaScriptString;
@property (copy, nonatomic) NSString *runtimeJavaScriptString;
@property (copy, nonatomic) NSArray *actionList;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithWorkflow:(id)arg1 runtimeType:(unsigned long long)arg2 targetURL:(id)arg3 preRuntimeVariableString:(id)arg4 runtimeString:(id)arg5;
- (id)policyFunctionName;
- (id)defaultLocalizedPromptTitle;
- (id)defaultLocalizedPromptMessage;
- (id)defaultLocalizedDeniedErrorTitle;
- (id)defaultLocalizedDeniedErrorMessage;

@end
