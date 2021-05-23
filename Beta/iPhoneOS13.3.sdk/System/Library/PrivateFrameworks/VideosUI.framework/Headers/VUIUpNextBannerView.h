/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSString, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface VUIUpNextBannerView : UIView

{
    struct {
        _Bool respondsToRowMetricsForExpectedWidth;
        _Bool respondsToShouldBindRowsTogether;
        _Bool respondsToShowcaseRowMetricsForExpectedWidth;
    } _shelfViewFlags;
    UIView *_shelfView;
    UIVisualEffectView *_backgroundVisualEffectView;
}

@property (retain, nonatomic) UIView *shelfView;
@property (retain, nonatomic) UIVisualEffectView *backgroundVisualEffectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool shouldBindRowsTogether;

- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateAppearance;
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long *)arg2;
- (id)initWithFrame:(struct CGRect)arg1 addBlurBackground:(_Bool)arg2;

@end
