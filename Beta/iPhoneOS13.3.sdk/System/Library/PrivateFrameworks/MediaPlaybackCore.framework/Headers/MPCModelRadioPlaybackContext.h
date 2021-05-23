/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPPlaybackContext.h>

@class ICUserIdentity, MPCModelRadioContentReference, MPCPlaybackRequestEnvironment, MPModelRadioStation, NSString, NSURL;

@interface MPCModelRadioPlaybackContext : MPPlaybackContext

{
    ICUserIdentity *_userIdentity;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPCModelRadioContentReference *_nowPlayingContentReference;
    MPCModelRadioContentReference *_seedContentReference;
    MPModelRadioStation *_radioStation;
    NSURL *_stationURL;
}

@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (copy, nonatomic) MPCModelRadioContentReference *nowPlayingContentReference;
@property (copy, nonatomic) MPCModelRadioContentReference *seedContentReference;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (copy, nonatomic) NSURL *stationURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) ICUserIdentity *userIdentity;

+ (_Bool)supportsSecureCoding;
+ (Class)queueFeederClass;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)shuffleType;
- (long long)repeatType;
- (id)descriptionComponents;
- (void)setPrivateListeningOverride:(id)arg1;
- (void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
