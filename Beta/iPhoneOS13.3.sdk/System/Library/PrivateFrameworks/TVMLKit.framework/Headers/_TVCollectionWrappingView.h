/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

#import <TVMLKit/Swift-Protocol.h>

@class CAGradientLayer, IKColor, NSString, _TVCollectionView;

__attribute__((visibility("hidden")))
@interface _TVCollectionWrappingView : UIView <Swift>

{
    struct CGRect _headerFrame;
    UIView *_selectingView;
    UIView *_headerView;
    double _showcaseFactor;
    struct CGRect _footerFrame;
    UIView *_footerView;
    CAGradientLayer *_gradientLayer;
    struct {
        _Bool respondsToAugmentedSelectionFrameForFrame;
    } _collectionViewFlags;
    _Bool _centered;
    _Bool _headerCanBecomeFocused;
    _Bool _headerAuxiliarySelecting;
    _Bool _headerFloating;
    _Bool _headerHidden;
    _Bool _headerFocused;
    _TVCollectionView *_collectionView;
    double _headerSelectionMargin;
    long long _collectionGradientMask;
    IKColor *_ikBackgroundColor;
    struct TVShowcaseConfig _showcaseConfig;
}

@property (nonatomic, getter=isHeaderFocused) _Bool headerFocused;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) _TVCollectionView *collectionView;
@property (nonatomic, getter=isCentered) _Bool centered;
@property (nonatomic) _Bool headerCanBecomeFocused;
@property (nonatomic) double headerSelectionMargin;
@property (nonatomic) struct TVShowcaseConfig showcaseConfig;
@property (nonatomic, getter=isHeaderAuxiliarySelecting) _Bool headerAuxiliarySelecting;
@property (nonatomic, getter=isHeaderFloating) _Bool headerFloating;
@property (nonatomic, getter=isHeaderHidden) _Bool headerHidden;
@property (nonatomic) long long collectionGradientMask;
@property (retain, nonatomic) IKColor *ikBackgroundColor;
@property (retain, nonatomic) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool shouldBindRowsTogether;

+ (void)gradientConfigForCollection:(id)arg1 gradientMask:(long long)arg2 gradientLengths:(struct UIEdgeInsets *)arg3 gradientInset:(struct UIEdgeInsets *)arg4 gradientBoundsInset:(struct UIEdgeInsets *)arg5;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateSubviews;
- (void)_updateGradientLayer;
- (void)tv_setShowcaseFactor:(double)arg1;
- (void)setValue:(id)arg1 forTVViewStyle:(id)arg2;
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long *)arg2;
- (id)showcaseRowMetricsForExpectedWidth:(double)arg1;
- (void)reevaluateHeaderFrame;
- (id)_currentFooterView;
- (id)_currentHeaderView;
- (struct CGRect)_adjustedHeaderFrame;
- (struct UIEdgeInsets)_adjustedPadding;
- (double)_adjustedShowcaseFactor;
- (double)_showcaseContentScaleForExpectedWidth:(double)arg1;
- (id)_collectionRowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long *)arg2 forShowcase:(_Bool)arg3;
- (void)reevaluateFooterFrame;

@end
