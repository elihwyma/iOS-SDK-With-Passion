/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class ADPlayer, ADPrerollView, MPMoviePlayerController, NSString;

@interface ADPrerollController : NSObject

{
    _Bool _setupInProgress;
    _Bool _isObservingThirdPartyAVPlayer;
    unsigned long long _type;
    MPMoviePlayerController *_moviePlayerController;
    ADPrerollView *_view;
    ADPlayer *_adPlayer;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) unsigned long long type;
@property (weak, nonatomic) MPMoviePlayerController *moviePlayerController;
@property (retain, nonatomic) ADPrerollView *view;
@property (retain, nonatomic) ADPlayer *adPlayer;
@property (nonatomic) _Bool setupInProgress;
@property (nonatomic) _Bool isObservingThirdPartyAVPlayer;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)doneButtonPressed;
- (void)shutdown;
- (id)_advertisementView;
- (id)initWithMoviePlayerController:(id)arg1;
- (void)_appWillResignActive;
- (_Bool)_beginPlayback;
- (_Bool)_isEmbedded;
- (void)_addAccessibilityIdentifier:(id)arg1;
- (_Bool)prerollViewRequestsEmbeddedStatus;
- (void)playButtonPressed;
- (void)pauseButtonPressed;
- (void)skipButtonPressed;
- (void)actionButtonPressed;
- (void)privacyButtonPressed;
- (void)adPlayerDidTimeout:(id)arg1;
- (void)adPlayerFailedToLoadAsset:(id)arg1;
- (void)adPlayerFailedToPlayWithUnknownError:(id)arg1;
- (void)adPlayer:(id)arg1 readyForPlaybackWithAVPlayer:(id)arg2 impressionProperties:(id)arg3;
- (void)adPlayer:(id)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3;
- (void)adPlayerDidFinishPlayback:(id)arg1;
- (id)viewControllerForActionFromAdPlayer:(id)arg1;
- (void)adPlayer:(id)arg1 didChangePlaybackState:(unsigned long long)arg2;
- (void)playPrerollAdWithCompletion:(CDUnknownBlockType)arg1;
- (void)adPlayerDidBeginAction:(id)arg1;
- (void)_handlePlaybackCompletion:(_Bool)arg1;

@end
