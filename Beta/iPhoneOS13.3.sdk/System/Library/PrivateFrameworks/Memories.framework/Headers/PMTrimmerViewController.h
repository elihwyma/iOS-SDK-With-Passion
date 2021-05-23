/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

@class AVPlayer, AVPlayerItem, NSMutableArray, NSObject, NSString, PMClipProvider, PMScrubberImageSource, PMTrimmerDebugView, UIMovieScrubber, UIView;

@protocol PMTrimmerDelegate;

@interface PMTrimmerViewController : UIViewController

{
    struct {
        _Bool respondsToWillStartTrimmingWithClipProvider;
        _Bool respondsToShouldContinueTrimmingWithClipProvider_startTime_endTime;
        _Bool respondsToDidContinueTrimmingWithClipProvider_startTime_endTime;
        _Bool respondsToDidEndTrimmingWithClipProvider_startTime_endTime;
    } _delegateFlags;
    _Bool _showsDebugMetadataOverlay;
    _Bool _scrubbing;
    _Bool _playerBusySeeking;
    int _projectFrameRate;
    int _inUseScrubberHandle;
    PMClipProvider *_clipProvider;
    id <PMTrimmerDelegate> _delegate;
    AVPlayer *_player;
    NSObject *_playerPeriodicTimeObserver;
    NSObject *_trimBoundaryTimeObserver;
    AVPlayerItem *__playerItemForObserving;
    UIView *_scrubberView;
    UIMovieScrubber *_movieScrubber;
    PMTrimmerDebugView *_debugOverlay;
    PMScrubberImageSource *_thumbnailSource;
    NSString *_thumbnailSourceAssetID;
    NSMutableArray *_otherRangeLayers;
    double _videoDuration;
    double _videoAspectRatio;
    double _deferredSeekTime;
    double _lastSeekWallClockTime;
}

@property (retain, nonatomic) NSObject *playerPeriodicTimeObserver;
@property (retain, nonatomic) NSObject *trimBoundaryTimeObserver;
@property (retain, nonatomic, setter=_setPlayerItemForObserving:) AVPlayerItem *_playerItemForObserving;
@property (retain, nonatomic) UIView *scrubberView;
@property (retain, nonatomic) UIMovieScrubber *movieScrubber;
@property (retain, nonatomic) PMTrimmerDebugView *debugOverlay;
@property (retain, nonatomic) PMScrubberImageSource *thumbnailSource;
@property (retain, nonatomic) NSString *thumbnailSourceAssetID;
@property (retain, nonatomic) NSMutableArray *otherRangeLayers;
@property (nonatomic) double videoDuration;
@property (nonatomic) double videoAspectRatio;
@property (nonatomic, getter=isScrubbing) _Bool scrubbing;
@property (nonatomic) int inUseScrubberHandle;
@property (nonatomic) double deferredSeekTime;
@property (nonatomic) double lastSeekWallClockTime;
@property _Bool playerBusySeeking;
@property (retain, nonatomic) PMClipProvider *clipProvider;
@property (weak, nonatomic) id <PMTrimmerDelegate> delegate;
@property (nonatomic) int projectFrameRate;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) _Bool showsDebugMetadataOverlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_invalidate;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (void)movieScrubberDidBeginAnimatingZoom:(id)arg1;
- (void)movieScrubberDidEndAnimatingZoom:(id)arg1;
- (void)movieScrubber:(id)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (double)movieScrubberDuration:(id)arg1;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (double)movieScrubberThumbnailAspectRatio:(id)arg1;
- (void)_updateDebugOverlay;
- (void)_updateTrimHandles;
- (_Bool)_playerIsPlaying;
- (void)_createView;
- (void)_updateScrubberThumbVisibility;
- (void)_seekToTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_playerItemDidReachEnd:(id)arg1;
- (void)_deferredSeek;
- (void)_deferredSeekToTime:(double)arg1;
- (void)_updateScrubberTime;
- (void)_seekPlayerToBeginning;
- (void)_updateOtherRanges;
- (void)updateDebugMetadataOverlay;

@end
