//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TUDTMFSoundPlayer : NSObject
{
    id /* CDUnknownBlockType */ _playSystemSoundHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ playSystemSoundHandler; // @synthesize playSystemSoundHandler=_playSystemSoundHandler;
// - (void).cxx_destruct;
- (void)attemptToPlaySoundType:(long long)arg1;
- (BOOL)attemptToPlayKey:(unsigned char)arg1;
- (id)init;

@end
