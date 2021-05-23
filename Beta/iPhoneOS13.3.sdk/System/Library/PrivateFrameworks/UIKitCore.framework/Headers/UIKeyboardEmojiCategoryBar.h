/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardEmojiKeyView.h>

@class UIKeyboardEmojiGraphicsTraits, UIResponder, UIView;

@protocol UIKBEmojiHitTestResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoryBar : UIKeyboardEmojiKeyView

{
    unsigned long long _selectedIndex;
    UIView *_scrubView;
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;
    _Bool _isScrubbing;
    double _scrubStartXLocation;
    UIResponder<UIKBEmojiHitTestResponder> *_hitTestResponder;
}

@property (retain, nonatomic) UIView *scrubView;
@property (retain, nonatomic) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits;
@property (nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder;
@property unsigned long long selectedIndex;

- (void)dealloc;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)prepareForDisplay;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)dimKeys:(id)arg1;
- (void)updateCategoryOnBar:(unsigned long long)arg1;
- (struct CGRect)categorySelectedCircleRect:(long long)arg1;
- (void)animateScrubberToRect:(struct CGRect)arg1;
- (struct CGRect)frameForDivider:(int)arg1;
- (unsigned long long)selectedIndexForTouches:(id)arg1;
- (void)updateCategory;
- (void)updateToCategory:(long long)arg1;

@end
