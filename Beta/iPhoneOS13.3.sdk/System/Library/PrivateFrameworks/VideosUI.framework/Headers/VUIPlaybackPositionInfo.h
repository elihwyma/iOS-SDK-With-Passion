/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VUIPlaybackPositionInfo : NSObject <Swift>

{
    NSNumber *_bookmarkTime;
    NSNumber *_playCount;
    NSNumber *_hasBeenPlayed;
}

@property (retain, nonatomic) NSNumber *bookmarkTime;
@property (retain, nonatomic) NSNumber *playCount;
@property (retain, nonatomic) NSNumber *hasBeenPlayed;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
