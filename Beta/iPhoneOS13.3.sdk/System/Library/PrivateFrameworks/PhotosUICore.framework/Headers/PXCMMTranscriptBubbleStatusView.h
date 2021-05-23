/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSString, PXCMMSpec, PXCMMTranscriptTextView, PXRoundedCornerOverlayView, PXUpdater, UIActivityIndicatorView, UIImageView;

@interface PXCMMTranscriptBubbleStatusView : UIView

{
    PXUpdater *_updater;
    PXCMMTranscriptTextView *_textView;
    UIImageView *_iconImageView;
    PXRoundedCornerOverlayView *_roundedCornerOverlay;
    UIActivityIndicatorView *_activityIndicator;
    _Bool _showsActivityIndicator;
    PXCMMSpec *_spec;
    struct UIEdgeInsets _bubbleSafeAreaInsets;
}

@property (retain, nonatomic) PXCMMSpec *spec;
@property (nonatomic) struct UIEdgeInsets bubbleSafeAreaInsets;
@property (copy, nonatomic) NSString *statusTitle;
@property (copy, nonatomic) NSString *statusDescription;
@property (nonatomic) _Bool showsActivityIndicator;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateActivityIndicator;
- (void)_updateRoundedCornerOverlayView;
- (struct CGSize)_performLayoutInSize:(struct CGSize)arg1 minimizingSize:(_Bool)arg2 updateSubviewFrames:(_Bool)arg3;

@end
