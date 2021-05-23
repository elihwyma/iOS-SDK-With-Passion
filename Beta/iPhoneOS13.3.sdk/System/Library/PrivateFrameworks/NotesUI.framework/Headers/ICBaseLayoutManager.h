/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/NSLayoutManager.h>

@class UITextView;

@interface ICBaseLayoutManager : NSLayoutManager

{
    UITextView *_textView;
}

@property (weak, nonatomic) UITextView *textView;

+ (id)defaultLinkTextAttributes;

- (id)textContainer;
- (void)drawBulletsForListRange:(struct _NSRange)arg1 paragraphStyle:(id)arg2 atPoint:(struct CGPoint)arg3;
- (id)textController;
- (double)bulletYOffsetForCharacterAtIndex:(unsigned long long)arg1;
- (void)drawListStylesForCharacterRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;

@end
