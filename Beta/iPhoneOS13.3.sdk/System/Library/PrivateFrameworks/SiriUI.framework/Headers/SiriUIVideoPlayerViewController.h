/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <AVPlayerViewController.h>

@class NSString;

@protocol SiriUIVideoPlayerViewControllerDelegate;

@interface SiriUIVideoPlayerViewController : AVPlayerViewController

{
    _Bool _observingPlayerStatus;
    _Bool _observingItemStatus;
    _Bool _observingPlayback;
    _Bool _observingViewController;
    void *_playerStatusObserverContext;
    void *_itemStatusObserverContext;
    NSString *_savedAudioSessionCategory;
    unsigned long long _savedAudioSessionCategoryOptions;
    id <SiriUIVideoPlayerViewControllerDelegate> _videoPlayerControllerDelegate;
}

@property (weak, nonatomic) id <SiriUIVideoPlayerViewControllerDelegate> videoPlayerControllerDelegate;
@property (nonatomic, readonly) _Bool shouldPlayHighResolutionContent;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)setPlayer:(id)arg1;
- (void)_updateAudioSessionCategory;
- (void)doneButtonTapped:(id)arg1;
- (void)_registerObservers;
- (void)_removeObservers;
- (void)_restoreAudioPlaybackCategoryAndOptions;
- (void)_playbackDidFinish:(id)arg1;

@end
