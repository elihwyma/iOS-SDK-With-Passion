/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol WFVariableProvider, WFVariableSuggesterDelegate;

@interface WFVariableSuggester : NSObject

{
    id <WFVariableSuggesterDelegate> _delegate;
    id <WFVariableProvider> _variableProvider;
    NSArray *_suggestedVariables;
    NSArray *_currentVariables;
    NSArray *_userDefinedVariableNames;
    NSArray *_outputActions;
    unsigned long long _maxSuggestionsCount;
    unsigned long long _minSuggestionsCount;
}

@property (retain, nonatomic) NSArray *suggestedVariables;
@property (weak, nonatomic) id <WFVariableSuggesterDelegate> delegate;
@property (weak, nonatomic) id <WFVariableProvider> variableProvider;
@property (copy, nonatomic) NSArray *currentVariables;
@property (copy, nonatomic) NSArray *userDefinedVariableNames;
@property (copy, nonatomic) NSArray *outputActions;
@property (nonatomic) unsigned long long maxSuggestionsCount;
@property (nonatomic) unsigned long long minSuggestionsCount;

- (id)init;
- (void)availableVariablesDidChange;

@end
