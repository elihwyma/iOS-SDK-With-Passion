/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSParagraphStyle, NSString, NSTextContainer, UIColor, UIFont, WFSlotIdentifier, WFSlotTemplateLayoutManager, WFSlotTemplateTextStorage, WFSlotTemplateTypingTextView, WFTextAttachmentInteraction;

@protocol WFSlotTemplateViewDelegate;

@interface WFSlotTemplateView : UIView

{
    _Bool _enabled;
    _Bool _typingAllowsMultipleLines;
    id <WFSlotTemplateViewDelegate> _delegate;
    double _horizontalPadding;
    WFSlotIdentifier *_typingSlotIdentifier;
    NSTextContainer *_textContainer;
    WFSlotTemplateTextStorage *_textStorage;
    WFSlotTemplateLayoutManager *_layoutManager;
    WFTextAttachmentInteraction *_attachmentInteraction;
    WFSlotTemplateTypingTextView *_typingTextView;
    NSTextContainer *_typingTextContainer;
    WFSlotTemplateLayoutManager *_typingLayoutManager;
    WFSlotTemplateTextStorage *_typingTextStorage;
    WFTextAttachmentInteraction *_typingAttachmentInteraction;
    unsigned long long _lastLayoutManagerLineCount;
    NSArray *_accessibilityElements;
}

@property (retain, nonatomic) NSTextContainer *textContainer;
@property (retain, nonatomic) WFSlotTemplateTextStorage *textStorage;
@property (retain, nonatomic) WFSlotTemplateLayoutManager *layoutManager;
@property (retain, nonatomic) WFTextAttachmentInteraction *attachmentInteraction;
@property (retain, nonatomic) WFSlotTemplateTypingTextView *typingTextView;
@property (retain, nonatomic) NSTextContainer *typingTextContainer;
@property (retain, nonatomic) WFSlotTemplateLayoutManager *typingLayoutManager;
@property (retain, nonatomic) WFSlotTemplateTextStorage *typingTextStorage;
@property (retain, nonatomic) WFTextAttachmentInteraction *typingAttachmentInteraction;
@property (nonatomic) _Bool typingAllowsMultipleLines;
@property (nonatomic) unsigned long long lastLayoutManagerLineCount;
@property (retain, nonatomic) NSArray *accessibilityElements;
@property (weak, nonatomic) id <WFSlotTemplateViewDelegate> delegate;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *unpopulatedFont;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSParagraphStyle *paragraphStyle;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) _Bool extendSlotBackgroundOffEdges;
@property (nonatomic, readonly) UIColor *disabledSlotTitleColor;
@property (nonatomic, readonly) UIColor *disabledSlotBackgroundColor;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) WFSlotIdentifier *selectedSlotIdentifier;
@property (nonatomic, readonly) WFSlotIdentifier *typingSlotIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)heightForWidth:(double)arg1 withContents:(id)arg2 horizontalPadding:(double)arg3 font:(id)arg4 unpopulatedFont:(id)arg5 paragraphStyle:(id)arg6;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAccessibilityElement;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)drawRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handleLongPressGesture:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)handleTouch:(id)arg1;
- (void)resetTextView;
- (_Bool)textAttachmentInteraction:(id)arg1 shouldRecognizeTapOnTextAttachment:(id)arg2 inCharacterRange:(struct _NSRange)arg3;
- (void)textAttachmentInteraction:(id)arg1 didTapTextAttachment:(id)arg2 inCharacterRange:(struct _NSRange)arg3;
- (void)slotTemplateTypingTextViewDidDelete:(id)arg1;
- (void)slotTemplateTypingTextViewDidCut:(id)arg1 withOriginalBlock:(CDUnknownBlockType)arg2;
- (void)slotTemplateTypingTextViewDidCopy:(id)arg1 withOriginalBlock:(CDUnknownBlockType)arg2;
- (void)slotTemplateTypingTextViewDidPaste:(id)arg1 withOriginalBlock:(CDUnknownBlockType)arg2;
- (void)slotTemplateStorageDidInvalidateDisplay:(id)arg1;
- (id)typingParagraphStyleForParagraphStyle:(id)arg1;
- (void)setDisabledSlotTitleColor:(id)arg1 backgroundColor:(id)arg2 animated:(_Bool)arg3;
- (void)setContents:(id)arg1 animated:(_Bool)arg2;
- (_Bool)hasSlotWithIdentifier:(id)arg1;
- (id)slotWithIdentifier:(id)arg1;
- (id)firstSlotIdentifierWithParameterKey:(id)arg1;
- (id)selectedSlot;
- (void)selectSlotWithIdentifier:(id)arg1;
- (void)_selectSlot:(id)arg1 notifyDelegate:(_Bool)arg2;
- (void)deselectSlot;
- (void)_deselectSlotAndNotifyDelegate:(_Bool)arg1;
- (void)performFadeTransition:(CDUnknownBlockType)arg1;
- (id)slotAtPoint:(struct CGPoint)arg1;
- (struct CGRect)sourceRectForSlotWithIdentifier:(id)arg1;
- (struct CGRect)sourceRectForSlot:(id)arg1;
- (void)updateTintColorInTextStorage;
- (id)slotIdentifierForAttachmentInteraction:(id)arg1 characterRange:(struct _NSRange)arg2;
- (void)beginTypingInSlotWithIdentifier:(id)arg1;
- (void)positionTypingAboveSlot:(id)arg1;
- (void)endTyping;
- (void)updateAccessibilityElements;
- (void)accessibilityShiftFocusBackToView;

@end
