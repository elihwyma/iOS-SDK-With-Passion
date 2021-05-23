/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@class NSOrderedSet;

@protocol SVVideo;

@protocol SVVideoQueue <Swift>

@property (retain, nonatomic) id <SVVideo> video;
@property (nonatomic, readonly) id <SVVideo> nextVideo;
@property (nonatomic, readonly) id <SVVideo> previousVideo;
@property (nonatomic, readonly) id <SVVideo> firstVideo;
@property (nonatomic, readonly) id <SVVideo> lastVideo;
@property (nonatomic, readonly) NSOrderedSet *videos;

- (unsigned short)numberOfVideos;
- (unsigned short)videoAfterVideo: /* Error: Ran out of types for this method. */;
- (unsigned short)videoBeforeVideo: /* Error: Ran out of types for this method. */;
- (unsigned short)nextVideoOfType: /* Error: Ran out of types for this method. */;
- (unsigned short)previousVideoOfType: /* Error: Ran out of types for this method. */;
- (unsigned short)videoAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)indexOfVideo: /* Error: Ran out of types for this method. */;

@end
