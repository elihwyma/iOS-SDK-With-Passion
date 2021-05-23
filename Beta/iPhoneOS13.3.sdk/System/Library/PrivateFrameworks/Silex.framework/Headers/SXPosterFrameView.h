/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIImageView.h>

@class SVVideoPlayButton;

@interface SXPosterFrameView : UIImageView

{
    SVVideoPlayButton *_playButton;
}

@property (retain, nonatomic) SVVideoPlayButton *playButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)accessibilityIgnoresInvertColors;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;

@end
