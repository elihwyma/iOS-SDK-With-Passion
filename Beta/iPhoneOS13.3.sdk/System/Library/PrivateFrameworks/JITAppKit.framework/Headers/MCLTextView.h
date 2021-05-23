/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <UITextView.h>

@class UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface MCLTextView : UITextView

{
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property (nonatomic, readonly) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;

- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onLongPress:(id)arg1;
- (void)onTap:(id)arg1;

@end
