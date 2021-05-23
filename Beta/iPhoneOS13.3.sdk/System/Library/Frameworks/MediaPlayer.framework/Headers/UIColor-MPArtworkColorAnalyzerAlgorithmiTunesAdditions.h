/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIColor.h>

@interface UIColor (MPArtworkColorAnalyzerAlgorithmiTunesAdditions)

@property (nonatomic, readonly) double MP_lightness;

+ (id)colorWithITColor:(struct ITColor)arg1;

- (struct ITColor)ITColor;
- (_Bool)MP_isArtworkColorAnalyzerLightColorForAlgorithm:(long long)arg1;

@end
