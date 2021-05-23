/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewCell.h>

@class UIInputSwitcherTableCellBackgroundView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherTableCell : UITableViewCell

{
    _Bool _usesDarkTheme;
    _Bool _usesStraightLeftEdge;
    _Bool _first;
    _Bool _last;
    struct UIEdgeInsets _interactiveInsets;
}

@property (retain, nonatomic) UIInputSwitcherTableCellBackgroundView *backgroundView;
@property (nonatomic) _Bool usesDarkTheme;
@property (nonatomic) _Bool usesStraightLeftEdge;
@property (nonatomic, getter=isFirst) _Bool first;
@property (nonatomic, getter=isLast) _Bool last;
@property (nonatomic) struct UIEdgeInsets interactiveInsets;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateRoundedCorners;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;

@end
