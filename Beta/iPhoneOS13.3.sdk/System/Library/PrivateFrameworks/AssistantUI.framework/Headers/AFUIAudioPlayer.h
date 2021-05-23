/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class AVAudioPlayer, AceObject, NSString, NSUUID;

@protocol AFUIAudioPlayerDelegate;

@interface AFUIAudioPlayer : NSObject

{
    _Bool _deactivateAudioSessionOnPlaybackFinished;
    id <AFUIAudioPlayerDelegate> _delegate;
    AceObject *_playbackCommand;
    NSUUID *_conversationItemIdentifier;
    AVAudioPlayer *_player;
}

@property (retain, nonatomic, getter=_player, setter=_setPlayer:) AVAudioPlayer *player;
@property (weak, nonatomic) id <AFUIAudioPlayerDelegate> delegate;
@property (retain, nonatomic) AceObject *playbackCommand;
@property (nonatomic) _Bool deactivateAudioSessionOnPlaybackFinished;
@property (weak, nonatomic) NSUUID *conversationItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)voicemailPlayer;
+ (id)audioMessagePlayer;

- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (id)_audioCategory;
- (void)stopPlaying;
- (void)startPlaying;
- (id)_audioURL;
- (unsigned long long)_audioOptions;

@end
