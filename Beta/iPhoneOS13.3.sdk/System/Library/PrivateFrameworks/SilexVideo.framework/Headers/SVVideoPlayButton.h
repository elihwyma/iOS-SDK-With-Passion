/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/SVButton.h>

@interface SVVideoPlayButton : SVButton

+ (id)playImage;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)updateBackgroundColor;
- (void)displayAsPaused;

@end
