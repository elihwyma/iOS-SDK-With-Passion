/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXCMMImageView, PXCMMPosterHeaderViewModel, PXCMMPosterHeaderViewSpec, PXGradientView, UIImageView, UILabel;

@interface PXCMMPosterHeaderView : UIView <Swift>

{
    PXCMMPosterHeaderViewSpec *_spec;
    PXCMMImageView *_imageView;
    PXGradientView *_topGradientView;
    PXGradientView *_bottomGradientView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_statusLabel;
    UIImageView *_statusCheckmark;
    PXCMMPosterHeaderViewModel *_viewModel;
    long long _presentationStyle;
}

@property (nonatomic, readonly) long long presentationStyle;
@property (retain, nonatomic) PXCMMPosterHeaderViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3;
+ (void)preheatSharedValuesForPresentationStyle:(long long)arg1;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateTitle;
- (void)_updateFonts;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateSubtitle;
- (void)_updateStatusString;
- (id)initWithPresentationStyle:(long long)arg1;
- (void)_performLayoutWithSize:(struct CGSize)arg1;
- (id)test_title;
- (id)test_subtitle;
- (id)test_statusString;
- (_Bool)test_showStatusCheckmark;

@end
