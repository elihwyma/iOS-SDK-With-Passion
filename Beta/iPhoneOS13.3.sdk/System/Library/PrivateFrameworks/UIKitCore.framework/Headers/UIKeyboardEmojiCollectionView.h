/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionView.h>

@class UIKeyboardEmojiGraphicsTraits, UIResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionView : UICollectionView

{
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;
    UIResponder *_hitTestResponder;
}

@property (nonatomic) UIResponder *hitTestResponder;
@property (retain, readonly) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits;

- (void)dealloc;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (double)_currentScreenScale;
- (_Bool)_shouldReverseLayoutDirection;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 emojiGraphicsTraits:(id)arg3;
- (id)closestCellForPoint:(struct CGPoint)arg1;

@end
