/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class AVPlayerItemAccessLogEvent, NSDate, NSString;

@interface MPMovieAccessLogEvent : NSObject <Swift>

{
    AVPlayerItemAccessLogEvent *_event;
}

@property (nonatomic, readonly) unsigned long long numberOfSegmentsDownloaded;
@property (nonatomic, readonly) NSDate *playbackStartDate;
@property (nonatomic, readonly) NSString *URI;
@property (nonatomic, readonly) NSString *serverAddress;
@property (nonatomic, readonly) unsigned long long numberOfServerAddressChanges;
@property (nonatomic, readonly) NSString *playbackSessionID;
@property (nonatomic, readonly) double playbackStartOffset;
@property (nonatomic, readonly) double segmentsDownloadedDuration;
@property (nonatomic, readonly) double durationWatched;
@property (nonatomic, readonly) long long numberOfStalls;
@property (nonatomic, readonly) long long numberOfBytesTransferred;
@property (nonatomic, readonly) double observedBitrate;
@property (nonatomic, readonly) double indicatedBitrate;
@property (nonatomic, readonly) long long numberOfDroppedVideoFrames;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithAVItemAccessLogEvent:(id)arg1;

@end
