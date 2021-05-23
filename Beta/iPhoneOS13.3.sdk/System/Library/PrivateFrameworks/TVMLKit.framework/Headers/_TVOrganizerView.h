/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVFocusRedirectView.h>

@class NSArray, NSDictionary, NSString, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _TVOrganizerView : _TVFocusRedirectView

{
    UIView *_lastFocusedView;
    UIView *_rightColumnDivider;
    UIView *_leftColumnDivider;
    double _showcaseFactor;
    _Bool _columnDividersEnabled;
    _Bool _remembersLastFocusedItem;
    UIView *_backgroundImageView;
    double _columnDividerPadding;
    UIColor *_columnDividerColor;
    NSArray *_components;
    NSDictionary *_divsByPosition;
    NSDictionary *_divSizesByPosition;
}

@property (copy, nonatomic) NSDictionary *divsByPosition;
@property (copy, nonatomic) NSDictionary *divSizesByPosition;
@property (retain, nonatomic) UIView *backgroundImageView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double columnDividerPadding;
@property (nonatomic) _Bool columnDividersEnabled;
@property (retain, nonatomic) UIColor *columnDividerColor;
@property (nonatomic) _Bool remembersLastFocusedItem;
@property (copy, nonatomic) NSArray *components;
@property (weak, nonatomic) UIView *preferredFocusedComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (struct UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)setComponentsNeedUpdate;
- (long long)_positionFromView:(id)arg1;
- (struct CGSize)_contentSizeThatFits:(struct CGSize)arg1;

@end
