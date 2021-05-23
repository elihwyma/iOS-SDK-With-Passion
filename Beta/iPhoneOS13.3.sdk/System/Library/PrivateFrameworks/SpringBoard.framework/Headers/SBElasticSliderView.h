/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <MediaControls/MediaControlsVolumeSliderView.h>

@interface SBElasticSliderView : MediaControlsVolumeSliderView

{
    double _additiveGlyphScaleFactor;
}

@property (nonatomic) double additiveGlyphScaleFactor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAxis:(int)arg1;
- (struct CGPoint)glyphCenter;
- (void)stopGlyphAnimations;
- (void)_updateGlyphScaleForAdditiveScaleOrAxisUpdate;

@end
