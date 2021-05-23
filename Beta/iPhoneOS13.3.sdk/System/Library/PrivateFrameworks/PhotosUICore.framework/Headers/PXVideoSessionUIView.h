/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSString, PXVideoSession, PXVideoView, UIImage, UIImageView;

@protocol PXVideoSessionUIViewDelegate;

@interface PXVideoSessionUIView : UIView

{
    UIView *_videoContainerView;
    PXVideoView *_videoView;
    PXVideoView *_adoptedVideoView;
    PXVideoView *_activeVideoView;
    UIImageView *_placeholderImageView;
    _Bool _placeholderVisible;
    _Bool _allowsEdgeAntialiasing;
    PXVideoSession *_videoSession;
    UIImage *_placeholderImage;
    id <PXVideoSessionUIViewDelegate> _delegate;
    NSString *_videoGravity;
    struct CGRect _contentsRect;
}

@property (nonatomic) _Bool placeholderVisible;
@property (retain, nonatomic) PXVideoSession *videoSession;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic, readonly) _Bool isVideoLayerReadyForDisplay;
@property (weak, nonatomic) id <PXVideoSessionUIViewDelegate> delegate;
@property (nonatomic) struct CGRect contentsRect;
@property (nonatomic) _Bool allowsEdgeAntialiasing;
@property (copy, nonatomic) NSString *videoGravity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)_updatePlaceholderVisibility;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateEdgeAntialiasing;
- (id)generateSnapshotImage;
- (void)videoViewReadinessDidChange:(id)arg1;
- (void)_updateVideoViewFrame;

@end
