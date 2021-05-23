/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPNowPlayingInfoLyricsItemToken, NSDate;

@interface MPNowPlayingInfoLyricsEvent : NSObject

{
    void *_mediaRemoteLyricsEvent;
}

@property (nonatomic, readonly) void *mediaRemoteLyricsEvent;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) MPNowPlayingInfoLyricsItemToken *token;

- (void)dealloc;
- (id)initWithMediaRemoteLyricsEvent:(void *)arg1;

@end
