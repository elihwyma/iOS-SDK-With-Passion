/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/Swift-Protocol.h>

@protocol VUINowPlayingTimeBoundFeature <Swift>

@property (nonatomic) double startTime;
@property (nonatomic, readonly) double duration;
@property (nonatomic, getter=isSkippable) _Bool skippable;

@end
