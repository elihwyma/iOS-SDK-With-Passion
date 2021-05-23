/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, UITableView;

@interface HKStickyHeaderFooterTableWrapperView : UIView

{
    UIView *_headerView;
    long long _headerBehavior;
    UIView *_footerView;
    long long _footerBehavior;
    UITableView *_tableView;
    NSArray *_headerConstraints;
    NSArray *_footerConstraints;
    NSLayoutConstraint *_headerPinningConstraint;
    NSLayoutConstraint *_footerPinningConstraint;
    struct CGSize _previousHeaderSize;
    struct CGSize _previousFooterSize;
}

@property (retain, nonatomic) NSArray *headerConstraints;
@property (retain, nonatomic) NSArray *footerConstraints;
@property (nonatomic) struct CGSize previousHeaderSize;
@property (nonatomic) struct CGSize previousFooterSize;
@property (retain, nonatomic) NSLayoutConstraint *headerPinningConstraint;
@property (retain, nonatomic) NSLayoutConstraint *footerPinningConstraint;
@property (retain, nonatomic) UIView *headerView;
@property (nonatomic) long long headerBehavior;
@property (retain, nonatomic) UIView *footerView;
@property (nonatomic) long long footerBehavior;
@property (nonatomic, readonly) UITableView *tableView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (void)_updatePinningConstraintConstantsForCurrentSafeArea;
- (id)_createHeaderConstraintsForBehavior:(long long)arg1;
- (void)_addHeaderConstraintsForBehavior:(long long)arg1;
- (id)_createFooterConstraintsForBehavior:(long long)arg1;
- (void)_addFooterConstraintsForBehavior:(long long)arg1;
- (void)_updateHeaderConstraintsWithPreviousBehavior:(long long)arg1;
- (void)_updateFooterConstraintsWithPreviousBehavior:(long long)arg1;

@end
