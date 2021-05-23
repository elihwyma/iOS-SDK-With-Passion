/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class AVDisplayCriteria, AVObservationController, AVPlayer, AVPlayerLayer, AVSecondScreen, AVSecondScreenDebugAssistant, AVSecondScreenViewController, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface AVSecondScreenConnection : NSObject

{
    _Bool _readyToConnect;
    _Bool _active;
    _Bool _playing;
    _Bool _requiresTVOutScreen;
    _Bool _ready;
    AVSecondScreenDebugAssistant *_debugAssistant;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    AVSecondScreen *_connectedSecondScreen;
    AVDisplayCriteria *_preferredDisplayCriteria;
    AVObservationController *_observationController;
    UIView *_contentView;
    AVSecondScreenViewController *_secondScreenViewController;
    struct CGSize _maximumVideoResolution;
}

@property (nonatomic, getter=isActive) _Bool active;
@property (weak, nonatomic) AVSecondScreen *connectedSecondScreen;
@property (retain, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;
@property (nonatomic) struct CGSize maximumVideoResolution;
@property (nonatomic, getter=isReady) _Bool ready;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (nonatomic) _Bool requiresTVOutScreen;
@property (nonatomic, readonly) AVObservationController *observationController;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AVSecondScreenViewController *secondScreenViewController;
@property (nonatomic, readonly) AVPlayer *player;
@property (weak, nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (nonatomic, readonly, getter=isReadyToConnect) _Bool readyToConnect;
@property (nonatomic, readonly) UIViewController *contentViewController;
@property (nonatomic, readonly) AVSecondScreenDebugAssistant *debugAssistant;
@property (nonatomic, readonly) struct CGSize videoDisplaySize;
@property (nonatomic, readonly) double videoDisplayScale;

- (void)dealloc;
- (void)setPlayerLayer:(id)arg1;
- (void)_updatePreferredDisplayCriteria;
- (id)initWithPlayer:(id)arg1 playerLayer:(id)arg2;
- (void)startUpdates;
- (void)setReadyToConnect:(_Bool)arg1;
- (void)connectWithScreen:(id)arg1 active:(_Bool)arg2;
- (void)_loadSecondScreenViewControllerIfNeeded;
- (void)_postNotification:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3;
- (void)_startObservingPlayer;
- (void)_updatePreferredDisplayCriteriaFromPreparedAssetIfNeeded:(id)arg1;
- (_Bool)_determineIsReadyToConnect;
- (_Bool)_allowsNonAirPlayExternalPlayback;
- (_Bool)_currentItemIsReadyToPlayVideoOrLoadingWhileActive;

@end
