/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <ContactsAutocompleteUI/Swift-Protocol.h>

@class NSDictionary, UITextPosition, UITextRange, UIView;

@protocol UITextInputDelegate, UITextInputTokenizer;

@protocol UITextInput <Swift>

@property (copy) UITextRange *selectedTextRange;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (weak, nonatomic) id <UITextInputDelegate> inputDelegate;
@property (nonatomic, readonly) id <UITextInputTokenizer> tokenizer;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;

- (unsigned short)replaceRange:withText: /* Error: Ran out of types for this method. */;
- (unsigned short)positionFromPosition:offset: /* Error: Ran out of types for this method. */;
- (unsigned short)unmarkText;
- (unsigned short)textInRange: /* Error: Ran out of types for this method. */;
- (unsigned short)textRangeFromPosition:toPosition: /* Error: Ran out of types for this method. */;
- (unsigned short)setMarkedText:selectedRange: /* Error: Ran out of types for this method. */;
- (unsigned short)offsetFromPosition:toPosition: /* Error: Ran out of types for this method. */;
- (unsigned short)baseWritingDirectionForPosition:inDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)selectionRectsForRange: /* Error: Ran out of types for this method. */;
- (unsigned short)positionFromPosition:inDirection:offset: /* Error: Ran out of types for this method. */;
- (unsigned short)comparePosition:toPosition: /* Error: Ran out of types for this method. */;
- (unsigned short)positionWithinRange:farthestInDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)characterRangeByExtendingPosition:inDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)setBaseWritingDirection:forRange: /* Error: Ran out of types for this method. */;
- (unsigned short)firstRectForRange: /* Error: Ran out of types for this method. */;
- (unsigned short)caretRectForPosition: /* Error: Ran out of types for this method. */;
- (unsigned short)closestPositionToPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)closestPositionToPoint:withinRange: /* Error: Ran out of types for this method. */;
- (unsigned short)characterRangeAtPoint: /* Error: Ran out of types for this method. */;

@end
