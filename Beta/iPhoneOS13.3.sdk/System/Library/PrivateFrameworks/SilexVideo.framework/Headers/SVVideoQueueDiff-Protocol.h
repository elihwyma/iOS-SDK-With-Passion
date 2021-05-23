/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@class NSOrderedSet;

@protocol SVVideoQueueDiff <Swift>

@property (nonatomic, readonly) NSOrderedSet *videosToInsert;
@property (nonatomic, readonly) NSOrderedSet *videosToRemove;

@end
