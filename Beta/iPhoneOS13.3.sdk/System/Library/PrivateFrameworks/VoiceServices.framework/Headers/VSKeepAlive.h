/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface VSKeepAlive : NSObject

{
    NSXPCConnection *_serverConnection;
    long long _audioType;
    _Bool _active;
    _Bool _keepAudioSessionActive;
}

@property (nonatomic) long long audioType;
@property (nonatomic) _Bool active;
@property (nonatomic) _Bool keepAudioSessionActive;

- (void)dealloc;
- (id)_serverConnection;
- (void)_ensureKeepAliveMaintenance;
- (id)_remoteKeepAlive;

@end
