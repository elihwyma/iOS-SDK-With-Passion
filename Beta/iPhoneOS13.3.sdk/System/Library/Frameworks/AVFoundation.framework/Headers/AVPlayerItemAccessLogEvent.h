/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVPlayerItemAccessLogEventInternal, NSDate, NSString;

@interface AVPlayerItemAccessLogEvent : NSObject

{
    AVPlayerItemAccessLogEventInternal *_playerItemAccessLogEvent;
}

@property (nonatomic, readonly) long long numberOfSegmentsDownloaded;
@property (nonatomic, readonly) long long numberOfMediaRequests;
@property (nonatomic, readonly) NSDate *playbackStartDate;
@property (nonatomic, readonly) NSString *URI;
@property (nonatomic, readonly) NSString *serverAddress;
@property (nonatomic, readonly) long long numberOfServerAddressChanges;
@property (nonatomic, readonly) NSString *playbackSessionID;
@property (nonatomic, readonly) double playbackStartOffset;
@property (nonatomic, readonly) double segmentsDownloadedDuration;
@property (nonatomic, readonly) double durationWatched;
@property (nonatomic, readonly) long long numberOfStalls;
@property (nonatomic, readonly) long long numberOfBytesTransferred;
@property (nonatomic, readonly) double transferDuration;
@property (nonatomic, readonly) double observedBitrate;
@property (nonatomic, readonly) double indicatedBitrate;
@property (nonatomic, readonly) double indicatedAverageBitrate;
@property (nonatomic, readonly) double averageVideoBitrate;
@property (nonatomic, readonly) double averageAudioBitrate;
@property (nonatomic, readonly) long long numberOfDroppedVideoFrames;
@property (nonatomic, readonly) double startupTime;
@property (nonatomic, readonly) long long downloadOverdue;
@property (nonatomic, readonly) double observedMaxBitrate;
@property (nonatomic, readonly) double observedMinBitrate;
@property (nonatomic, readonly) double observedBitrateStandardDeviation;
@property (nonatomic, readonly) NSString *playbackType;
@property (nonatomic, readonly) long long mediaRequestsWWAN;
@property (nonatomic, readonly) double switchBitrate;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)serviceIdentifier;
- (id)_common_init;
- (double)currentObservedBitrate;
- (long long)entryReasonCode;

@end
