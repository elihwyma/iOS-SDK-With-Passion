/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/_UIReflectingView.h>

@class UIImage, UIImageView;

@interface MPReflectionImageView : _UIReflectingView

{
    UIImageView *_imageView;
    _Bool _squareImage;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) _Bool squareImage;
@property (nonatomic, readonly) UIImageView *imageView;

+ (double)defaultReflectionHeight;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)albumArtImage;
- (void)setAlbumVisible:(_Bool)arg1 reflectionVisible:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1 withReflectionHeight:(double)arg2;
- (void)setReflectionVisible:(_Bool)arg1 withDuration:(float)arg2;

@end
