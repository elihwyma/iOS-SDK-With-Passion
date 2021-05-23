/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDictionary, NSString;

@interface WFBaseRemoteQuarantineRequest : MTLModel

{
    NSString *_appVersion;
    NSString *_osVersion;
    NSString *_userLocale;
}

@property (nonatomic, readonly) NSString *appVersion;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSString *userLocale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSString *policyFunctionName;
@property (nonatomic, readonly) NSString *defaultLocalizedPromptTitle;
@property (nonatomic, readonly) NSString *defaultLocalizedPromptMessage;
@property (nonatomic, readonly) NSString *defaultLocalizedDeniedErrorTitle;
@property (nonatomic, readonly) NSString *defaultLocalizedDeniedErrorMessage;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;
- (id)javaScriptCoreRepresentationWithError:(id *)arg1;

@end
