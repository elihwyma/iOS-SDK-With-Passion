/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@class UIColor, UIImage, UIImageView, _MPDownloadProgressRingView;

@interface MPDownloadProgressView : UIView

{
    UIImageView *_centerImageView;
    UIView *_outerRingView;
    _MPDownloadProgressRingView *_progressView;
    double _downloadProgress;
    UIImage *_centerImage;
    UIColor *_outerRingColor;
}

@property (nonatomic) double downloadProgress;
@property (retain, nonatomic) UIImage *centerImage;
@property (retain, nonatomic) UIColor *outerRingColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
