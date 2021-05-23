/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIKBRecentInputCell : UICollectionViewCell

{
    UILabel *_label;
}

@property (retain, nonatomic) UILabel *label;

+ (id)textColorForRenderConfig:(id)arg1 isSelected:(_Bool)arg2;
+ (id)titleAttributesForRenderConfig:(id)arg1;

- (void)dealloc;
- (void)setInputText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)isFocused;
- (void)setSelected:(_Bool)arg1;
- (_Bool)_canFocusProgrammatically;

@end
