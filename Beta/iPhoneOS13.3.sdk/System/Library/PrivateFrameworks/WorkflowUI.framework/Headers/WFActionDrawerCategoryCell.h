/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSArray, UIImageView, UILabel, WFActionDrawerCategoriesMetrics;

@interface WFActionDrawerCategoryCell : UICollectionViewCell

{
    _Bool _shouldStackVertically;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    WFActionDrawerCategoriesMetrics *_metrics;
    NSArray *_verticalStackConstraints;
    NSArray *_horizontalStackConstraints;
}

@property (weak, nonatomic) UIImageView *iconImageView;
@property (weak, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WFActionDrawerCategoriesMetrics *metrics;
@property (retain, nonatomic) NSArray *verticalStackConstraints;
@property (retain, nonatomic) NSArray *horizontalStackConstraints;
@property (nonatomic) _Bool shouldStackVertically;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)adjustStackingStyle;
- (void)configureWithWorkflowCategoryTitle:(id)arg1 icon:(id)arg2 shouldStackVertically:(_Bool)arg3;

@end
