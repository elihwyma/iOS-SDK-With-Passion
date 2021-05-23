/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPPlaybackContext.h>

@class MPMovie;

@interface MPCSingleMoviePlaybackContext : MPPlaybackContext

{
    MPMovie *_movie;
}

@property (nonatomic, readonly) MPMovie *movie;

+ (Class)queueFeederClass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMovie:(id)arg1;

@end
