//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TUSoundPlayer;

@interface TUCallSoundPlayer : NSObject
{
    TUSoundPlayer *_player;
    long long _currentlyPlayingSoundType;
}

@property(nonatomic) long long currentlyPlayingSoundType; // @synthesize currentlyPlayingSoundType=_currentlyPlayingSoundType;
@property(retain, nonatomic) TUSoundPlayer *player; // @synthesize player=_player;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing;
- (void)stopPlaying;
- (BOOL)attemptToPlayDescriptor:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)attemptToPlayDescriptor:(id)arg1;
- (BOOL)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2;
- (id)init;

@end

