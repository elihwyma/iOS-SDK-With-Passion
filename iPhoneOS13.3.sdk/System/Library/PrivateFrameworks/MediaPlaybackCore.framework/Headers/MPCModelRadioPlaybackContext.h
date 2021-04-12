//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPPlaybackContext.h>

#import <MediaPlaybackCore/MPCPlaybackContextPrivateListeningOverridable-Protocol.h>
#import <MediaPlaybackCore/MPCPlaybackContextUserIdentityConsuming-Protocol.h>

@class ICUserIdentity, MPCModelRadioContentReference, MPCPlaybackRequestEnvironment, MPModelRadioStation, NSURL;

@interface MPCModelRadioPlaybackContext : MPPlaybackContext <MPCPlaybackContextUserIdentityConsuming, MPCPlaybackContextPrivateListeningOverridable>
{
    ICUserIdentity *_userIdentity;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPCModelRadioContentReference *_nowPlayingContentReference;
    MPCModelRadioContentReference *_seedContentReference;
    MPModelRadioStation *_radioStation;
    NSURL *_stationURL;
}

+ (Class)queueFeederClass;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSURL *stationURL; // @synthesize stationURL=_stationURL;
@property(retain, nonatomic) MPModelRadioStation *radioStation; // @synthesize radioStation=_radioStation;
@property(copy, nonatomic) MPCModelRadioContentReference *seedContentReference; // @synthesize seedContentReference=_seedContentReference;
@property(copy, nonatomic) MPCModelRadioContentReference *nowPlayingContentReference; // @synthesize nowPlayingContentReference=_nowPlayingContentReference;
@property(copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // @synthesize playbackRequestEnvironment=_playbackRequestEnvironment;
@property(copy, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
// - (void).cxx_destruct;
- (void)setPrivateListeningOverride:(id)arg1;
- (id)descriptionComponents;
- (long long)repeatType;
- (long long)shuffleType;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;

@end

