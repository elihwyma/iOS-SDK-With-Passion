/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@class NSString;

@interface WFTextInputParameter : WFParameter

{
    _Bool _secureTextEntry;
    _Bool _smartQuotesDisabled;
    _Bool _smartDashesDisabled;
    _Bool _multiline;
    _Bool _processesIntoContentItems;
    NSString *_textContentType;
    NSString *_prefix;
    long long _keyboardType;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _textAlignment;
    unsigned long long _hintDisplayMode;
    unsigned long long _syntaxHighlightingType;
}

@property (copy, nonatomic) NSString *prefix;
@property (nonatomic, readonly, getter=isSecureTextEntry) _Bool secureTextEntry;
@property (nonatomic, readonly) long long keyboardType;
@property (copy, nonatomic, readonly) NSString *textContentType;
@property (nonatomic, readonly) long long autocapitalizationType;
@property (nonatomic, readonly) long long autocorrectionType;
@property (nonatomic, readonly) _Bool smartQuotesDisabled;
@property (nonatomic, readonly) _Bool smartDashesDisabled;
@property (nonatomic, readonly) long long textAlignment;
@property (nonatomic, readonly, getter=isMultiline) _Bool multiline;
@property (nonatomic, readonly) unsigned long long hintDisplayMode;
@property (nonatomic, readonly) unsigned long long syntaxHighlightingType;
@property (nonatomic, readonly) _Bool processesIntoContentItems;

- (id)initWithDefinition:(id)arg1;
- (void)setLocalizedPlaceholder:(id)arg1;
- (Class)singleStateClass;
- (id)defaultSupportedVariableTypes;
- (id)defaultSerializedRepresentation;
- (_Bool)shouldAlignLabels;
- (id)hintForState:(id)arg1;

@end
