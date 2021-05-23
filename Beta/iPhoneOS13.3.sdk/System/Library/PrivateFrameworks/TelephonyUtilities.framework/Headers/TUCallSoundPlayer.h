/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class TUSoundPlayer;

@interface TUCallSoundPlayer : NSObject

{
    TUSoundPlayer *_player;
    long long _currentlyPlayingSoundType;
}

@property (retain, nonatomic) TUSoundPlayer *player;
@property (nonatomic) long long currentlyPlayingSoundType;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;

- (id)init;
- (void)stopPlaying;
- (_Bool)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)attemptToPlayDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2;
- (_Bool)attemptToPlayDescriptor:(id)arg1;

@end
