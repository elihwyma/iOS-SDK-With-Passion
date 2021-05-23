/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class UIFocusContainerGuide, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _TVListTemplateView : UIView

{
    UIVisualEffectView *_backdropView;
    UIVisualEffectView *_bgVisualEffectView;
    double _bgVisualEffectOffset;
    UIFocusContainerGuide *_previewFocusGuide;
    _Bool _backdropEnabled;
    _Bool _floatingBanner;
    _Bool _shouldAdjustListForTabBar;
    _Bool _shouldAdjustPreviewForTabBar;
    UIView *_bgImageView;
    UIView *_bannerView;
    UIView *_listView;
    UIView *_previewView;
}

@property (retain, nonatomic) UIView *bgImageView;
@property (retain, nonatomic) UIView *bannerView;
@property (retain, nonatomic) UIView *listView;
@property (retain, nonatomic) UIView *previewView;
@property (nonatomic, getter=isBackdropEnabled) _Bool backdropEnabled;
@property (nonatomic, readonly) long long listAlignment;
@property (nonatomic) _Bool floatingBanner;
@property (nonatomic) _Bool shouldAdjustListForTabBar;
@property (nonatomic) _Bool shouldAdjustPreviewForTabBar;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)preferredFocusEnvironments;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)adjustScrollForListView:(id)arg1;
- (void)setOverlayBlurOffset:(double)arg1;

@end
