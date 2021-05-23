/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKUserLocationHeadingConeLayer.h>

__attribute__((visibility("hidden")))
@interface _MKModernUserLocationHeadingConeLayer : MKUserLocationHeadingConeLayer

- (void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (id)initWithUserLocationView:(id)arg1;
- (id)_headingImage:(struct CGPoint *)arg1;
- (void)_createMaskLayer;
- (void)_updateHeadingMaskForAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (void)_updateShowHeadingForAccuracy:(double)arg1;
- (unsigned long long)_keyframeIndexForAccuracy:(double)arg1;
- (struct CGRect)_normalizedHeadingMaskRectForIndex:(unsigned long long)arg1;
- (_Bool)_shouldShowHeadingForAccuracy:(double)arg1;

@end
