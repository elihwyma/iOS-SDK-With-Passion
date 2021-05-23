/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class MPMoviePlayerController, NSString, UIImage, UIImageView;

@protocol SKUIEmbeddedMediaViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIEmbeddedMediaView : UIControl

{
    id <SKUIEmbeddedMediaViewDelegate> _delegate;
    long long _mediaType;
    NSString *_mediaURLString;
    MPMoviePlayerController *_moviePlayer;
    UIImageView *_playerDecorationView;
    UIImageView *_thumbnailReflectionView;
    UIImageView *_thumbnailView;
    _Bool _usingInlinePlayback;
}

@property (weak, nonatomic) id <SKUIEmbeddedMediaViewDelegate> delegate;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) NSString *mediaURLString;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic) _Bool showsThumbnailReflection;
@property (nonatomic) long long thumbnailContentMode;
@property (retain, nonatomic) UIImage *thumbnailImage;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)_thumbnailView;
- (void)_playbackStateChanged:(id)arg1;
- (void)beginPlaybackAnimated:(_Bool)arg1;
- (void)endPlaybackAnimated:(_Bool)arg1;
- (void)beginInlinePlaybackWithURL:(id)arg1;
- (void)_tearDownMoviePlayer;
- (id)_newMoviePlayerControllerWithURL:(id)arg1;
- (struct CGSize)_sizeToFitImageSize:(struct CGSize)arg1 bounds:(struct CGRect)arg2;
- (void)_sendPlaybackStateChanged;
- (void)_didExitFullscreen:(id)arg1;
- (void)_didFinishPlayback:(id)arg1;

@end
