/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SVVideoPlaybackPolicy : NSObject

{
    _Bool _playbackIsAllowedToStart;
    _Bool playbackRequested;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isPlaybackAllowedToStart) _Bool playbackIsAllowedToStart;
@property (nonatomic) _Bool playbackRequested;

- (id)init;

@end
