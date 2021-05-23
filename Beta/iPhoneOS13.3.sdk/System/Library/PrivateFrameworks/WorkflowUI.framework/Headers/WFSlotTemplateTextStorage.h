/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/NSTextStorage.h>

@class NSArray, NSMutableSet, NSParagraphStyle, NSSet, UIColor, UIFont;

@protocol WFSlotTemplateTextStorageDelegate;

@interface WFSlotTemplateTextStorage : NSTextStorage

{
    _Bool _enabled;
    UIFont *_font;
    UIFont *_unpopulatedFont;
    UIColor *_textColor;
    UIColor *_tintColor;
    NSParagraphStyle *_paragraphStyle;
    UIColor *_disabledSlotTitleColor;
    UIColor *_disabledSlotBackgroundColor;
    NSArray *_contents;
    long long _contentsTextAlignment;
    NSTextStorage *_textStorage;
    NSMutableSet *_mutableHighlightedSlots;
    NSMutableSet *_mutableSelectedSlots;
    NSMutableSet *_mutableTypingSlots;
    unsigned long long _editingLevel;
}

@property (nonatomic, readonly) NSTextStorage *textStorage;
@property (nonatomic, readonly) NSMutableSet *mutableHighlightedSlots;
@property (nonatomic, readonly) NSMutableSet *mutableSelectedSlots;
@property (nonatomic, readonly) NSMutableSet *mutableTypingSlots;
@property (nonatomic) unsigned long long editingLevel;
@property (weak, nonatomic) id <WFSlotTemplateTextStorageDelegate> delegate;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *unpopulatedFont;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) NSParagraphStyle *paragraphStyle;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) UIColor *disabledSlotTitleColor;
@property (nonatomic, readonly) UIColor *disabledSlotBackgroundColor;
@property (copy, nonatomic) NSArray *contents;
@property (nonatomic, readonly) long long contentsTextAlignment;
@property (nonatomic, readonly) NSSet *highlightedSlots;
@property (nonatomic, readonly) NSSet *selectedSlots;
@property (nonatomic, readonly) NSSet *typingSlots;

- (id)init;
- (id)string;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)beginEditing;
- (void)endEditing;
- (void)setDisabledSlotTitleColor:(id)arg1 backgroundColor:(id)arg2;
- (void)didHighlightSlot:(id)arg1;
- (void)didUnhighlightSlot:(id)arg1;
- (void)didSelectSlot:(id)arg1;
- (void)didDeselectSlot:(id)arg1;
- (void)didBeginTypingInSlot:(id)arg1;
- (void)didEndTypingInSlot:(id)arg1;
- (void)regenerateEntireAttributedString;
- (void)replaceAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)replaceAttributeInInanimateText:(id)arg1 value:(id)arg2;
- (id)attributedStringForSlot:(id)arg1;
- (void)getColorsForSlot:(id)arg1 titleColor:(out id *)arg2 backgroundColor:(out id *)arg3;
- (void)updateColorsForSlot:(id)arg1;
- (void)updateColorsForAllSlots;
- (void)_updateColorsForSlot:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)stringForSlotSpacingOpportunity:(unsigned long long)arg1;
- (unsigned long long)slotSpacingOpportunityAtCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange)characterRangeForSlot:(id)arg1 includingInsideSpacingOpportunities:(_Bool)arg2;
- (id)slotAtCharacterIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 effectiveContentRange:(struct _NSRange *)arg3;
- (void)enumerateContentInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
