/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <TSReading/TSWPLayout.h>

@class NSMutableSet;

@interface SXTextTangierTextLayout : TSWPLayout

{
    NSMutableSet *_addedChildren;
}

@property (retain, nonatomic) NSMutableSet *addedChildren;

- (void)invalidate;
- (void)validate;
- (struct CGSize)maxSize;
- (void)invalidateTextLayout;
- (double)baselineForLastLine;
- (id)attachedLayoutsInLayout:(id)arg1 anchored:(_Bool)arg2;
- (id)validatedLayoutForAttachedDrawable:(id)arg1;
- (void)addAttachmentLayout:(id)arg1;
- (double)lineHeightGuessForFirstLine;
- (_Bool)shouldPositionAttachmentsIteratively;
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;
- (struct __CFLocale *)hyphenationLocale;
- (id)currentInlineDrawableLayouts;
- (id)currentAnchoredDrawableLayouts;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)layoutForInlineDrawable:(id)arg1;
- (_Bool)alwaysAllowWordSplit;
- (_Bool)pushAscendersIntoColumn;
- (void)startedIterativePositioningProcessForDrawableAttachment:(id)arg1;
- (void)drawableAttachment:(id)arg1 willStartNewIterationWithIndex:(unsigned long long)arg2;
- (void)drawableAttachment:(id)arg1 didFinalizePosition:(struct CGPoint)arg2;
- (_Bool)drawableAttachment:(id)arg1 withLayout:(id)arg2 shouldPositionIterativelyInColumn:(id)arg3;

@end
