/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewCell.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXCMMPosterHeaderView, PXCMMSuggestionViewModel, PXRoundedCornerOverlayView, UIFont, UIImageView, UILabel, UIView;

@protocol PXCMMSuggestionViewDelegate;

@interface PXCMMSuggestionView : UICollectionViewCell <Swift>

{
    PXCMMPosterHeaderView *_headerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_combinedFaceTileImageView;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    UIFont *_titleFont;
    UIFont *_titleBoldFont;
    id <PXCMMSuggestionViewDelegate> _delegate;
    PXCMMSuggestionViewModel *_viewModel;
}

@property (retain, nonatomic) PXCMMSuggestionViewModel *viewModel;
@property (weak, nonatomic) id <PXCMMSuggestionViewDelegate> delegate;
@property (nonatomic, readonly) struct CGRect headerViewBounds;
@property (nonatomic, readonly) UIView *previewView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)posterHeaderViewSizeForSize:(struct CGSize)arg1 scale:(double)arg2;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 viewModel:(id)arg2;
+ (struct CGSize)posterImageSizeThatFits:(struct CGSize)arg1 scale:(double)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateFonts;
- (void)_tapGesture:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (_Bool)_updateSubtitle;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(_Bool)arg2;
- (id)test_title;
- (id)test_subtitle;
- (void)_updateHeaderView;
- (void)_updateOpaqueAncestorBackgroundColor;
- (_Bool)test_selected;
- (_Bool)_updateCombinedFaceTileImage;

@end
