/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@interface WFNumberFieldParameter : WFParameter

{
    _Bool _allowsDecimalNumbers;
    _Bool _allowsNegativeNumbers;
    long long _textAlignment;
}

@property (nonatomic, readonly) long long textAlignment;
@property (nonatomic, readonly) _Bool allowsDecimalNumbers;
@property (nonatomic, readonly) _Bool allowsNegativeNumbers;

+ (_Bool)defaultAllowsNegativeNumbers;
+ (_Bool)defaultAllowsDecimalNumbers;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (id)defaultSupportedVariableTypes;
- (_Bool)shouldAlignLabels;

@end
