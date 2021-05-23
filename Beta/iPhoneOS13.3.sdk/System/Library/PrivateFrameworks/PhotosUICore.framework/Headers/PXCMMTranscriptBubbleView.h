/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSString, PXCMMPosterHeaderView, PXCMMSpec, PXCMMTranscriptBubbleFooterView, PXUpdater;

@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXCMMTranscriptBubbleView : UIView

{
    PXUpdater *_updater;
    UIView *_highlightView;
    PXCMMTranscriptBubbleFooterView *_footerView;
    PXCMMPosterHeaderView *_headerView;
    _Bool _highlighted;
    PXCMMSpec *_spec;
    NSString *_imageTitleText;
    NSString *_imageSubtitleText;
    NSString *_primaryText;
    NSString *_secondaryText;
    id <PXDisplayAsset> _asset;
    id <PXUIImageProvider> _mediaProvider;
    struct UIEdgeInsets _bubbleSafeAreaInsets;
}

@property (retain, nonatomic) PXCMMSpec *spec;
@property (nonatomic) struct UIEdgeInsets bubbleSafeAreaInsets;
@property (copy, nonatomic) NSString *imageTitleText;
@property (copy, nonatomic) NSString *imageSubtitleText;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (nonatomic, readonly) id <PXDisplayAsset> asset;
@property (nonatomic, readonly) id <PXUIImageProvider> mediaProvider;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 withSpec:(id)arg2;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setAsset:(id)arg1 mediaProvider:(id)arg2;
- (struct CGSize)_performLayoutInSize:(struct CGSize)arg1 updateSubviewFrames:(_Bool)arg2;
- (_Bool)_wantsHighlightView;
- (void)_updatePosterView;
- (void)_updateFooterView;
- (void)_updateHighlightView;

@end
