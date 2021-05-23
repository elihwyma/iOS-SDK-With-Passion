/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class ICUserIdentity;

@interface MPRemoteCommandEvent (MPCAdditions)

@property (nonatomic, readonly) ICUserIdentity *userIdentity;

@end
