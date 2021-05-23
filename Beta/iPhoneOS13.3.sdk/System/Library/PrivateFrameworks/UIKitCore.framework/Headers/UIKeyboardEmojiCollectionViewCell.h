/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewCell.h>

@class UIKeyboardEmoji, UILabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell

{
    UILabel *_emojiLabel;
    _Bool _unreleasedHighlight;
    UILabel *_unreleasedBanner;
    UIKeyboardEmoji *_emoji;
}

@property (retain, nonatomic) UILabel *unreleasedBanner;
@property (copy, nonatomic) UIKeyboardEmoji *emoji;
@property (nonatomic) long long emojiFontSize;
@property (nonatomic) _Bool unreleasedHighlight;

- (id)debugDescription;
- (id)initWithFrame:(struct CGRect)arg1;

@end
