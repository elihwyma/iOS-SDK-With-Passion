/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

@class NSString;

@interface _MPCPlayerItemCommand : _MPCPlayerCommand

{
    NSString *_contentItemID;
}

@property (copy, nonatomic) NSString *contentItemID;

@end
