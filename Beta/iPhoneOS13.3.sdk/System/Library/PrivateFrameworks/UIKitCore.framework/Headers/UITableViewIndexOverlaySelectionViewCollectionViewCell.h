/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface UITableViewIndexOverlaySelectionViewCollectionViewCell : UICollectionViewCell

{
    UIButton *_button;
    double _rightMargin;
    _Bool _rightMarginAdjusted;
    id _tapTarget;
    SEL _tapAction;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double rightMargin;
@property (readonly) UILabel *label;
@property (readonly) UIButton *button;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)applyLayoutAttributes:(id)arg1;

@end
