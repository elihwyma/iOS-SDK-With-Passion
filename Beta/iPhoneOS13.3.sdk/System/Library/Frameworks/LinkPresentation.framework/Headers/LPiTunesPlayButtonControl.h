/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPPlayButtonControl.h>

@class LPInlineMediaPlaybackInformation, MPModelGenericObject, NSTimer;

__attribute__((visibility("hidden")))
@interface LPiTunesPlayButtonControl : LPPlayButtonControl

{
    LPInlineMediaPlaybackInformation *_playbackInformation;
    NSTimer *_playbackStateUpdateTimer;
    MPModelGenericObject *_enqueuedItem;
    MPModelGenericObject *_enqueuedItemContext;
    double _currentPlaybackPosition;
    _Bool _currentlyPlaying;
    _Bool _hasStartedPlaying;
}

- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)startPlaying;
- (void)updatePlaybackState;
- (_Bool)matchesNowPlayingItem;
- (void)updatePlayState;
- (void)startListeningForPlayback;
- (void)stopListeningForPlayback;
- (struct _MRSystemAppPlaybackQueue *)createPlaybackQueue;
- (id)mediaPlaybackApplicationID;
- (id)initWithPlaybackInformation:(id)arg1 style:(id)arg2;

@end
