/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/Swift-Protocol.h>

@class NSAttributedString, NSSet, NSString, UIColor, UIFont;

@protocol WFVariableProvider, WFVariableUIDelegate;

@protocol WFTextField <Swift>

@property (nonatomic) _Bool variablesDisabled;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (weak, nonatomic) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic) id <WFVariableUIDelegate> variableUIDelegate;
@property (nonatomic, getter=isEditable) _Bool editable;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) NSString *textContentType;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) unsigned long long syntaxHighlightingType;

@end
