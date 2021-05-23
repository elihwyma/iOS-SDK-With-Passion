/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@class NSArray;

@interface WFTagFieldParameter : WFParameter

{
    _Bool _allowsTextEntry;
    long long _keyboardType;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _textAlignment;
    NSArray *_suggestedTags;
}

@property (nonatomic, readonly) _Bool allowsTextEntry;
@property (nonatomic, readonly) long long keyboardType;
@property (nonatomic, readonly) long long autocapitalizationType;
@property (nonatomic, readonly) long long autocorrectionType;
@property (nonatomic, readonly) long long textAlignment;
@property (nonatomic, readonly) NSArray *suggestedTags;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (_Bool)shouldAlignLabels;

@end
