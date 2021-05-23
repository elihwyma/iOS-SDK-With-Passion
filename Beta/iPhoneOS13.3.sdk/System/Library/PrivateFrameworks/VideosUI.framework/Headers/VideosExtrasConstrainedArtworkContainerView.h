/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class MPUArtworkView, NSArray, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface VideosExtrasConstrainedArtworkContainerView : UIView

{
    _Bool _shouldAutoresizeMaskLayerToFillBounds;
    _Bool _shouldBottomAlignArtwork;
    MPUArtworkView *_artworkView;
    UIImage *_overlayImage;
    double _overlayScale;
    UIImageView *_overlayView;
    NSArray *_overlaySizeConstraints;
}

@property (retain, nonatomic) MPUArtworkView *artworkView;
@property (retain, nonatomic) UIImageView *overlayView;
@property (retain, nonatomic) NSArray *overlaySizeConstraints;
@property (nonatomic) _Bool shouldAutoresizeMaskLayerToFillBounds;
@property (nonatomic) _Bool shouldBottomAlignArtwork;
@property (retain, nonatomic) UIImage *overlayImage;
@property (nonatomic) double overlayScale;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
