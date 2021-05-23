/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class PXGradientView, PXRoundedCornerOverlayView, UIButton, UIImageView, UILabel;

@protocol PXCMMCloudViewViewDelegate;

@interface PXCMMCloudView : UIView

{
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    struct {
        _Bool learnMoreTapped;
        _Bool dismissTapped;
    } _delegateRespondsTo;
    id <PXCMMCloudViewViewDelegate> _delegate;
    UIButton *_dismissButton;
    PXGradientView *_graphicGradientView;
    UIImageView *_graphicImageView;
    UILabel *_bodyLabel;
    UIButton *_learnMoreButton;
    unsigned long long _style;
}

@property (nonatomic, readonly) UIButton *dismissButton;
@property (nonatomic, readonly) PXGradientView *graphicGradientView;
@property (nonatomic, readonly) UIImageView *graphicImageView;
@property (nonatomic, readonly) UILabel *bodyLabel;
@property (nonatomic, readonly) UIButton *learnMoreButton;
@property (nonatomic, readonly) unsigned long long style;
@property (weak, nonatomic) id <PXCMMCloudViewViewDelegate> delegate;
@property (nonatomic) _Bool disableDismissAction;

- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;
- (void)_setupSubviews;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (id)_constrainedFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2;
- (void)_updateFontAndStyle;
- (void)_learnMoreTapped:(id)arg1;
- (void)_didTapDismissButton:(id)arg1;

@end
