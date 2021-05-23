/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <AXRuntime/AXElement.h>

@interface AXElement (AXElementTextEditing)

+ (id)wordsFromString:(id)arg1;
+ (long long)doesArrayOfWords:(id)arg1 containArrayOfArrayWords:(id)arg2;
+ (_Bool)_smartlyTruncateMutableString:(id)arg1 toMaxCharacterLength:(long long)arg2;

- (unsigned long long)_numberOfCharacters;
- (id)recognitionStrings;
- (void)cacActivate;
- (void)cacPerformExcapeAction;
- (id)cacTextSelectionCACTextMarkerRange;
- (id)cacString;
- (id)cacLastPosition;
- (struct CGRect)rectForRange:(struct _NSRange)arg1;
- (id)cacTextOperations;
- (id)cacStringForCACTextMarkerRange:(id)arg1;
- (void)cacPerformTextOperation:(id)arg1;
- (_Bool)cacSupportsTextOperation:(id)arg1;
- (id)cacFirstPosition;
- (void)cacSetTextSelectionToCACTextMarkerRange:(id)arg1;
- (_Bool)isVisibleTextRect:(struct CGRect)arg1;
- (void)_scrollToVisibleForRange:(struct _NSRange)arg1;
- (void)cacSetTextSelectionToRange:(struct _NSRange)arg1;
- (id)cacStringForRange:(struct _NSRange)arg1;
- (void)deleteTextAtRange:(struct _NSRange)arg1;
- (struct _NSRange)_rangeOfWordBasedSearchString:(id)arg1 inString:(id)arg2 withRange:(struct _NSRange)arg3 forwardSearchDirection:(_Bool)arg4;
- (_Bool)_range:(struct _NSRange)arg1 includesRange:(struct _NSRange)arg2;
- (id)visiblePhraseMatchesFromStrings:(id)arg1 substringSearchGranularity:(int)arg2;
- (struct _NSRange)rangeOfStrings:(id)arg1 referenceRange:(struct _NSRange)arg2 ambiguityResolution:(id)arg3 substringSearchGranularity:(int)arg4 foundStringRef:(id *)arg5;
- (_Bool)isVisibleTextRange:(struct _NSRange)arg1;
- (void)_showDisabiguationForMatchedPhraseResults:(id)arg1 axElement:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (struct _NSRange)_findRangeForEnumerationType:(long long)arg1 atRelativeIncrement:(long long)arg2 fromPosition:(id)arg3 options:(unsigned long long)arg4;
- (struct _NSRange)lineRangeForPosition:(unsigned long long)arg1;
- (void)cacApplyFormatBold;
- (void)cacApplyFormatItalics;
- (void)cacApplyFormatUnderline;
- (void)cacPerformTextCopy;
- (void)cacPerformTextCut;
- (void)cacPerformTextPaste;
- (void)cacPerformTextUndo;
- (void)cacPerformTextRedo;
- (void)cacPerformTextSelectAll;
- (void)deleteTextAtTextMarkerRange:(id)arg1;
- (id)actOnStrings:(id)arg1 ambiguityResolution:(id)arg2 substringSearchGranularity:(int)arg3 commandRecognizedParameters:(id)arg4 alwaysCallActionOnClosestMatch:(_Bool)arg5 actionBlock:(CDUnknownBlockType)arg6;
- (id)orderedPhraseMatchesFromStrings:(id)arg1 forwardDirection:(_Bool)arg2 referenceLocation:(long long)arg3 substringSearchGranularity:(int)arg4;
- (id)markerRangeForEnumerationType:(long long)arg1 desiredBlock:(int)arg2 count:(unsigned long long)arg3 options:(int)arg4;
- (id)markerRangeForLineInDesiredBlock:(int)arg1 count:(unsigned long long)arg2 options:(int)arg3;
- (id)_cleanedStringFromTitle:(id)arg1;

@end
