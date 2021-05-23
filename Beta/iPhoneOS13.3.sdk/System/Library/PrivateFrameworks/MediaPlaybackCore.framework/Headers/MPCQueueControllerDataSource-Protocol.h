/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/Swift-Protocol.h>

@protocol MPCQueueControllerDataSource <Swift>

@property (nonatomic, readonly) _Bool containsLiveStream;
@property (nonatomic, readonly) _Bool containsTransportableContent;

- (unsigned short)loadPlaybackContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)itemForItem:inSection: /* Error: Ran out of types for this method. */;

@end
