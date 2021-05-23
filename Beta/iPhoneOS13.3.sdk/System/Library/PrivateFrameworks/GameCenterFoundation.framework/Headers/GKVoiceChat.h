/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKSession, GKVoiceChatSession, NSArray, NSString;

@interface GKVoiceChat : NSObject

{
    NSArray *_players;
    CDUnknownBlockType _playerStateUpdateHandler;
    CDUnknownBlockType _playerVoiceChatStateDidChangeHandler;
    GKSession *_gkSession;
    GKVoiceChatSession *_gkVoiceChatSession;
}

@property (retain, nonatomic) GKSession *gkSession;
@property (retain, nonatomic) GKVoiceChatSession *gkVoiceChatSession;
@property (copy, nonatomic) CDUnknownBlockType playerStateUpdateHandler;
@property (retain, nonatomic) NSArray *players;
@property (copy, nonatomic) CDUnknownBlockType playerVoiceChatStateDidChangeHandler;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic) float volume;

+ (_Bool)isVoIPAllowed;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initChat:(id)arg1 withSession:(id)arg2 players:(id)arg3;
- (id)playerIDs;
- (void)gkVoiceChatSession:(id)arg1 stateUpdate:(unsigned long long)arg2 forPeer:(id)arg3;
- (void)setPlayer:(id)arg1 muted:(_Bool)arg2;
- (void)setMute:(_Bool)arg1 forPlayer:(id)arg2;

@end
