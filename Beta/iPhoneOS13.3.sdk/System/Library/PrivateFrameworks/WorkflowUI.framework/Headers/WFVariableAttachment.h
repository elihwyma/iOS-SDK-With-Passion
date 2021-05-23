/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/NSTextAttachment.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, UIColor, UIFont, WFVariable, WFVariableAttachmentCell;

@interface WFVariableAttachment : NSTextAttachment <Swift>

{
    _Bool _enabled;
    _Bool _selected;
    _Bool _highlighted;
    UIFont *_font;
    UIColor *_tintColor;
    WFVariable *_variable;
    NSString *_overrideVariableName;
    WFVariableAttachmentCell *_wf_attachmentCell;
}

@property (retain, nonatomic) WFVariableAttachmentCell *wf_attachmentCell;
@property (nonatomic, readonly) WFVariable *variable;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) NSString *overrideVariableName;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVariable:(id)arg1;
- (id)attachmentCell;
- (id)accessibilityLabel;
- (void)variableDidChange:(id)arg1;

@end
