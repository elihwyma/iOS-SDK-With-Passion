/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@class UIResponder, UIView;

@protocol UITextInput, UITextInputPrivate;

@protocol UITextInput_Internal

@property (nonatomic, readonly, getter=_proxyTextInput) UIResponder<UITextInput> *__content;
@property (nonatomic, readonly) UIView<UITextInputPrivate> *_textSelectingContainer;

- (unsigned short)_selectedNSRange;
- (unsigned short)_textRangeFromNSRange: /* Error: Ran out of types for this method. */;
- (unsigned short)_nsrangeForTextRange: /* Error: Ran out of types for this method. */;
- (unsigned short)_range:containsRange: /* Error: Ran out of types for this method. */;
- (unsigned short)_intersectionOfRange:andRange: /* Error: Ran out of types for this method. */;
- (unsigned short)_range:intersectsRange: /* Error: Ran out of types for this method. */;
- (unsigned short)_hasMarkedText;
- (unsigned short)_usesAsynchronousProtocol;
- (unsigned short)_selectionClipRect;
- (unsigned short)_fontForCaretSelection;
- (unsigned short)_textColorForCaretSelection;
- (unsigned short)_unmarkText;
- (unsigned short)_selectedRangeWithinMarkedText;
- (unsigned short)_characterBeforeCaretSelection;
- (unsigned short)_characterAfterCaretSelection;
- (unsigned short)_characterInRelationToCaretSelection: /* Error: Ran out of types for this method. */;
- (unsigned short)_characterInRelationToRangedSelection: /* Error: Ran out of types for this method. */;
- (unsigned short)_rangeFromCurrentRangeWithDelta: /* Error: Ran out of types for this method. */;
- (unsigned short)_deleteToStartOfLine;
- (unsigned short)_deleteToEndOfParagraph;
- (unsigned short)_transpose;
- (unsigned short)_deleteByWord;
- (unsigned short)_moveToStartOfWord:withHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)_moveToEndOfWord:withHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)_moveLeft:withHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)_moveRight:withHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)_moveDown:withHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)_moveUp:withHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)_moveToStartOfLine:withHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)_moveToEndOfLine:withHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)_moveToStartOfParagraph:withHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)_moveToEndOfParagraph:withHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)_moveToStartOfDocument:withHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)_moveToEndOfDocument:withHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)_expandSelectionToStartOfWordsBeforeCaretSelection: /* Error: Ran out of types for this method. */;
- (unsigned short)_extendCurrentSelection: /* Error: Ran out of types for this method. */;
- (unsigned short)_setCaretSelectionAtEndOfSelection;
- (unsigned short)_setAttributedMarkedText:selectedRange: /* Error: Ran out of types for this method. */;
- (unsigned short)_setMarkedText:selectedRange: /* Error: Ran out of types for this method. */;
- (unsigned short)_setGestureRecognizers;
- (unsigned short)_replaceDocumentWithText: /* Error: Ran out of types for this method. */;
- (unsigned short)_moveCurrentSelection: /* Error: Ran out of types for this method. */;
- (unsigned short)_expandSelectionToBackwardDeletionCluster;
- (unsigned short)_deleteBackwardAndNotify: /* Error: Ran out of types for this method. */;
- (unsigned short)_deleteForwardAndNotify: /* Error: Ran out of types for this method. */;
- (unsigned short)_wordContainingCaretSelection;
- (unsigned short)_normalizedStringForRangeComparison: /* Error: Ran out of types for this method. */;
- (unsigned short)_rangeOfEnclosingWord: /* Error: Ran out of types for this method. */;
- (unsigned short)_positionAtStartOfWords:beforePosition: /* Error: Ran out of types for this method. */;
- (unsigned short)_fullText;
- (unsigned short)_rangeOfText:endingAtPosition: /* Error: Ran out of types for this method. */;
- (unsigned short)_replaceCurrentWordWithText: /* Error: Ran out of types for this method. */;
- (unsigned short)_selectAll;
- (unsigned short)_selectionAtDocumentStart;
- (unsigned short)_rangeOfSmartSelectionIncludingRange: /* Error: Ran out of types for this method. */;
- (unsigned short)_positionWithinRange:farthestInDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)_positionFromPosition:pastTextUnit:inDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)_rangeSpanningTextUnit:andPosition: /* Error: Ran out of types for this method. */;
- (unsigned short)_characterInRelationToPosition:amount: /* Error: Ran out of types for this method. */;
- (unsigned short)_rangeOfTextUnit:enclosingPosition: /* Error: Ran out of types for this method. */;
- (unsigned short)_fullRange;
- (unsigned short)_indexForTextPosition: /* Error: Ran out of types for this method. */;
- (unsigned short)_clampedpositionFromPosition:offset: /* Error: Ran out of types for this method. */;
- (unsigned short)_setSelectedTextRange:withAffinityDownstream: /* Error: Ran out of types for this method. */;
- (unsigned short)_scrollRectToVisible:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)_isEmptySelection;
- (unsigned short)_selectionAffinity;
- (unsigned short)_positionFromPosition:inDirection:offset:withAffinityDownstream: /* Error: Ran out of types for this method. */;
- (unsigned short)_setSelectionToPosition: /* Error: Ran out of types for this method. */;
- (unsigned short)_selectionAtWordStart;
- (unsigned short)_selectionAtDocumentEnd;
- (unsigned short)_hasMarkedTextOrRangedSelection;
- (unsigned short)_expandSelectionToStartOfWordBeforeCaretSelection;
- (unsigned short)_deleteToEndOfLine;
- (unsigned short)_rangeOfLineEnclosingPosition: /* Error: Ran out of types for this method. */;
- (unsigned short)_rangeOfSentenceEnclosingPosition: /* Error: Ran out of types for this method. */;
- (unsigned short)_rangeOfParagraphEnclosingPosition: /* Error: Ran out of types for this method. */;
- (unsigned short)_findPleasingWordBoundaryFromPosition: /* Error: Ran out of types for this method. */;
- (unsigned short)_shouldPerformUICalloutBarButtonReplaceAction:forText:checkAutocorrection: /* Error: Ran out of types for this method. */;

@end
