/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMoviePlayerController;

@interface MPMoviePlayerViewControllerInternal : NSObject

{
    MPMoviePlayerController *_moviePlayer;
    _Bool _wasDisplayedAnimated;
}

@end
