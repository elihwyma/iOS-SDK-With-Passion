/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class UIStackView;

@protocol HKInteractiveChartAnnotationViewDataSource;

@interface HKInteractiveChartAnnotationView : UIView

{
    id <HKInteractiveChartAnnotationViewDataSource> _dataSource;
    UIStackView *_columnStack;
    UIStackView *_containerStack;
    UIStackView *_marginStack;
    long long _context;
}

@property (retain, nonatomic) UIStackView *columnStack;
@property (retain, nonatomic) UIStackView *containerStack;
@property (retain, nonatomic) UIStackView *marginStack;
@property (nonatomic) long long context;
@property (weak, nonatomic) id <HKInteractiveChartAnnotationViewDataSource> dataSource;

- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(long long)arg1;
- (void)reloadData;
- (id)_createSeparatorView;
- (void)_configureStacks;
- (void)lowerPriorityConstraint:(id)arg1;

@end
