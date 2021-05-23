/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/Swift-Protocol.h>

@class MPAVItem, NSString;

@protocol MPAVQueueControllerDelegate, MPAVQueueCoordinating;

@protocol MPAVQueueController <Swift>

@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) _Bool hasUserMutations;
@property (nonatomic, readonly) MPAVItem *currentItem;
@property (weak, nonatomic) id <MPAVQueueControllerDelegate> delegate;
@property (retain, nonatomic) id <MPAVQueueCoordinating> queueCoordinator;
@property (nonatomic, readonly) long long displayCount;
@property (nonatomic) long long repeatType;
@property (nonatomic) long long shuffleType;
@property (nonatomic, readonly) unsigned long long supportedInsertionPositions;
@property (nonatomic, readonly) _Bool userCanChangeShuffleAndRepeatType;
@property (nonatomic) _Bool allowsQueueModifications;

- (unsigned short)reset;
- (unsigned short)contentItemIDWithCurrentItemOffset:mode:didReachEnd: /* Error: Ran out of types for this method. */;
- (unsigned short)reloadWithPlaybackContext:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)player:currentItemDidChangeFromItem:toItem: /* Error: Ran out of types for this method. */;
- (unsigned short)jumpToContentItemID: /* Error: Ran out of types for this method. */;
- (unsigned short)canSkipItem: /* Error: Ran out of types for this method. */;
- (unsigned short)itemForContentItemID: /* Error: Ran out of types for this method. */;
- (unsigned short)addPlaybackContext:afterContentItemID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addPlaybackContext:atPosition:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)moveContentItemID:afterContentItemID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)reshuffle;
- (unsigned short)removeContentItemID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addPlaybackContext:atPosition:jumpToIt:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isPlaceholderItemForContentItemID: /* Error: Ran out of types for this method. */;
- (unsigned short)updateLocationDependentPropertiesForItem: /* Error: Ran out of types for this method. */;
- (unsigned short)addPlaybackContext:atPosition:jumpToIt:userModification:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)displayIndexForContentItemID: /* Error: Ran out of types for this method. */;
- (unsigned short)handlePlaybackFailureForItem: /* Error: Ran out of types for this method. */;
- (unsigned short)jumpToFirstContentItem;

@end
