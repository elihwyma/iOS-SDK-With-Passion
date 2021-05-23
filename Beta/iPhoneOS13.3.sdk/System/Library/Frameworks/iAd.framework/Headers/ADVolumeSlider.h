/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <MPVolumeSlider.h>

@class UIColor;

@interface ADVolumeSlider : MPVolumeSlider

{
    UIColor *_maximumTintUsedForTrackImageColor;
    UIColor *_minimumTintUsedForTrackImageColor;
}

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (id)_newVolumeWarningView;
- (void)_updateTrackTintForVolumeControlAvailability;
- (id)_trackImageWithTintColor:(id)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;

@end
