/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <MediaPlayer/MPVolumeSlider.h>

@class MTVisualStylingProvider, NSString;

__attribute__((visibility("hidden")))
@interface MediaControlsVolumeSlider : MPVolumeSlider

{
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (id)createThumbView;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (id)_thumbImageForStyle:(long long)arg1;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)setMinimumTrackVisualProvider:(id)arg1;
- (void)setMaximumTrackVisualProvider:(id)arg1;

@end
