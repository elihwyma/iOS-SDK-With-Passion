/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface AXFirstResponderValueChangeManager : NSObject

+ (id)sharedInstance;

- (id)outputValueChangeForNewValue:(id)arg1 oldValue:(id)arg2 selectedTextRange:(struct _NSRange)arg3 oldSelectedTextRange:(struct _NSRange)arg4 shouldEchoDeletion:(_Bool)arg5 isSingleInsert:(_Bool)arg6 feedbackType:(unsigned long long)arg7 lastKeyboardKeyPress:(double)arg8;
- (id)_outputValueChangeForNewValue:(id)arg1 oldValue:(id)arg2 isFirstResponderValid:(_Bool)arg3 selectedTextRange:(struct _NSRange)arg4 oldSelectedTextRange:(struct _NSRange)arg5 shouldEchoDeletion:(_Bool)arg6 optionalValueChangeType:(unsigned long long)arg7 derivedValueChangeType:(unsigned long long *)arg8 didHitBorder:(_Bool *)arg9 isBreakSpaceCharacter:(_Bool *)arg10 isSingleInsert:(_Bool)arg11 selectionDeleted:(_Bool)arg12 feedbackType:(unsigned long long)arg13 textOperationOccurred:(_Bool *)arg14 lastKeyboardKeyPress:(double)arg15 isSingleCharacterInsertOrDelete:(_Bool *)arg16 singleInsertDeleteAttString:(id *)arg17 singleInsertDeleteString:(id *)arg18 isSingleCharacterUpdate:(_Bool *)arg19 wordRangeToFindMisspelled:(struct _NSRange *)arg20 pasteOperationSucceeded:(_Bool *)arg21 shouldOutputSingleCharactersOnly:(_Bool)arg22 clientType:(long long)arg23;
- (id)outputValueChangeForNewValue:(id)arg1 oldValue:(id)arg2 isFirstResponderValid:(_Bool)arg3 selectedTextRange:(struct _NSRange)arg4 oldSelectedTextRange:(struct _NSRange)arg5 shouldEchoDeletion:(_Bool)arg6 optionalValueChangeType:(unsigned long long)arg7 derivedValueChangeType:(unsigned long long *)arg8 didHitBorder:(_Bool *)arg9 isBreakSpaceCharacter:(_Bool *)arg10 isSingleInsert:(_Bool)arg11 selectionDeleted:(_Bool)arg12 feedbackType:(unsigned long long)arg13 textOperationOccurred:(_Bool *)arg14 lastKeyboardKeyPress:(double)arg15 isSingleCharacterInsertOrDelete:(_Bool *)arg16 singleInsertDeleteAttString:(id *)arg17 singleInsertDeleteString:(id *)arg18 isSingleCharacterUpdate:(_Bool *)arg19 wordRangeToFindMisspelled:(struct _NSRange *)arg20 pasteOperationSucceeded:(_Bool *)arg21 clientType:(long long)arg22;
- (id)_handleApostropheIfNeeded:(id)arg1;
- (void)_handleAttributedApostropheIfNeeded:(id)arg1;
- (id)outputValueChangeForNewValue:(id)arg1 oldValue:(id)arg2 selectedTextRange:(struct _NSRange)arg3 shouldEchoDeletion:(_Bool)arg4 isSingleInsert:(_Bool)arg5 feedbackType:(unsigned long long)arg6 lastKeyboardKeyPress:(double)arg7;
- (id)outputValueChangeForNewValue:(id)arg1 oldValue:(id)arg2 selectedTextRange:(struct _NSRange)arg3 shouldEchoDeletion:(_Bool)arg4 isSingleInsert:(_Bool)arg5 feedbackType:(unsigned long long)arg6 lastKeyboardKeyPress:(double)arg7 shouldOutputSingleCharactersOnly:(_Bool)arg8;

@end
