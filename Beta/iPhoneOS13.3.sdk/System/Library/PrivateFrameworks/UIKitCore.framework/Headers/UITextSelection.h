/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class DOMRange, UIResponder, UITextRange;

@protocol UITextInputPrivate;

__attribute__((visibility("hidden")))
@interface UITextSelection : NSObject

{
    UIResponder<UITextInputPrivate> *_document;
    long long _granularity;
    UITextRange *_selectedRange;
    UITextRange *_base;
    UITextRange *_initialExtent;
    _Bool _isCommitting;
}

@property (weak, nonatomic, readonly) UIResponder<UITextInputPrivate> *document;
@property (retain, nonatomic) UITextRange *selectedRange;
@property (nonatomic) long long granularity;
@property (nonatomic, readonly) _Bool isCommitting;
@property (nonatomic, readonly) _Bool willSelectionChange;
@property (retain, nonatomic) UITextRange *base;
@property (retain, nonatomic) UITextRange *initialExtent;
@property (nonatomic, readonly, getter=_domRange) DOMRange *domRange;

- (void)dealloc;
- (void)invalidate;
- (void)commit;
- (void)selectionChanged;
- (id)selectedText;
- (void)clearSelection;
- (id)initWithDocument:(id)arg1;
- (void)selectAll;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRect;
- (void)collapseSelection;
- (_Bool)pointAtEndOfLine:(struct CGPoint)arg1;
- (void)alterSelection:(struct CGPoint)arg1 granularity:(long long)arg2;
- (id)selectionRects;
- (id)wordContainingCaretSelection;
- (void)moveCaretToBoundaryOfWhitespaceOrLine;
- (void)alterSelectionGranularity:(long long)arg1;
- (void)setRangedSelectionBaseToCurrentSelection;
- (void)clearRangedSelectionInitialExtent;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint)arg1;
- (void)setSelectionWithFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;
- (_Bool)hasEditableSelection;
- (void)setHybridSelectionWithPoint:(struct CGPoint)arg1;
- (struct CGPoint)clipPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (void)extendSelectionToPoint:(struct CGPoint)arg1;
- (_Bool)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(_Bool)arg2;
- (void)smartExtendRangedSelection:(int)arg1 downstream:(_Bool)arg2;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (void)aggressivelyExpandSelectionToSmartSelectionContainingCaretSelection;
- (_Bool)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(_Bool)arg2 allowFlipping:(_Bool)arg3;
- (struct CGRect)caretRectAtEndOfDocument;
- (struct CGRect)caretRectAtBeginOfDocument;
- (struct CGRect)closestCaretRectForPoint:(struct CGPoint)arg1 inSelection:(_Bool)arg2;
- (unsigned long long)offsetInMarkedText;
- (void)increaseSelectionGranularity;
- (_Bool)pointAtStartOfLine:(struct CGPoint)arg1;
- (_Bool)isRangedSelectionSpanningDocument;
- (void)setGranularRangedSelectionWithExtentPoint:(struct CGPoint)arg1;

@end
