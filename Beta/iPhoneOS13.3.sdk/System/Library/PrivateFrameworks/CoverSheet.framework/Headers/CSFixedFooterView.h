/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewBase.h>

@class CSPageControl, CSShakableView, SBFPagedScrollView, SBUICallToActionLabel, SBUILegibilityLabel, UIView, _UILegibilitySettings;

@protocol SBUILegibility;

@interface CSFixedFooterView : CSCoverSheetViewBase

{
    _UILegibilitySettings *_legibilitySettings;
    CSShakableView *_callToActionShakeView;
    SBUICallToActionLabel *_callToActionLabel;
    SBUILegibilityLabel *_alternateCallToActionLabel;
    double _alternateCallToActionLabelOffset;
    UIView<SBUILegibility> *_statusTextView;
    CSPageControl *_pageControl;
    SBFPagedScrollView *_trackingScrollViewForPageControl;
}

@property (nonatomic, readonly) CSShakableView *callToActionShakeView;
@property (retain, nonatomic) SBUICallToActionLabel *callToActionLabel;
@property (retain, nonatomic) SBUILegibilityLabel *alternateCallToActionLabel;
@property (nonatomic) double alternateCallToActionLabelOffset;
@property (retain, nonatomic) UIView<SBUILegibility> *statusTextView;
@property (nonatomic, readonly) CSPageControl *pageControl;
@property (weak, nonatomic) SBFPagedScrollView *trackingScrollViewForPageControl;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateForLegibilitySettings:(id)arg1;
- (id)presentationRegions;
- (void)updatePageControl;
- (void)_addShakeView;
- (void)_addPageControl;
- (void)_updateViewsForLegibilitySettings;
- (void)_layoutStatusTextView;
- (void)_layoutCallToActionView;
- (void)_layoutPageControl;

@end
