/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSString, PXCMMPosterBannerView, PXCMMPosterHeaderView, PXRoundedCornerOverlayView, PXUpdater, UIActivityIndicatorView, UIColor;

@interface PXCMMPosterUIView : UIView

{
    struct _NSRange _bannerHeadlineBoldRange;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    PXCMMPosterHeaderView *_headerView;
    PXCMMPosterBannerView *_bannerView;
    long long _actionButtonType;
    CDUnknownBlockType _actionButtonAction;
    UIActivityIndicatorView *_activityIndicatorView;
    PXUpdater *_updater;
    _Bool _needsBannerView;
    _Bool _actionInProgress;
    NSString *_bannerHeadline;
    NSString *_bannerSubheadline;
    UIColor *_opaqueAncestorBackgroundColor;
    unsigned long long _cornersToRound;
    double _cornerRadius;
    long long _selectedCount;
    long long _totalCount;
}

@property (copy, nonatomic) NSString *locationString;
@property (copy, nonatomic) NSString *dateString;
@property (copy, nonatomic) NSString *statusString;
@property (copy, nonatomic) NSString *bannerHeadline;
@property (copy, nonatomic) NSString *bannerSubheadline;
@property (copy, nonatomic) UIColor *opaqueAncestorBackgroundColor;
@property (nonatomic) unsigned long long cornersToRound;
@property (nonatomic) double cornerRadius;
@property (nonatomic) _Bool needsBannerView;
@property (nonatomic, readonly) PXCMMPosterBannerView *bannerView;
@property (nonatomic) long long selectedCount;
@property (nonatomic) long long totalCount;
@property (nonatomic, getter=isActionInProgress) _Bool actionInProgress;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)setAsset:(id)arg1 mediaProvider:(id)arg2;
- (void)setBannerHeadline:(id)arg1 boldRange:(struct _NSRange)arg2;
- (void)setActionButtonWithType:(long long)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)_updateBannerTitles;
- (void)_updateBannerActionButton;
- (void)_updateBannerView;
- (void)_updateCorners;
- (id)_fontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;

@end
