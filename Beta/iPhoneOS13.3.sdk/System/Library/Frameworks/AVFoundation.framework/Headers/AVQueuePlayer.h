/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVPlayer.h>

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer

{
    AVQueuePlayerInternal *_queuePlayer;
}

+ (void)initialize;
+ (id)queuePlayerWithItems:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)removeItem:(id)arg1;
- (void)removeAllItems;
- (id)items;
- (void)advanceToNextItem;
- (id)initWithItems:(id)arg1;
- (void)setActionAtItemEnd:(long long)arg1;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (long long)_defaultActionAtItemEnd;
- (_Bool)canInsertItem:(id)arg1 afterItem:(id)arg2;
- (_Bool)canOverlapPlaybackFromPlayerItem:(id)arg1 toPlayerItem:(id)arg2;

@end
