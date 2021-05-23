/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class MPCModelRadioContentReference, MPModelRadioStation, NSURL;

@protocol MPCRadioPlaybackIntentTracklistTokenRadioStationMetadata;

@interface MPCRadioPlaybackIntentTracklistToken : NSObject <Swift>

{
    MPCModelRadioContentReference *_nowPlayingContentReference;
    MPCModelRadioContentReference *_seedContentReference;
    MPModelRadioStation *_radioStation;
    NSURL *_radioStationURL;
    id <MPCRadioPlaybackIntentTracklistTokenRadioStationMetadata> _radioStationPlaybackMetadata;
}

@property (copy, nonatomic) MPCModelRadioContentReference *nowPlayingContentReference;
@property (copy, nonatomic) MPCModelRadioContentReference *seedContentReference;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (copy, nonatomic) NSURL *radioStationURL;
@property (retain, nonatomic) id <MPCRadioPlaybackIntentTracklistTokenRadioStationMetadata> radioStationPlaybackMetadata;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
