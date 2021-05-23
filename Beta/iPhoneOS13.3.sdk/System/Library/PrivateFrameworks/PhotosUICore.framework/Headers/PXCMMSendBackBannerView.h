/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSString, PXCMMImageView, PXCapsuleButton, PXUpdater, UILabel;

@interface PXCMMSendBackBannerView : UIView

{
    PXCapsuleButton *_actionButton;
    NSString *_actionButtonTitle;
    CDUnknownBlockType _actionButtonAction;
    PXCMMImageView *_imageView;
    UILabel *_captionLabel;
    UILabel *_headlineLabel;
    PXUpdater *_updater;
}

+ (double)bottomInset;
+ (id)_headlineLabelFont;
+ (id)captionLabelFont;
+ (double)captionLabelTopInset;

- (id)init;
- (id)new;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)_actionButtonTapped:(id)arg1;
- (void)_updateLabels;
- (void)setActionButtonWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)_updateActionButton;
- (id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 enabled:(_Bool)arg3;
- (id)_headlineStringAttributes;
- (void)setAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)_attributedStringWithString:(id)arg1;

@end
