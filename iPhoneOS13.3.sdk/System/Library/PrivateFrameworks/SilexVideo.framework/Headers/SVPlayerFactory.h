//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerFactory-Protocol.h>

@protocol SVVolumeProviding;

@interface SVPlayerFactory : NSObject <SVPlayerFactory>
{
    int _audioMode;
    id <SVVolumeProviding> _volumeProvider;
}

@property(readonly, nonatomic) id <SVVolumeProviding> volumeProvider; // @synthesize volumeProvider=_volumeProvider;
@property(readonly, nonatomic) int audioMode; // @synthesize audioMode=_audioMode;
// - (void).cxx_destruct;
- (id)createPlayer;
- (id)initWithAudioMode:(int)arg1 volumeProvider:(id)arg2;

@end

