/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIFontDescriptor.h>

@interface UIFontDescriptor (MKCrossPlatformExtras)

+ (id)_mapkit_fontRoundedColonFeature;
+ (id)_mapkit_fontMonospaceFeature;
+ (id)_mapkit_fontFeaturesForTimeDisplayUseMonospace:(_Bool)arg1;
+ (id)_mapkit_fontFeaturesForTabularFigures;
+ (id)_mapkit_fontFeaturesForTimeDisplay;

- (id)_mapkit_fontDescriptorByAddingFeaturesForTimeDisplayUseMonospace:(_Bool)arg1;
- (id)_mapkit_fontDescriptorByAddingFeaturesForTimeDisplay;
- (id)_mapkit_fontDescriptorByAddingFeaturesForTabularFigures;

@end
