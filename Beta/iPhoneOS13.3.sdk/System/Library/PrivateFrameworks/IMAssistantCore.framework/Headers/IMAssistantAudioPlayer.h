/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <Foundation/NSObject.h>

@class AVAudioPlayer, NSString;

@protocol IMAssistantAudioPlayerDelegate;

@interface IMAssistantAudioPlayer : NSObject

{
    id <IMAssistantAudioPlayerDelegate> _delegate;
    NSString *_identifier;
    AVAudioPlayer *_player;
}

@property (nonatomic, readonly) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)stopPlaying;
- (long long)playerState;
- (id)initWithDelegate:(id)arg1 identifier:(id)arg2;
- (_Bool)setupAudioSession;
- (void)cleanupAudioSession;
- (_Bool)startPlayingAudioURL:(id)arg1;

@end
