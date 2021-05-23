/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIFont;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingIndexBarView : UIView

{
    UIView *_indicatorView;
    double _preferredIndicatorWidth;
    double _preferredLabelFontSize;
    NSMutableArray *_backgroundLabels;
    NSMutableArray *_foregroundLabels;
    UIView *_foregroundWrapperView;
    UIView *_foregroundMaskView;
    long long _deflectedIndex;
    double _deflectionAmount;
    UIFont *_backgroundFont;
    UIFont *_foregroundFont;
    NSArray *_entries;
    long long _focusProminence;
    long long _style;
    struct CGPoint _minimumContentOffset;
    struct CGPoint _maximumContentOffset;
}

@property (copy, nonatomic) NSArray *entries;
@property (nonatomic) long long focusProminence;
@property (nonatomic) struct CGPoint minimumContentOffset;
@property (nonatomic) struct CGPoint maximumContentOffset;
@property (nonatomic) long long style;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)_updateColors;
- (void)resetDeflection:(_Bool)arg1;
- (void)setIndexOfDeflectedEntry:(long long)arg1 amount:(double)arg2;
- (void)updateForContentOffset:(struct CGPoint)arg1;
- (void)_showNormalFocusProminence;
- (void)_determinePreferredSizes;
- (void)_showReducedFocusProminence;
- (double)_indicatorVerticalPositionForContentOffset:(struct CGPoint)arg1;
- (void)_createLabels;
- (id)_indicatorShadowPath;
- (id)_backgroundFont;
- (id)_backgroundLabelTextColor;
- (id)_foregroundFont;
- (_Bool)_shouldUseDarkAppearance;
- (id)_upperEntryForOffset:(double)arg1;
- (id)_lowerEntryForOffset:(double)arg1;

@end
