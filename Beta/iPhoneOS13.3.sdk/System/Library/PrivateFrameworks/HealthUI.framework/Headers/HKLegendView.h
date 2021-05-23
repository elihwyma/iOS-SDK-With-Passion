/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKBorderLineView.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, UIColor, UIStackView, UIView;

@interface HKLegendView : HKBorderLineView

{
    UIStackView *_mainStack;
    NSMutableArray *_leftEntryViews;
    NSMutableArray *_rightEntryViews;
    UIView *_topDividerView;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSArray *_leftEntries;
    NSArray *_rightEntries;
    UIColor *_topBorderColor;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic, readonly) NSArray *leftEntries;
@property (nonatomic, readonly) NSArray *rightEntries;
@property (retain, nonatomic) UIColor *topBorderColor;
@property (nonatomic) struct UIEdgeInsets edgeInsets;

- (id)initWithEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)setLeftEntries:(id)arg1 rightEntries:(id)arg2;
- (void)_rebuildStackStructure;
- (void)_updateLegendLeftEntries:(id)arg1 rightEntries:(id)arg2;

@end
