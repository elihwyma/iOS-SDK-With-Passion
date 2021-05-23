/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXMomentShareStatusPresentation, UILabel, UIProgressView, UIVisualEffectView;

@protocol PXCMMProgressBannerViewLayoutDelegate;

@interface PXCMMProgressBannerView : UIView <Swift>

{
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    UIVisualEffectView *_visualEffectView;
    UILabel *_activityLabel;
    UILabel *_pauseLabel;
    UIProgressView *_progressView;
    double _layoutHeight;
    id <PXCMMProgressBannerViewLayoutDelegate> _layoutDelegate;
}

@property (weak, nonatomic) id <PXCMMProgressBannerViewLayoutDelegate> layoutDelegate;
@property (nonatomic, readonly) double layoutHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateProgress;
- (void)_updateFonts;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(_Bool)arg2;
- (id)initWithMomentShareStatusPresentation:(id)arg1;
- (void)_updateActivityTitle;
- (void)_updatePauseTitle;

@end
