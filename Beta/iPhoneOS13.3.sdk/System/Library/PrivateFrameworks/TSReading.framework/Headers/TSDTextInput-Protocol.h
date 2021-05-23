/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class TSKSelection, UIView;

@protocol TSDTextSelection;

@protocol TSDTextInput <Swift>

@property (retain, nonatomic, readonly) TSKSelection<TSDTextSelection> *textInputSelection;
@property (nonatomic, readonly) struct _NSRange markedRange;
@property (retain, readonly) UIView *inputView;
@property (retain, readonly) UIView *inputAccessoryView;
@property (readonly) _Bool wantsRawArrowKeyEvents;
@property (retain, nonatomic) TSKSelection<TSDTextSelection> *selectionForArrowKeys;

- (unsigned short)endEditing;
- (unsigned short)returnKeyType;
- (unsigned short)replaceRange:withText: /* Error: Ran out of types for this method. */;
- (unsigned short)textInRange: /* Error: Ran out of types for this method. */;
- (unsigned short)insertText: /* Error: Ran out of types for this method. */;
- (unsigned short)setMarkedText:selectedRange: /* Error: Ran out of types for this method. */;
- (unsigned short)selectionRectsForRange: /* Error: Ran out of types for this method. */;
- (unsigned short)firstRectForRange: /* Error: Ran out of types for this method. */;
- (unsigned short)editRange;
- (unsigned short)textLength;
- (unsigned short)selectionWithRange: /* Error: Ran out of types for this method. */;
- (unsigned short)wantsKeyboard;
- (unsigned short)textIsVerticalAtCharIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)extendSelectionLeft;
- (unsigned short)extendSelectionRight;
- (unsigned short)textColorAtCharIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)textFontAtCharIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setSelectionWithRange:endOfLine: /* Error: Ran out of types for this method. */;
- (unsigned short)clearMarkedRange;
- (unsigned short)isCharIndex:withEolAffinity:atBoundary:inDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)charIndexByMovingPosition:toBoundary:inDirection:preferPosition: /* Error: Ran out of types for this method. */;
- (unsigned short)isCharIndex:withinTextUnit:inDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)rangeOfWordEnclosingCharIndex:backward: /* Error: Ran out of types for this method. */;

@end
