/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/SVVideoPlayButton.h>

@class AVBackgroundView;

@interface SVMaterialVideoPlayButton : SVVideoPlayButton

{
    AVBackgroundView *_backgroundView;
}

@property (nonatomic, readonly) AVBackgroundView *backgroundView;

- (id)initWithFrame:(struct CGRect)arg1;
- (unsigned long long)accessibilityTraits;
- (void)layoutSubviews;
- (void)updateBackgroundColor;

@end
