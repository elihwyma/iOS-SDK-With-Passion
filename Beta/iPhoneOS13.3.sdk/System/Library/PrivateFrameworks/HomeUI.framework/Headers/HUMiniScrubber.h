/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UISlider.h>

@class UIImageView, UIView;

@interface HUMiniScrubber : UISlider

{
    UIView *_loadedTrackOverlayView;
    UIImageView *_currentThumbView;
}

@property (weak, nonatomic) UIImageView *currentThumbView;
@property (nonatomic, readonly) UIView *loadedTrackOverlayView;

+ (void)applyPrimaryGlyphTintToView:(id)arg1;
+ (void)applySecondaryGlyphTintToView:(id)arg1;
+ (void)configureSlider:(id)arg1 thumbView:(id)arg2 loadedTrackView:(id)arg3;
+ (void)applyBaseTrackTintToView:(id)arg1;
+ (void)applyCompletedTrackTintToView:(id)arg1;
+ (void)applyLoadedTrackTintToView:(id)arg1;
+ (void)configureView:(id)arg1 forTintEffectWithColor:(id)arg2 filterType:(id)arg3;
+ (void)configureView:(id)arg1 withBackgroundFillOfColor:(id)arg2 opacity:(double)arg3 filter:(id)arg4;

- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (id)createThumbView;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;

@end
