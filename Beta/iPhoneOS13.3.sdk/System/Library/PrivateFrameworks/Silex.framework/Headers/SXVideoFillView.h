/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXFillView.h>

@class NSString, SXClippingView, SXImageResource, SXImageView, SXVideoFill, SXVideoFillPlayerView;

@interface SXVideoFillView : SXFillView

{
    SXVideoFill *_videoFill;
    SXClippingView *_clippingView;
    SXVideoFillPlayerView *_playerView;
    SXImageResource *_imageResource;
    SXImageView *_imageView;
}

@property (retain, nonatomic) SXClippingView *clippingView;
@property (retain, nonatomic) SXVideoFillPlayerView *playerView;
@property (retain, nonatomic) SXImageResource *imageResource;
@property (nonatomic, readonly) SXImageView *imageView;
@property (nonatomic, readonly) SXVideoFill *videoFill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)load;
- (void)pause;
- (void)reset;
- (struct CGRect)contentFrame;
- (void)play;
- (void)layoutSubviews;
- (void)setContentFrame:(struct CGRect)arg1;
- (struct CGRect)fillFrameWithBoundingSize:(struct CGSize)arg1;
- (id)initWithVideoFill:(id)arg1 DOMObjectProvider:(id)arg2 imageViewFactory:(id)arg3;

@end
