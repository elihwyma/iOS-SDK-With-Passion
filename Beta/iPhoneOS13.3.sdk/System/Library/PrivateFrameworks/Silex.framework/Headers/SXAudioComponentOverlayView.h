/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIImageView.h>

@class UIActivityIndicatorView, UIButton, UIImage;

@interface SXAudioComponentOverlayView : UIImageView

{
    UIButton *_playButton;
    UIImage *_audioIndicatorImage;
    UIActivityIndicatorView *_activityIndicator;
}

@property (nonatomic, readonly) UIImage *audioIndicatorImage;
@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, readonly) UIButton *playButton;

- (id)image;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)stopActivityIndicator;
- (void)startActivityIndicator;

@end
