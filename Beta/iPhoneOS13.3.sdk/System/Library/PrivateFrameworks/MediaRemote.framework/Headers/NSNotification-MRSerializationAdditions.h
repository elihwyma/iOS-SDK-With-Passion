/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSNotification.h>

@class _MRNowPlayingPlayerPathProtobuf;

@interface NSNotification (MRSerializationAdditions)

@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

@end
