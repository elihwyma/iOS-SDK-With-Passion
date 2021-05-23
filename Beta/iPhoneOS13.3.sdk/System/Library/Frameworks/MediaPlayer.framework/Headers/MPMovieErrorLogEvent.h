/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class AVPlayerItemErrorLogEvent, NSDate, NSString;

@interface MPMovieErrorLogEvent : NSObject <Swift>

{
    AVPlayerItemErrorLogEvent *_event;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *URI;
@property (nonatomic, readonly) NSString *serverAddress;
@property (nonatomic, readonly) NSString *playbackSessionID;
@property (nonatomic, readonly) long long errorStatusCode;
@property (nonatomic, readonly) NSString *errorDomain;
@property (nonatomic, readonly) NSString *errorComment;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithAVItemErrorLogEvent:(id)arg1;

@end
