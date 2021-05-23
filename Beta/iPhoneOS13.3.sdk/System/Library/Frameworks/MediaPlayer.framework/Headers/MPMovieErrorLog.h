/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class AVPlayerItemErrorLog, NSArray, NSData;

@interface MPMovieErrorLog : NSObject <Swift>

{
    AVPlayerItemErrorLog *_errorLog;
}

@property (nonatomic, readonly) NSData *extendedLogData;
@property (nonatomic, readonly) unsigned long long extendedLogDataStringEncoding;
@property (nonatomic, readonly) NSArray *events;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithAVItemErrorLog:(id)arg1;

@end
