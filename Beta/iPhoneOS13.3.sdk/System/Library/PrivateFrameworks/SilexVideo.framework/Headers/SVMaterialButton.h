/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/SVButton.h>

@class AVBackgroundView;

@interface SVMaterialButton : SVButton

{
    AVBackgroundView *_backgroundView;
}

@property (nonatomic, readonly) AVBackgroundView *backgroundView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
