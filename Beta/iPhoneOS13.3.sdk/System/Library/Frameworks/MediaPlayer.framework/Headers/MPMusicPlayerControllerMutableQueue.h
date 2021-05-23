/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMusicPlayerControllerQueue.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MPMusicPlayerControllerMutableQueue : MPMusicPlayerControllerQueue

{
    NSMutableDictionary *_insertions;
    NSMutableArray *_queueDescriptorsToPrepend;
    NSMutableArray *_itemsToRemove;
}

@property (copy, nonatomic, readonly) NSArray *queueDescriptorsToPrepend;
@property (copy, nonatomic, readonly) NSDictionary *queueInsertions;
@property (copy, nonatomic, readonly) NSArray *removals;
@property (nonatomic, readonly) _Bool hasModifications;

+ (_Bool)supportsSecureCoding;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)insertQueueDescriptor:(id)arg1 afterItem:(id)arg2;

@end
