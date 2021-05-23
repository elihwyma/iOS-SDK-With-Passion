/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/Swift-Protocol.h>

@class NSString;

@protocol WFRemoteQuarantineRequest <Swift>

@property (nonatomic, readonly) NSString *policyFunctionName;
@property (nonatomic, readonly) NSString *defaultLocalizedPromptTitle;
@property (nonatomic, readonly) NSString *defaultLocalizedPromptMessage;
@property (nonatomic, readonly) NSString *defaultLocalizedDeniedErrorTitle;
@property (nonatomic, readonly) NSString *defaultLocalizedDeniedErrorMessage;

- (unsigned short)javaScriptCoreRepresentationWithError: /* Error: Ran out of types for this method. */;

@end
