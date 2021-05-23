/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewCell.h>

@class RowSeparatorView, UIColor, UIVisualEffect, UIVisualEffectView;

@interface EKUITableViewCell : UITableViewCell

{
    UIVisualEffectView *_rowSeparatorParentView;
    RowSeparatorView *_separatorViewForNonOpaqueTables;
    _Bool _drawsOwnRowSeparators;
    _Bool _usesInsetMargin;
    UIColor *_rowSeparatorColor;
    UIVisualEffect *_rowSeparatorVisualEffect;
}

@property (nonatomic) _Bool drawsOwnRowSeparators;
@property (retain, nonatomic) UIColor *rowSeparatorColor;
@property (retain, nonatomic) UIVisualEffect *rowSeparatorVisualEffect;
@property (nonatomic) _Bool usesInsetMargin;

+ (id)reuseIdentifier;
+ (_Bool)vibrant;
+ (double)rowSeparatorThickness;

- (void)layoutSubviews;
- (void)_layoutSeparator;
- (void)_setMarginExtendsToFullWidth:(_Bool)arg1;

@end
