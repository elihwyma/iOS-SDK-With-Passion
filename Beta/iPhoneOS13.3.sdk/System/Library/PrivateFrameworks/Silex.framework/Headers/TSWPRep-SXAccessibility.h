/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <TSReading/TSWPRep.h>

@class NSArray;

@interface TSWPRep (SXAccessibility)

@property (nonatomic, readonly) NSArray *sxaxSupportedEditRotorActions;

- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLanguage;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (id)_accessibilityTextOperations;
- (_Bool)_accessibilityIsSpeakThisElement;
- (struct _NSRange)_accessibilityRawRangeForUITextRange:(id)arg1;
- (id)_accessibilityTextRangeFromNSRange:(struct _NSRange)arg1;
- (long long)accessibilityLineNumberForPoint:(struct CGPoint)arg1;
- (struct CGRect)accessibilityFrameForLineNumber:(long long)arg1;
- (id)accessibilityContentForLineNumber:(long long)arg1;
- (struct CGRect)_accessibilityFrameForRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilityRangeForLineNumber:(long long)arg1;
- (struct _NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1;
- (_Bool)_accessibilitySpeakThisShouldScrollTextRects;
- (_Bool)_accessibilityHasTextOperations;
- (long long)_accessibilityLineStartPosition;
- (long long)_accessibilityLineEndPosition;
- (id)accessibilityPageContent;
- (id)_accessibilityNextElementsForSpeakThis;
- (_Bool)accessibilityEditOperationAction:(id)arg1;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange)arg1;
- (struct _NSRange)sxaxRepRelativeRangeFromStorageRelativeRange:(struct _NSRange)arg1;
- (id)_STAXColumnForLineIndex:(long long)arg1;
- (struct _NSRange)sxaxStorageRelativeRangeFromRepRelativeRange:(struct _NSRange)arg1;
- (id)_STAXColumnForStorageRelativeCharIndex:(unsigned long long)arg1;
- (struct _NSRange)_sxaxStorageRelativeRangeOfLineFragmentAtStorageRelativeCharIndex:(unsigned long long)arg1;
- (id)_sxaxTextInputEditor;
- (id)sxaxNameForEditRotorAction:(id)arg1;

@end
