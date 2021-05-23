/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UIColor, UIView;

@interface SKUICollectionViewCell : UICollectionViewCell

{
    UIView *_bottomBorderView;
    long long _position;
    UIView *_leftBorderView;
    UIView *_rightBorderView;
    UIView *_topBorderView;
    long long _separatorStyle;
    UIColor *_separatorColor;
    struct UIEdgeInsets _separatorWidths;
    struct UIEdgeInsets _separatorInsets;
}

@property (nonatomic) long long separatorStyle;
@property (nonatomic) _Bool showsCellSeparators;
@property (retain, nonatomic) UIColor *separatorColor;
@property (nonatomic) struct UIEdgeInsets separatorWidths;
@property (nonatomic) struct UIEdgeInsets separatorInsets;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)_setPosition:(long long)arg1;
- (_Bool)_showsBottomBorder;
- (_Bool)_showsLeftBorder;
- (_Bool)_showsRightBorder;
- (_Bool)_showsTopBorder;
- (void)_updateBorderVisibility;

@end
