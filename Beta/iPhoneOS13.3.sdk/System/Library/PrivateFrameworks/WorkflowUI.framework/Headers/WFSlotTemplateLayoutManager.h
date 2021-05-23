/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/NSLayoutManager.h>

@class NSString, WFSlotTemplateTextStorage;

@interface WFSlotTemplateLayoutManager : NSLayoutManager

{
    _Bool _isLayoutManagerForTextView;
    _Bool _extendSlotBackgroundOffEdges;
}

@property (nonatomic) WFSlotTemplateTextStorage *textStorage;
@property (nonatomic, readonly) unsigned long long numberOfLaidLines;
@property (nonatomic) _Bool isLayoutManagerForTextView;
@property (nonatomic) _Bool extendSlotBackgroundOffEdges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3;
- (_Bool)layoutManager:(id)arg1 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg2;
- (struct CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(struct CGRect)arg4 glyphPosition:(struct CGPoint)arg5 characterIndex:(unsigned long long)arg6;
- (void)drawBackgroundForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout struct CGRect *)arg2 lineFragmentUsedRect:(inout struct CGRect *)arg3 baselineOffset:(inout double *)arg4 inTextContainer:(id)arg5 forGlyphRange:(struct _NSRange)arg6;
- (_Bool)shouldDrawTextAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2;
- (double)preferredHeightForDrawingTextAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2 withProposedHeight:(double)arg3;
- (void)enumerateEnclosingRectsForSlot:(id)arg1 includeInsideSpacing:(_Bool)arg2 insetForBackground:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateInsetEnclosingRectsForGlyphRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEnclosingRectsForGlyphRange:(struct _NSRange)arg1 insetForBackground:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)getCalculatedLineHeight:(double *)arg1 originalFontLineHeight:(double *)arg2;

@end
