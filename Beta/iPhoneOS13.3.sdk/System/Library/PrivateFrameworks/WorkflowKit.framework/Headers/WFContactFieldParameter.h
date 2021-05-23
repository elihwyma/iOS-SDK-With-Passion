/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@class NSArray;

@interface WFContactFieldParameter : WFParameter

{
    _Bool _allowsTextEntry;
    long long _textAlignment;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    NSArray *_supportedContactProperties;
}

@property (nonatomic, readonly) _Bool allowsTextEntry;
@property (nonatomic, readonly) long long keyboardType;
@property (nonatomic, readonly) long long textAlignment;
@property (nonatomic, readonly) long long autocapitalizationType;
@property (nonatomic, readonly) long long autocorrectionType;
@property (nonatomic, readonly) NSArray *supportedContactProperties;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (Class)stateClass;
- (Class)multipleStateClass;
- (_Bool)shouldAlignLabels;

@end
