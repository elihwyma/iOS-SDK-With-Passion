/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class AVObservationController, AVPlayerController, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVNowPlayingInfoController : NSObject

{
    id _playerControllerCurrentTimeJumpedObserver;
    _Bool _nowPlayingInfoNeedsUpdate;
    _Bool _enabled;
    void *_commandHandlerIdentifier;
    AVObservationController *_keyValueObservationController;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    _Bool _requiresLinearPlayback;
    NSString *_overrideParentApplicationDisplayIdentifier;
    AVPlayerController *_playerController;
    AVPlayerController *_playerControllerToActivateAfterDelay;
}

@property (retain, nonatomic) AVPlayerController *playerController;
@property (weak, nonatomic) AVPlayerController *playerControllerToActivateAfterDelay;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) _Bool requiresLinearPlayback;
@property (copy, nonatomic) NSString *overrideParentApplicationDisplayIdentifier;

+ (void *)_createMediaRemoteLanguageOptionWithAVMediaSelectionOption:(id)arg1;
+ (void *)_createMediaRemoteLanguageOptionGroupWithAVMediaSelectionOptions:(id)arg1;
+ (void)sharedNowPlayingInfoControllerWithCompletion:(CDUnknownBlockType)arg1;
+ (id)_mediaRemoteLanguageOptionCharacteristicsForAVMediaSelectionOption:(id)arg1;
+ (id)_avMediaCharacteristics;
+ (id)_mediaRemoteLanguageOptionCharacteristicForAVMediaCharacteristic:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)startNowPlayingUpdatesForPlayerController:(id)arg1 afterDelay:(double)arg2;
- (void)stopNowPlayingUpdatesForPlayerController:(id)arg1;
- (void)_setNowPlayingInfoNeedsUpdate;
- (void)_updateNowPlayingInfoIfNeeded;
- (void)_updateNowPlayingInfo:(id)arg1 commandsAndStates:(id)arg2;
- (id)_makeNowPlayingInfo;
- (id)_makeCommandsAndStatesDictionaryForPlayerController:(id)arg1;
- (void)_updateRegisteredRemoteCommandEnabledStatesWithCommandsAndStates:(id)arg1;
- (unsigned int)_handleRemoteCommand:(unsigned int)arg1 options:(id)arg2;
- (id)_availableLanguageOptions;
- (id)_currentLanguageOptions;

@end
