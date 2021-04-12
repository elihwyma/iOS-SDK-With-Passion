//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISlider.h>

@class UIImageView, UIView;

@interface HUMiniScrubber : UISlider
{
    UIView *_loadedTrackOverlayView;
    UIImageView *_currentThumbView;
}

+ (void)configureView:(id)arg1 withBackgroundFillOfColor:(id)arg2 opacity:(double)arg3 filter:(id)arg4;
+ (void)configureView:(id)arg1 forTintEffectWithColor:(id)arg2 filterType:(id)arg3;
+ (void)applyLoadedTrackTintToView:(id)arg1;
+ (void)applyCompletedTrackTintToView:(id)arg1;
+ (void)applyBaseTrackTintToView:(id)arg1;
+ (void)configureSlider:(id)arg1 thumbView:(id)arg2 loadedTrackView:(id)arg3;
+ (void)applySecondaryGlyphTintToView:(id)arg1;
+ (void)applyPrimaryGlyphTintToView:(id)arg1;
@property(nonatomic) __weak UIImageView *currentThumbView; // @synthesize currentThumbView=_currentThumbView;
// - (void).cxx_destruct;
- (id)createThumbView;
- (CGRect)trackRectForBounds:(CGRect)arg1;
- (CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3;
- (CGRect)maximumValueImageRectForBounds:(CGRect)arg1;
- (CGRect)minimumValueImageRectForBounds:(CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIView *loadedTrackOverlayView; // @synthesize loadedTrackOverlayView=_loadedTrackOverlayView;
- (void)willMoveToWindow:(id)arg1;

@end

