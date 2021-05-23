/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/TTTextController.h>

@class ICAttachmentInsertionController, ICNote, NSMutableArray, NSMutableDictionary;

@interface ICTextController : TTTextController

{
    _Bool _userChangedWritingDirection;
    _Bool _disableAddingExtraLinesIfNeeded;
    _Bool _trackAddedExtraNewlineRanges;
    _Bool _alwaysHighlightAuthorEdits;
    _Bool _isConvertingTables;
    _Bool _shouldMergeNoteAfterScrolling;
    _Bool _isAutoListInsertionDisabled;
    _Bool _fullTextStylingRefreshScheduled;
    ICNote *_note;
    ICAttachmentInsertionController *_attachmentInsertionController;
    NSMutableDictionary *_trackedToDoParagraphs;
    NSMutableArray *_trackedRangesForAddedExtraNewlines;
    unsigned long long _overrideAppearanceType;
    unsigned long long _pauseMergeForScrollingCounter;
}

@property (nonatomic) unsigned long long pauseMergeForScrollingCounter;
@property (nonatomic) _Bool shouldMergeNoteAfterScrolling;
@property (nonatomic) _Bool isAutoListInsertionDisabled;
@property (nonatomic) _Bool fullTextStylingRefreshScheduled;
@property (weak, nonatomic) ICNote *note;
@property (weak, nonatomic) ICAttachmentInsertionController *attachmentInsertionController;
@property (nonatomic, readonly) NSMutableDictionary *trackedToDoParagraphs;
@property _Bool userChangedWritingDirection;
@property (nonatomic) _Bool disableAddingExtraLinesIfNeeded;
@property (retain, nonatomic) NSMutableArray *trackedRangesForAddedExtraNewlines;
@property (nonatomic) _Bool trackAddedExtraNewlineRanges;
@property (nonatomic) _Bool alwaysHighlightAuthorEdits;
@property (nonatomic) _Bool isConvertingTables;
@property (nonatomic) unsigned long long overrideAppearanceType;

+ (_Bool)shouldRetainFirstListStyleForFilteredAttributedSubstring:(id)arg1 fromRange:(struct _NSRange)arg2;
+ (_Bool)checklistAutoSortEnabled;
+ (_Bool)checklistAutoAlertShown;
+ (void)setChecklistAutoAlertShown:(_Bool)arg1;
+ (void)setChecklistAutoSortEnabled:(_Bool)arg1;
+ (_Bool)needsToShowFirstTimeAutoSortChecklistAlert;
+ (double)indentForStyle:(id)arg1 range:(struct _NSRange)arg2 attributedString:(id)arg3 textView:(struct UITextView *)arg4;
+ (double)extraBulletWidthForNumberedListWithMaxItemNumber:(id)arg1 textFont:(struct UIFont *)arg2;
+ (id)removeBeginningListStyleIfNecessaryForAttributedString:(id)arg1 fromTextStorage:(id)arg2 andRange:(struct _NSRange)arg3;
+ (double)extraWidthNeededForStyle:(id)arg1 range:(struct _NSRange)arg2 attributedString:(id)arg3 textView:(struct UITextView *)arg4;
+ (id)attributedStringToPasteWithAdaptedParagraphStyles:(id)arg1 pasteRange:(struct _NSRange)arg2 textStorage:(id)arg3;

- (id)init;
- (void)dealloc;
- (void)highlightTextAfter:(id)arg1 inTextStorage:(id)arg2;
- (void)workAroundSageTables:(id)arg1;
- (id)addTableAttachmentWithNSTextTable:(id)arg1 attributedString:(id)arg2 filterPastedAttributes:(_Bool)arg3 isReadingSelectionFromPasteboard:(_Bool)arg4;
- (void)p_populateTable:(id)arg1 withNSTextTable:(id)arg2 attributedString:(id)arg3 filterPastedAttributes:(_Bool)arg4 isReadingSelectionFromPasteboard:(_Bool)arg5;
- (CDStruct_4bcfbbae)p_setCellsInTable:(id)arg1 fromAttributedString:(id)arg2 textTable:(id)arg3 atCellOffset:(CDStruct_4bcfbbae)arg4 filterPastedAttributes:(_Bool)arg5 isReadingSelectionFromPasteboard:(_Bool)arg6;
- (void)updateCellInTable:(id)arg1 atColumnIndex:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3 fromAttributedString:(id)arg4 andTextTableBlock:(id)arg5 filterPastedAttributes:(_Bool)arg6 isReadingSelectionFromPasteboard:(_Bool)arg7;
- (void)convertNSTablesToICTables:(id)arg1 pasteboardTypes:(id)arg2 filterPastedAttributes:(_Bool)arg3 isReadingSelectionFromPasteboard:(_Bool)arg4;
- (void)refreshTextStylingForTextStorage:(id)arg1 withTextController:(id)arg2;
- (void)fixTextStorage:(id)arg1 afterProcessingEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)setHighlightAuthorEdits:(_Bool)arg1 forRange:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (void)updateTrackingInTextStorage:(id)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)styleListsAndIndentsInAttributedString:(id)arg1 inRange:(struct _NSRange)arg2;
- (struct _NSRange)expandedRangeForContiguousTodosForRange:(struct _NSRange)arg1 textView:(struct UITextView *)arg2;
- (_Bool)setDone:(_Bool)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (void)sendTextDidChangeNotificationForTextView:(struct UITextView *)arg1;
- (id)todoForRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;
- (_Bool)containsAnyTodoItemMarkedCompleted:(_Bool)arg1 inRange:(struct _NSRange)arg2 textStorage:(id)arg3;
- (id)rangesForTodosInRange:(struct _NSRange)arg1 markedCompleted:(_Bool)arg2 textStorage:(id)arg3;
- (long long)setTextStyle:(unsigned int)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (id)paragraphInfoForCharacterAtIndex:(unsigned long long)arg1 includeChildren:(_Bool)arg2 textStorage:(id)arg3;
- (id)validAdjacentParagraphInfoFromParagraphInfo:(id)arg1 inDirection:(unsigned long long)arg2 inTextView:(struct UITextView *)arg3;
- (id)trackedParagraphsForTodosInRange:(struct _NSRange)arg1 textStorage:(id)arg2;
- (id)createTreeFromTrackedParagraphs:(id)arg1 textView:(struct ICBaseTextView *)arg2;
- (_Bool)moveCheckedChecklistsToBottomInTextView:(struct ICTextView *)arg1 forRange:(struct _NSRange)arg2 animated:(_Bool)arg3;
- (void)applySortFromOriginalParagraphs:(id)arg1 sortedTrackedParagraphs:(id)arg2 forTextView:(struct ICTextView *)arg3 checklistRange:(struct _NSRange)arg4;
- (void)performAnimatedSortForTrackedParagraphs:(id)arg1 expandedRange:(struct _NSRange)arg2 textView:(struct ICTextView *)arg3 sortChecklistsBlock:(CDUnknownBlockType)arg4;
- (void)updateTrackedAttributesInTextStorage:(id)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (_Bool)containsOnlyStyle:(unsigned int)arg1 inRange:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (id)rangeForChecklistItemInRange:(struct _NSRange)arg1 textStorage:(id)arg2;
- (void)showFirstTimeAutoSortEnabledAlertIfNecessaryWithTextView:(struct ICBaseTextView *)arg1 completionHandler:(CDUnknownBlockType)arg2 analyticsHandler:(CDUnknownBlockType)arg3;
- (void)showFirstTimeAutoSortEnabledAlertWithTextView:(struct ICBaseTextView *)arg1 completionHandler:(CDUnknownBlockType)arg2 analyticsHandler:(CDUnknownBlockType)arg3;
- (void)markAllChecklistItemsCompleted:(_Bool)arg1 inTextview:(struct UITextView *)arg2 forSelectedRanges:(id)arg3;
- (_Bool)checklistItemExistsMarkedCompleted:(_Bool)arg1 inTextView:(struct UITextView *)arg2 forRanges:(id)arg3;
- (void)removeChecklistItemsMarkedCompleted:(_Bool)arg1 inTextView:(struct UITextView *)arg2 forRanges:(id)arg3;
- (_Bool)moveListItemInDirection:(unsigned long long)arg1 inTextView:(struct UITextView *)arg2 forRange:(struct _NSRange)arg3;
- (_Bool)canMoveListItemInDirection:(unsigned long long)arg1 inTextView:(struct UITextView *)arg2 forRange:(struct _NSRange)arg3;
- (id)expandedChecklistTrackedParagraphsInTextView:(struct UITextView *)arg1 forIndex:(long long)arg2;
- (id)adjacentTrackedParagraphFromTrackedParagraph:(id)arg1 inDirection:(unsigned long long)arg2 inTextView:(struct UITextView *)arg3;
- (_Bool)canMoveCheckedChecklistsToBottomInTextView:(struct UITextView *)arg1 forRange:(struct _NSRange)arg2;
- (_Bool)moveCheckedChecklistsToBottomInTextView:(struct UITextView *)arg1 forRange:(struct _NSRange)arg2;
- (id)sortTrackedParagraphsMovingCheckedItemsToBottom:(id)arg1;
- (void)autoSortChecklistIfNecessaryForTrackedParagraph:(id)arg1 textView:(struct ICBaseTextView *)arg2 analyticsHandler:(CDUnknownBlockType)arg3;
- (void)autoSortChecklistForUnitTestAtIndex:(unsigned long long)arg1 textView:(struct ICTextView *)arg2;
- (id)analyticsInfoForChecklistAtIndex:(unsigned long long)arg1 textView:(struct ICBaseTextView *)arg2;
- (void)resetTrackedToDoParagraphs;
- (unsigned int)paragraphStyleForRange:(struct _NSRange)arg1 inTextView:(struct UITextView *)arg2 inTextStorage:(id)arg3 ignoreTypingAttributes:(_Bool)arg4;
- (_Bool)canIndentTextView:(struct UITextView *)arg1 byDelta:(long long)arg2 forRanges:(id)arg3;
- (_Bool)attachmentsExistInRange:(struct _NSRange)arg1 textStorage:(id)arg2;
- (void)indentRange:(struct _NSRange)arg1 byAmount:(long long)arg2 inTextStorage:(id)arg3 textView:(struct UITextView *)arg4 forceUpdateAttributes:(_Bool)arg5;
- (id)indentParagraphStyle:(id)arg1 byAmount:(long long)arg2;
- (id)nsParagraphStyleForTTParagraphStyle:(id)arg1 range:(struct _NSRange)arg2 attributedString:(id)arg3 textView:(struct UITextView *)arg4;
- (long long)setTextStyle:(unsigned int)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3 inTextView:(struct UITextView *)arg4;
- (long long)setTextStyle:(unsigned int)arg1 removeExtraStyling:(_Bool)arg2 range:(struct _NSRange)arg3 inTextStorage:(id)arg4 inTextView:(struct UITextView *)arg5;
- (id)keyboardLanguageForTextView:(struct UITextView *)arg1;
- (void)setParagraphWritingDirectionInRange:(struct _NSRange)arg1 toDirection:(long long)arg2 inTextView:(struct UITextView *)arg3;
- (void)trackExtraNewLineRangeIfNecessary:(struct _NSRange)arg1;
- (void)updateParagraphWritingDirectionToKeyboardWritingDirectionInRange:(struct _NSRange)arg1 textStorage:(id)arg2 textView:(struct UITextView *)arg3;
- (void)removeFontsAndColorsForRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;
- (void)setTypingAttributesForUndo:(id)arg1;
- (void)refreshTypingAttributesForAllTextViewsOfTextStorage:(id)arg1;
- (void)refreshTypingAttributesForTextView:(struct UITextView *)arg1 textStorage:(id)arg2;
- (struct UIFont *)scaleFont:(struct UIFont *)arg1 withScale:(double)arg2;
- (void)scaleFontPointSize:(double)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (void)superscriptUpdate:(CDUnknownBlockType)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (id)rangesWithCutOutAttachmentsFromRange:(struct _NSRange)arg1 textStorage:(id)arg2;
- (void)fadeTextHighlightInTextStorage:(id)arg1;
- (void)applyAuthorHighlightsWithPercentage:(double)arg1 forRange:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (struct _NSRange)cleanupTextStorage:(id)arg1 afterProcessingEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 changeInLengthAfterCleanup:(long long *)arg5;
- (struct _NSRange)addExtraLinesIfNeededToTextStorage:(id)arg1 editedRange:(struct _NSRange)arg2 actualLengthIncrease:(long long *)arg3;
- (void)updateAttachmentsInNote;
- (void)indentRange:(struct _NSRange)arg1 byAmount:(long long)arg2 inTextStorage:(id)arg3 textView:(struct UITextView *)arg4;
- (long long)setTextStyle:(unsigned int)arg1 removeExtraStyling:(_Bool)arg2 range:(struct _NSRange)arg3 inTextStorage:(id)arg4;
- (void)setSelectionToIndex:(unsigned long long)arg1 onTextView:(struct UITextView *)arg2;
- (_Bool)insertedSpaceInTextView:(struct UITextView *)arg1 replacementRange:(struct _NSRange)arg2;
- (_Bool)removeListStyleForDeletingEmptyParagrahIfNecessaryForTextView:(struct UITextView *)arg1 textStorage:(id)arg2 paragraphRange:(struct _NSRange)arg3 andLocation:(unsigned long long)arg4;
- (_Bool)removeListStyleBeforeDeletingParagraphContentIfNecessaryForTextView:(struct UITextView *)arg1 textStorage:(id)arg2 rangeToBeDeleted:(struct _NSRange)arg3 blockBeforeEndEditing:(CDUnknownBlockType)arg4;
- (void)setNote:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(_Bool)arg2 withLayoutManager:(id)arg3 firstVisibleCharLocation:(unsigned long long)arg4;
- (void)filterAttachmentsForPrintingInAttributedString:(id)arg1;
- (void)targetedRefreshTextStylingForTextStorage:(id)arg1 withTextController:(id)arg2 firstVisibleCharLocation:(unsigned long long)arg3;
- (void)createToDoItemForCharacterRange:(struct _NSRange)arg1 paragraphStyle:(id)arg2 textStorage:(id)arg3;
- (void)updateTrackedToDoParagraphsAfterIndex:(unsigned long long)arg1 byDelta:(long long)arg2 excludingSeenParagraphs:(id)arg3;
- (struct _NSRange)numberListsInAttributedString:(id)arg1 inRange:(struct _NSRange)arg2;
- (_Bool)shouldHighlightStyleAsLink:(unsigned int)arg1;
- (void)uniqueParagraphStylesInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned int)paragraphStyleForRange:(struct _NSRange)arg1 inTextView:(struct UITextView *)arg2 inTextStorage:(id)arg3;
- (long long)writingDirectionForRange:(struct _NSRange)arg1 inTextView:(struct UITextView *)arg2 inTextStorage:(id)arg3;
- (_Bool)canIndentTextView:(struct UITextView *)arg1 byDelta:(long long)arg2;
- (struct _NSRange)firstParagraphForSetListStyleRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;
- (_Bool)canChangeStyleForSelectedRanges:(id)arg1 inTextStorage:(id)arg2;
- (void)setTypingTextStyle:(unsigned int)arg1 textView:(struct UITextView *)arg2;
- (_Bool)isTodoDoneRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;
- (void)superscriptDelta:(long long)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (void)unscriptRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;
- (_Bool)isHighlightingTextInTextStorage:(id)arg1;
- (void)updateAttachmentsSelectionStateInTextStorage:(id)arg1 forSelectedRanges:(id)arg2 layoutManager:(id)arg3;
- (void)insertNewlineAtCharacterIndex:(unsigned long long)arg1 textStorage:(id)arg2;
- (_Bool)insertNewlineForSpecialCasesInTextView:(struct UITextView *)arg1;
- (void)insertedText:(id)arg1 replacementRange:(struct _NSRange)arg2 inTextView:(struct UITextView *)arg3;
- (_Bool)deleteBackwardForSpecialCasesInTextView:(struct UITextView *)arg1;
- (_Bool)deleteWordBackwardForSpecialCasesInTextView:(struct UITextView *)arg1;
- (void)setNote:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(_Bool)arg2 withLayoutManager:(id)arg3;
- (void)styleDataDetectorTypesForPreviewInTextStorage:(id)arg1;
- (void)fixModelAttributesInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)imageInfoForTrackedParagraph:(id)arg1 textView:(struct ICBaseTextView *)arg2 characterRangeToRender:(struct _NSRange)arg3 visibleRectToRender:(struct CGRect)arg4;
- (void)addImageViewsBeforeSortIfNecessaryForTrackedInfos:(id)arg1 textView:(struct ICBaseTextView *)arg2 textContainerOrigin:(struct CGPoint)arg3 todoUUIDsToImageViews:(id)arg4;
- (void)addImageViewsAfterSortIfNecessaryForTrackedInfos:(id)arg1 existingInfos:(id)arg2 textView:(struct ICBaseTextView *)arg3 textContainerOrigin:(struct CGPoint)arg4 todoUUIDsToImageViews:(id)arg5;
- (void)setFinalFramesForSortedInfos:(id)arg1 textView:(struct ICBaseTextView *)arg2 textContainerOrigin:(struct CGPoint)arg3 todoUUIDsToImageViews:(id)arg4;

@end
