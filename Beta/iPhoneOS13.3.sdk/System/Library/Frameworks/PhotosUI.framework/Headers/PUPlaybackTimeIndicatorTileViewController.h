/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

@class NSDate, NSString, PUBrowsingVideoPlayer, PUBrowsingViewModel, PUPlaybackTimeLabel;

@protocol PUPlaybackTimeIndicatorTileViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPlaybackTimeIndicatorTileViewController : PUTileViewController

{
    struct {
        _Bool respondsToCanFlashIndicator;
    } _delegateFlags;
    _Bool __isIndicatorVisible;
    id <PUPlaybackTimeIndicatorTileViewControllerDelegate> _delegate;
    PUBrowsingVideoPlayer *_videoPlayer;
    PUBrowsingViewModel *_viewModel;
    PUPlaybackTimeLabel *__label;
    long long __indicatorFormat;
    NSDate *__forcedIndicatorVisibilityEndDate;
}

@property (nonatomic, readonly) PUPlaybackTimeLabel *_label;
@property (nonatomic, setter=_setIndicatorFormat:) long long _indicatorFormat;
@property (nonatomic, setter=_setIndicatorVisible:) _Bool _isIndicatorVisible;
@property (retain, nonatomic, setter=_setForcedIndicatorVisibilityEndDate:) NSDate *_forcedIndicatorVisibilityEndDate;
@property (weak, nonatomic) id <PUPlaybackTimeIndicatorTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer;
@property (retain, nonatomic) PUBrowsingViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)playbackTimeIndicatorTileSize;

- (void)viewDidLoad;
- (void)becomeReusable;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)videoPlayer:(id)arg1 currentTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)videoPlayer:(id)arg1 desiredSeekTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)_setIndicatorFormat:(long long)arg1 animated:(_Bool)arg2;
- (void)_setIndicatorVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateIndicatorValueWithTime:(CDStruct_1b6d18a9)arg1;
- (void)_updateIndicatorDisplayStyle;
- (void)_handleVideoPlayer:(id)arg1 change:(id)arg2;
- (void)_handleViewModel:(id)arg1 change:(id)arg2;

@end
