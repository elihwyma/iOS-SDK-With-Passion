/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell

{
    UIImageView *_symbol;
    UILabel *_title;
    UIView *_selectedCircle;
}

@property (retain, nonatomic) UIImageView *symbol;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIView *selectedCircle;

- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)titleFont;
- (void)setPressIndicatorHidden:(_Bool)arg1;
- (void)setTitleText:(id)arg1;
- (void)setSelectedCircleBlendMode:(_Bool)arg1;
- (id)symbolFont;

@end
