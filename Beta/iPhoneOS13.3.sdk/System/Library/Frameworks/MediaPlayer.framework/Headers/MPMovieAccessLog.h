/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class AVPlayerItemAccessLog, NSArray, NSData;

@interface MPMovieAccessLog : NSObject <Swift>

{
    AVPlayerItemAccessLog *_accessLog;
}

@property (nonatomic, readonly) NSData *extendedLogData;
@property (nonatomic, readonly) unsigned long long extendedLogDataStringEncoding;
@property (nonatomic, readonly) NSArray *events;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithAVItemAccessLog:(id)arg1;

@end
