/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/Swift-Protocol.h>

@class MPSectionedCollection, NSIndexPath;

@protocol MPCMediaRemoteMiddlewareModelObjectsProviding <Swift>

@property (nonatomic, readonly) MPSectionedCollection *sourceContentItems;
@property (nonatomic, readonly) MPSectionedCollection *modelObjects;
@property (copy, nonatomic, readonly) NSIndexPath *playingIndexPath;

@end
