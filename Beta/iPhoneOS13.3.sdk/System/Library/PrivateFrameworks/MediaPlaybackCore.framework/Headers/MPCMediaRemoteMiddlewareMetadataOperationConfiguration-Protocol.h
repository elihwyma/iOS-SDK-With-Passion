/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/Swift-Protocol.h>

@class MPCPlayerPath, MPPropertySet, NSString;

@protocol MPCMediaRemoteMiddlewareMetadataOperationConfiguration <Swift>

@property (nonatomic, readonly) MPCPlayerPath *playerPath;
@property (readonly) CDStruct_339ad95e tracklistRange;
@property (nonatomic, readonly) MPPropertySet *playingItemProperties;
@property (nonatomic, readonly) MPPropertySet *queueItemProperties;
@property (nonatomic, readonly) MPPropertySet *queueSectionProperties;
@property (nonatomic, readonly) NSString *preferredFallbackItemRelationship;

@end
