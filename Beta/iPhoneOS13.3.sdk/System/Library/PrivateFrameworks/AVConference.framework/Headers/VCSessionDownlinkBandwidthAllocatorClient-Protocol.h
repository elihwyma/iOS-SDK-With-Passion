/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class NSArray, NSNumber, NSString;

@protocol VCSessionDownlinkBandwidthAllocatorClient

@property (readonly) NSString *uuid;
@property (readonly) NSArray *mediaEntries;
@property (readonly) unsigned int actualNetworkBitrateVideo;
@property (readonly) unsigned int actualNetworkBitrateAudio;
@property (readonly) unsigned int optedInNetworkBitrateVideo;
@property (readonly) unsigned int optedInNetworkBitrateAudio;
@property (readonly) NSNumber *optedInVideoStreamID;
@property (readonly) NSNumber *optedInAudioStreamID;
@property (readonly) unsigned short activeDownlinkVideoStreamID;
@property (readonly) unsigned short activeDownlinkAudioStreamID;
@property (readonly) unsigned char videoQuality;
@property (readonly) unsigned int visibilityIndex;
@property (readonly) unsigned int prominenceIndex;
@property (readonly) _Bool isVisible;
@property (nonatomic, getter=isVideoSuspended) _Bool videoSuspended;

@end
