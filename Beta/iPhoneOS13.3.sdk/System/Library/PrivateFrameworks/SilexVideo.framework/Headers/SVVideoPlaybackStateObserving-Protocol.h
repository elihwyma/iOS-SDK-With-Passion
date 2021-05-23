/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@class NSError;

@protocol SVVideoPlaybackStateObserving <Swift>

@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;
@property (copy, nonatomic, readonly) NSError *error;

@end
