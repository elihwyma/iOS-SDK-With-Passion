/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewCell.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXCMMInvitationViewModel, PXCMMPosterHeaderView, PXRoundedCornerOverlayView, UILabel, UIView;

@protocol PXCMMInvitationViewDelegate;

@interface PXCMMInvitationView : UICollectionViewCell <Swift>

{
    PXCMMPosterHeaderView *_headerView;
    UILabel *_titleLabel;
    UILabel *_subtitle1Label;
    UILabel *_subtitle2Label;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    id <PXCMMInvitationViewDelegate> _delegate;
    PXCMMInvitationViewModel *_viewModel;
}

@property (retain, nonatomic) PXCMMInvitationViewModel *viewModel;
@property (weak, nonatomic) id <PXCMMInvitationViewDelegate> delegate;
@property (nonatomic, readonly) struct CGRect headerViewBounds;
@property (nonatomic, readonly) UIView *previewView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct UIFont *)titleFont;
+ (long long)titleTextStyle;
+ (long long)subtitle2TextStyle;
+ (struct UIFont *)subtitle2Font;
+ (long long)subtitle1TextStyle;
+ (struct UIFont *)subtitle1Font;
+ (struct CGSize)posterHeaderViewSizeForSize:(struct CGSize)arg1 scale:(double)arg2;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 viewModel:(id)arg2;
+ (struct CGSize)posterImageSizeThatFits:(struct CGSize)arg1 scale:(double)arg2;
+ (struct UIFont *)titleEmphasizedFont;
+ (id)titleBulletColor;
+ (id)subtitle1Color;
+ (id)subtitle2Color;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (_Bool)_updateTitle;
- (void)_tapGesture:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(_Bool)arg2;
- (id)test_title;
- (void)_updateHeaderView;
- (_Bool)_updateSubtitle1;
- (_Bool)_updateSubtitle2;
- (void)_updateOpaqueAncestorBackgroundColor;
- (id)test_subtitle1;
- (id)test_subtitle2;
- (_Bool)test_selected;

@end
