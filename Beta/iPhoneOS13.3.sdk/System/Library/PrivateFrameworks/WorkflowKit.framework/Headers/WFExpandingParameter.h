/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@class NSString;

@protocol WFExpandingParameterHintProvider;

@interface WFExpandingParameter : WFParameter

{
    NSString *_hintLabel;
    id <WFExpandingParameterHintProvider> _hintProvider;
}

@property (weak, nonatomic) id <WFExpandingParameterHintProvider> hintProvider;
@property (nonatomic, readonly) NSString *hintLabel;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (id)defaultSupportedVariableTypes;
- (_Bool)supportsImportQuestions;

@end
