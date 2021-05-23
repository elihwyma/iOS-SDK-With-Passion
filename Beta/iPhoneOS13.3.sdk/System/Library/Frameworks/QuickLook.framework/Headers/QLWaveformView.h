/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIView.h>

@class AVAsset, AVVideoComposition, NSString, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface QLWaveformView : UIView

{
    struct CGSize _waveSize;
    UIView *_lineView;
    UIImage *_waveImage;
    UIImageView *_waveView;
    AVAsset *_asset;
    UIImage *placeholderImage;
    struct CGRect visibleRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) AVAsset *asset;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) struct CGRect visibleRect;
@property (copy, nonatomic) AVVideoComposition *videoComposition;

- (void)layoutSubviews;
- (void)updateImage;
- (void)_updateWithWaveformImage:(id)arg1;
- (void)_expandWaveform;

@end
