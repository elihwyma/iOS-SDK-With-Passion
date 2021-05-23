/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <TouchML/TMLReactiveValue.h>

@class NSArray, NSString, TMLContext;

@interface TMLExpressionReactiveValue : TMLReactiveValue

{
    NSString *_expression;
    TMLContext *_context;
    NSArray *_bindings;
}

- (id)value;
- (id)initWithExpression:(id)arg1 context:(id)arg2 bindings:(id)arg3 valueType:(unsigned long long)arg4;

@end
